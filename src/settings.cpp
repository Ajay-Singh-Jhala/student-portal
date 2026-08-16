#include <iostream>
#include <string>
#include <map>

std::map<std::string, bool> appSettings = {
    {"darkMode", false},
    {"emailNotifications", true},
    {"autoSave", true}
};
void printSettings(const std::map<std::string, bool>& settings) {
    std::cout << "--- Current Settings ---" << std::endl;
    for (const auto& pair : settings) {
        std::cout << pair.first << ": " << (pair.second ? "ON" : "OFF") << std::endl;
    }
}
void toggleSetting(std::map<std::string, bool>& settings, const std::string& key) {
    if (settings.find(key) != settings.end()) {
        settings[key] = !settings[key];
        std::cout << key << " toggled to " << (settings[key] ? "ON" : "OFF") << std::endl;
    } else {
        std::cout << "Setting not found!" << std::endl;
    }
}
void resetToDefaults(std::map<std::string, bool>& settings) {
    settings["darkMode"] = false;
    settings["emailNotifications"] = true;
    settings["autoSave"] = true;
    std::cout << "Settings have been reset to defaults." << std::endl;
}
