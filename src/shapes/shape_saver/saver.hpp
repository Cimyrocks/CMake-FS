#ifndef SAVER_HPP
#define SAVER_HPP

#include <string>

class Saver {
  std::string filepath;
public:
  Saver(std::string filepath);
  void save(double area, double perimeter);
};

#endif