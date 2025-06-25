# 🗂️ Simple File Explorer

A minimal file explorer built with C++ and [Dear ImGui](https://github.com/ocornut/imgui), designed to demonstrate basic UI interaction and filesystem operations.

## 🚀 Features

- 📁 Navigate through directories
- 🖱️ Open folders with a click
- 📄 Display files and folders
- 🗑️ Delete files and folders
- ✏️ Rename files and folders
- 🧭 Clean and interactive ImGui interface

## 🛠️ Built With

- **C++**
- **Dear ImGui**
- **C++17/20 Filesystem API** (`std::filesystem`)
- **CMake**

## 📦 Setup & Run

1. **Clone the repository**
   ```bash
   git clone https://github.com/maxkaiser11/Goob-s-File-Explorer.git
   cd Goob-s-File-Explorer
   ```

2. **Build with CMake**
   ```bash
   mkdir build
   cd build
   cmake ..
   cmake --build .
   ```

3. **Run the executable**
   ```bash
   ./file_explorer
   ```

> ✅ Make sure all dependencies like ImGui, GLFW, and OpenGL are correctly linked via your `CMakeLists.txt`.

## 🖼️ Screenshot

![screenshot](screenshot.png)

## 📄 License

This project is licensed under the MIT License.

