//
// Created by Nick Winder on 2019-05-31.
//

#pragma once

#include "Child.hpp"

#include <vector>

class Parent {
public:
  void addChild(Child child);
  std::vector<Child> getChildren() const;
private:
  std::vector<Child> m_children;
};
