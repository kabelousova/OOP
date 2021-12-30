
#ifndef LAB1_READERWORKER_H
#define LAB1_READERWORKER_H

#include "Worker.h"

class ReaderWorker : public Worker {
private:
    std::string file_name;
public:
    std::list<std::string> execute(std::list<std::string> &text) override;

    ReaderWorker(const std::list<std::string> &params);
};

#endif
