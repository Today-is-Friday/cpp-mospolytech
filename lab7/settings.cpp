#include <string>

#include "lab7-4.h"

std::map<std::string, std::string> Settings::Map;

// Settings::Settings() {}

void Settings::Add(const std::string& key, const std::string& value) {
  Map[key] = value;
}

std::string Settings::Get(const std::string& key) {
  std::string value = "";
  if (Map.contains(key)) value = Map.at(key);

  return value;
}

void Settings::Print() {
  for (auto it = Map.begin(); it != Map.end(); ++it)
    std::cout << it->first << " = " << it->second << "\n";
}