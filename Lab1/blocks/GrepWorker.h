#ifndef LAB1_GREPWORKER_H
#define LAB1_GREPWORKER_H

#include "Worker.h"

class GrepWorker : public Worker {
private:
    std::string word;
public:
    std::list<std::string> execute(std::list<std::string> &text) override;

    GrepWorker(const std::list<std::string> &params);
};

#endif
