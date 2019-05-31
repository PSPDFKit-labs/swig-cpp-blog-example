//
// Created by Nick Winder on 2019-05-31.
//

#pragma once

#include <cstdint>

class Child {
public:
  Child() = default;
  explicit Child(double sizeOfHead);
  uint8_t getNumberOfLegs() const;
  double getSizeOfHead() const;
  void setSizeOfHead(double sizeOfHead);
private:
  double m_sizeOfHead;
};
