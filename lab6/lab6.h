#ifndef LAB_6_H
#define LAB_6_H

#include <exception>
#include <iostream>
#include <string>

enum class ErrorCode { TooSmall, TooBig };

class MyException : public std::exception {
 private:
  ErrorCode code;
  std::string message;

 public:
  MyException(ErrorCode c, const std::string& msg) : code(c), message(msg) {}

  ErrorCode getCode() const { return code; }

  const char* what() const noexcept override { return message.c_str(); }
};

#endif