//
// Created by Nick Winder on 2019-05-31.
//

#include "Parent.hpp"

std::vector<Child> Parent::getChildren() const { return m_children; }

void Parent::addChild(Child child) { m_children.emplace_back(child); }
