#ifndef LAB1_SORTWORKER_H
#define LAB1_SORTWORKER_H

#include "Worker.h"

class SortWorker : public Worker {
    std::list<std::string> execute(std::list<std::string> &text, const std::list<std::string> &params) override;
};

#endif
