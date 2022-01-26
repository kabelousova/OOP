#include "WrongConfigFileException.h"

const char *WrongConfigFileException::what() const noexcept {
    return _message.c_str();
}

WrongConfigFileException::WrongConfigFileException(const std::string &message) {
    _message = message;
}
