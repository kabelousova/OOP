#ifndef LAB1_REPLACEWORKER_H
#define LAB1_REPLACEWORKER_H

#include "Worker.h"

class ReplaceWorker : public Worker {
public:
    std::list<std::string> execute(std::list<std::string> &text, const std::list<std::string> &params) override;
};

#endif
