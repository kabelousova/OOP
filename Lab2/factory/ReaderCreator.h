#ifndef LAB1_READERCREATOR_H
#define LAB1_READERCREATOR_H


#include "Creator.h"
#include "../blocks/ReaderWorker.h"

class ReaderCreator : public Creator {
private:
    ReaderWorker _worker;
public:
    Worker &getWorker() override;

    ReaderCreator();
};


#endif
