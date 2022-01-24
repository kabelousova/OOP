#include "WrongNumberOfArgsException.h"

const char *WrongNumberOfArgsException::what() const noexcept {
    return _message.c_str();
}

WrongNumberOfArgsException::WrongNumberOfArgsException(const std::string &message) {
    _message = message;
}
