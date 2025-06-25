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

## 📦 Setup & Run

1. **Clone the repository**
   ```bash
   git clone https://github.com/yourusername/simple-file-explorer.git
   cd simple-file-explorer
   ```

2. **Build the project**

   Example with `g++` (make sure you link ImGui and its dependencies):
   ```bash
   g++ main.cpp -Ipath_to_imgui -Llibs -lGL -ldl -lglfw -o file_explorer
   ```

3. **Run**
   ```bash
   ./file_explorer
   ```

> ✅ Ensure GLFW, OpenGL, and ImGui are correctly linked on your platform.

## 🖼️ Screenshot

![screenshot](screenshot.png)

## 📄 License

This project is licensed under the MIT License.
