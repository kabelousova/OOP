#ifndef LAB1_REPLACECREATOR_H
#define LAB1_REPLACECREATOR_H


#include "Creator.h"

class ReplaceCreator : public Creator{
public:
    Worker *create(const std::list<std::string> &params) override;
};


#endif