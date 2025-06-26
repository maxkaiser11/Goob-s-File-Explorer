# 🗂️ Goob's File Explorer

A minimal, modern **file explorer** built with **C++** and [**Dear ImGui**](https://github.com/ocornut/imgui).  
This project showcases basic UI interaction and filesystem manipulation using a clean and responsive interface.

---

## ✨ Features

- 📁 Browse and navigate directories
- 🖱️ Open folders via intuitive UI
- 📄 List all files and folders
- 🗑️ Delete files and folders
- ✏️ Rename items
- 🧭 Lightweight, ImGui-powered interface

---

## 🛠️ Tech Stack

- **C++17/20**
- **Dear ImGui**
- **`std::filesystem`**
- **CMake**
- Optional: **GLFW**, **OpenGL** (via vcpkg)

---

## ⚙️ Setup & Run

### 📦 Prerequisites

- C++ compiler with C++17 or newer
- [CMake](https://cmake.org/)
- [vcpkg](https://vcpkg.io/en/index.html) (for dependencies like ImGui, GLFW)

### 🧰 Install Dependencies with VCPKG

```bash
git clone https://github.com/microsoft/vcpkg.git
cd vcpkg

# For Windows
./bootstrap-vcpkg.bat

# For Unix
./bootstrap-vcpkg.sh
```

In your `CMakeLists.txt`, set the VCPKG directory path:

```cmake
set(VCPKG_DIR "C:/Path/To/vcpkg")
```

---

### 🛠️ Build Instructions

1. **Clone the repository**
   ```bash
   git clone https://github.com/maxkaiser11/Goob-s-File-Explorer.git
   cd Goob-s-File-Explorer
   ```

2. **Configure and build with CMake**
   ```bash
   mkdir build
   cd build
   cmake ..
   cmake --build .
   ```

3. **Run the app**
   ```bash
   ./file_explorer
   ```

✅ Ensure all dependencies (ImGui, GLFW, OpenGL) are linked correctly in `CMakeLists.txt`.

---

## 🖼️ Preview

![Screenshot](screenshot.png)

---

## 📄 License

This project is licensed under the [MIT License](LICENSE).

---

Made with ❤️ by [Max Kaiser](https://github.com/maxkaiser11)
