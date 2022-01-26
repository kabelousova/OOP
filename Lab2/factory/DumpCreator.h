#ifndef LAB1_DUMPCREATOR_H
#define LAB1_DUMPCREATOR_H


#include "Creator.h"
#include "../blocks/DumpWorker.h"

class DumpCreator : public Creator {
private:
    DumpWorker _worker;
public:
    DumpCreator();

    Worker &getWorker() override;
};


#endif
