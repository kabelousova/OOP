#ifndef LAB1_DUMPCREATOR_H
#define LAB1_DUMPCREATOR_H


#include "Creator.h"

class DumpCreator : public Creator {
    Worker *create(const std::list<std::string> &params) override;
};


#endif
