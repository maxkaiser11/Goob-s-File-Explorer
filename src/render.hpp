#pragma once

#include <cstdint>
#include <filesystem>
#include <string_view>

namespace fs = std::filesystem;

class WindowClass
{
public:
    WindowClass()
        : currentPath(fs::current_path()), selectedEntry(fs::path{}) {};

    void Draw(std::string_view label);

private:
    void DrawMenu();
    void DrawContent();
    void DrawActions();
    void DrawFilter();

    void openFileWithDefaultEditor();
    void renameFilePopup();
    void deleteFilePopup();
    bool renameFile(const fs::path &old_path, const fs::path &new_path);
    bool deleteFile(const fs::path &path);


private:
    fs::path currentPath;
    fs::path selectedEntry;

    bool renameDialogueOpen = false;
    bool deleteDialogueOpen = false;
};


void render(WindowClass &window_obj);
