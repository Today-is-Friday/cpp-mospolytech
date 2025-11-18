#ifndef LAB_7_4_H
#define LAB_7_4_H

#include <iostream>
#include <map>
#include <string>
#include <vector>

class Settings {
 private:
  static std::map<std::string, std::string> Map;

 public:
  // Settings();
  static void Add(const std::string& key, const std::string& value);
  static std::string Get(const std::string& key);
  static void Print();
};

void printVector(const std::vector<float>& v);

#endif