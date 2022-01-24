#ifndef LAB1_WRONGCONFIGFILEEXCEPTION_H
#define LAB1_WRONGCONFIGFILEEXCEPTION_H


#include <exception>
#include <string>

class WrongConfigFileException : public std::exception {
private:
    std::string _message;
public:
    explicit WrongConfigFileException(const std::string &message);

    const char *what() const noexcept override;
};


#endif
