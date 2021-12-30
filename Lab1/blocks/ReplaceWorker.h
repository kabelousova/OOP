#ifndef LAB1_REPLACEWORKER_H
#define LAB1_REPLACEWORKER_H

#include "Worker.h"

class ReplaceWorker : public Worker {
private:
    std::string word_to_replace, word_for_replace;
public:
    std::list<std::string> execute(std::list<std::string> &text) override;

    ReplaceWorker(const std::list<std::string> &params);
};

#endif
