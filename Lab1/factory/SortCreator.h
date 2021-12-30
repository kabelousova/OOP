//
// Created by vlaserega on 29.12.2021.
//

#ifndef LAB1_SORTCREATOR_H
#define LAB1_SORTCREATOR_H


#include "Creator.h"

class SortCreator : public Creator{
    Worker *create(const std::list<std::string> &params) override;
};


#endif //LAB1_SORTCREATOR_H
