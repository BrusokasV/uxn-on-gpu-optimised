# Uxn VM on GPU - Optimised 

This project is an optimisation of the [Uxn on GPU](https://github.com/AndreiGhita2002/uxn-on-gpu) project, completed by a 4th Year student last year. Uxn on GPU is a GPU-based implementation of the Uxn virtual machine, the host-side code launching a compute shader on the GPU and evaluating bytecode of Uxn programs.

This file will largely follow the structure and steps outlined in the original manual.md.

## Compilation

### Prerequisites

You will need the following installed on your system:

- **CMake** (version 3.29 or newer)
- **A C++20 compiler** (GCC, Clang, or MSVC)
- **Vulkan SDK**
    - macOS: `brew install vulkan-sdk`
    - Linux: Install via package manager (e.g. `libvulkan-dev`)
    - Windows: [Download from LunarG](https://vulkan.lunarg.com/sdk/home)
- **GLFW** (>= 3.4)
- **GLM**
- **glslc** (part of the Vulkan SDK, used to compile shaders)

### Steps

```bash
# Clone the repo
git clone https://github.com/BrusokasV/uxn-on-gpu-optimised.git
cd uxn-on-gpu

# Create a build directory
mkdir build && cd build

# Generate build files
cmake ..

# Build the project
cmake --build .
```

Note: the original implementation has been developed on MacOS, while this project was undertaken from a Windows machine. I am only able to guarantee compilation on Windows.

# Usage:
``uxn-on-gpu [-dm] <filename>``

- `<filename>` - Uxn .rom file you want to run inside the VM.
  There is a great selection of programs found on the internet in the `/uxn-programs/` directory.
  Recommended examples: ``snake.rom``, ``dvd.rom``, ``bunnymark.rom``.
- `-d` - enable debug more; additional print-outs for internal operations.
- `-m` - enable performance metrics; calculates average FPS, minimum and maximum frame time as well as total program duration, contributions of each stage of the main loop to the runtime.

Make sure you check the README inside `uxn-programs` as not all programs are yet supported by the VM!

# Bundled programs
These are some bundled programs taken from various sources, including those created by the author of the original implementation.
Programs are grouped by how well they function on this implementation of the VM.
All programs are functional on the [100R](https://100r.co/site/uxn.html) runtime.

- `.tal` uxntal source code file
- `.rom` compiled uxn assembly ready to be loaded up in the VM

## Functional
- `bunnymark` benchmarking program; still shows some display bugs, but performs well, it was used to benchmark the performance
- `stencil` calucaltes 3-D stencil in a time loop. Used for benchmarking. Beware, runs long
- `dvd` the classic bouncing dvd program
- `image` displays some art
- `snake` the classic snake game on uxn
- `spacing` type in a string and it will print it out spaced out

## Semi Functional
- `mouse` tests mouse support, renders better than in previous implementation, but fails on input
- `xo` tic tac toe, board displays but nothing else seems to work, produces the same result as on the unoptimised version

## Not Function
- `cube3d` should render a 3D cube, produces the same result as on the unoptimised version
- `auto` tests the Screen/auto port, produces the same result as on the unoptimised version
- `corners` displays sprite approximately in the windows corners, produces the same result as on the unoptimised version
- `pixel` should display colourful pixels, produces the same result as on the unoptimised version
- `unit_test` produces the same result as on the unoptimised version
- `fib` should calculate the fibonacci series, produces the same result as on the unoptimised version
