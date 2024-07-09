# EJet Systems

### Why

The original systems were built from the ground up on an async multithreaded environment. This was crazy fast but causes problems if we choose to ever implement the systems (or at least part of them)
in WASM. This
project will be a clean ground up rewrite of the systems that will allow us to future-proof the implementation by allowing for use in multiple environments including but not limited to Win32 (
external), WASM and X-Plane.

### Project Structure

This repo houses all the systems `src/systems` as well as a debug gui that is platform-agnostic (glfw & Vulkan) `src/Renderer`. The entry point is set up to create the debug gui in the main thread and
run the systems in another. The system entry point is located in the `SystemMain.hpp` which would be the entry point of a WASM or single threaded project.

Systems are divided into their own respective classes which are children of the `System` class. Communication between systems is handled with references to the system state.

### Building

```shell
git clone --recursive
cd EjetSystemsCpp
mkdir build
cd build
cmake ..
cmake --build .
```
