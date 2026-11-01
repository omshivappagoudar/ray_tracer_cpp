# C++ Ray Tracer

A work-in-progress ray tracer following [Ray Tracing in One Weekend](https://raytracing.github.io/books/RayTracingInOneWeekend.html) by Peter Shirley, Trevor David Black, and Steve Hollasch.

This is my second C++ project. I am using it to learn C++, computer graphics, multi-file project organisation, CMake, and Git.

## Current progress

The program currently generates a 256 × 256 colour gradient in PPM format and reports scanline progress in the terminal. Ray tracing itself has not been implemented yet.

- [x] Set up the CMake build
- [x] Build and run using Ubuntu through WSL
- [x] Generate and view a PPM image
- [x] Add scanline progress reporting
- [ ] Implement the vector utilities
- [ ] Add rays and a basic camera
- [ ] Render a sphere
- [ ] Add materials and light scattering
- [ ] Experiment with original scenes

## Project files

| Path | Purpose |
| --- | --- |
| `src/main.cpp` | Program entry point and current image-generation code |
| `CMakeLists.txt` | Build configuration |
| `.gitignore` | Excludes generated build folders from Git |
| `image.ppm` | Generated image output |
| `build-linux/` | Local Linux build files; ignored by Git |
| `build/` | Local Windows build files, if present; ignored by Git |

Additional source and header files will be added as the renderer develops.

## Build and run

The instructions below use Ubuntu, either directly or through Windows Subsystem for Linux (WSL). Requirements: a C++17 compiler and CMake 3.16 or newer.

### Install tools on Ubuntu

```bash
sudo apt update
sudo apt install build-essential cmake
```

### Configure the project

Open a terminal in the repository's root folder, which contains `CMakeLists.txt`, and run:

```bash
cmake -S . -B build-linux -DCMAKE_BUILD_TYPE=Release
```

### Compile and render

```bash
cmake --build build-linux && ./build-linux/raytracer > image.ppm
```

The `&&` runs the renderer only if the build succeeds. The output file is replaced on each run.

Image data is written through `std::cout` and redirected to `image.ppm`. Progress messages use `std::clog`, so they remain visible in the terminal.

After editing the code, save the files and repeat the compile-and-render command.

### Using WSL from Windows

From PowerShell in the repository's root folder, enter Ubuntu with:

```powershell
wsl -d Ubuntu
```

Run the Ubuntu build commands above inside that Linux shell. Use `exit` to return to PowerShell. Keep Linux and Windows build files in separate folders.

## View the image

Open `image.ppm` in a viewer that supports PPM, such as a PPM preview extension in VS Code. Opening it in a text editor shows the header and RGB values rather than the rendered picture.

The current image transitions from black at the top-left to red at the top-right, green at the bottom-left, and yellow at the bottom-right.

## Learning goals

- Understand how C++ source code becomes an executable.
- Organise code into focused source and header files.
- Apply vector maths to rays, geometry, and lighting.
- Learn to debug image output and rendering behaviour.
- Practice Git commits, branches, and project documentation.

## Acknowledgements

This is a tutorial-based learning project, not an independently designed rendering engine. The initial implementation follows *Ray Tracing in One Weekend*. Original additions and experiments will be documented as they are implemented.
