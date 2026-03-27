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
