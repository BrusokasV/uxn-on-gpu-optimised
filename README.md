# Uxn VM on GPU

This project is an optimisation of [Uxn on GPU](https://github.com/AndreiGhita2002/uxn-on-gpu), an implementation of the [Uxn](https://wiki.xxiivv.com/site/uxn.html) virtual machine that runs almost completely on the GPU! 

This project primarily aims to improve the performance of the previous implementation rather than address bugs.

This README largely follows the structure and steps outlined in the original README.md.

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
