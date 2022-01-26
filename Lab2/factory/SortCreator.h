#ifndef LAB1_SORTCREATOR_H
#define LAB1_SORTCREATOR_H


#include "Creator.h"
#include "../blocks/SortWorker.h"

class SortCreator : public Creator {
private:
    SortWorker _worker;
public:
    SortCreator();

    Worker &getWorker() override;
};


#endif
