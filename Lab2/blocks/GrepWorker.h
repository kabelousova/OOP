#ifndef LAB1_GREPWORKER_H
#define LAB1_GREPWORKER_H

#include "Worker.h"

class GrepWorker : public Worker {
public:
    std::list<std::string> execute(std::list<std::string> &text, const std::list<std::string> &params) override;

};

#endif
