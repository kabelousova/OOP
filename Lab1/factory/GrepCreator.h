#ifndef LAB1_GREPCREATOR_H
#define LAB1_GREPCREATOR_H


#include "Creator.h"

class GrepCreator : public Creator{
public:
    Worker *create(const std::list<std::string> &params) override;
};


#endif
