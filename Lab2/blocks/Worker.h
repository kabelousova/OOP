#ifndef LAB1_WORKER_H
#define LAB1_WORKER_H

#include <string>
#include <list>

class Worker {
public:
    virtual std::list<std::string> execute(std::list<std::string> &text, const std::list<std::string> &params) = 0;
};

#endif
