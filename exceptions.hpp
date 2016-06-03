#ifndef _EXCEPTIONS_HPP
#define _EXCEPTIONS_HPP

#include <exception>

class IllegalAddressException: public std::exception
{
  virtual const char *what() const throw()
  {
    return "Illegal address";
  }
};

class InvalidHexFileException: public std::exception
{
  virtual const char *what() const throw()
  {
    return "Illegal HEX file";
  }
};

#endif

