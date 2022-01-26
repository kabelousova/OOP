#ifndef LAB1_WRONGNUMBEROFARGSEXCEPTION_H
#define LAB1_WRONGNUMBEROFARGSEXCEPTION_H


#include <exception>
#include <string>

class WrongNumberOfArgsException : public std::exception {
private:
    std::string _message;
public:
    explicit WrongNumberOfArgsException(const std::string& message);
    const char* what() const noexcept override;
};


#endif
