#ifndef ILLEGALEXCEPTION_HPP
#define ILLEGALEXCEPTION_HPP
#include <stdexcept>

class IllegalException: public std::logic_error
{
  public:
    IllegalException() : std::logic_error("illegal exception") {}
    ~IllegalException() = default;
};

#endif
