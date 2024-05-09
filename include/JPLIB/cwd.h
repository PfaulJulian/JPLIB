#pragma once

#include <filesystem>
#include <optional>

namespace jp {
    auto get_cwd() -> std::optional<std::filesystem::path> {
        auto error_code = std::error_code();
        auto cwd = std::filesystem::current_path(error_code);

        return error_code ?
               std::nullopt :
               std::make_optional<std::filesystem::path>(cwd);
    }
}