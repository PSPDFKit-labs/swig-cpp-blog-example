//
// Created by Nick Winder on 2019-05-31.
//

#include "Child.hpp"

Child::Child(double sizeOfHead) : m_sizeOfHead(sizeOfHead) {}

uint8_t Child::getNumberOfLegs() const { return 2; }

double Child::getSizeOfHead() const { return m_sizeOfHead; }

void Child::setSizeOfHead(double sizeOfHead) { m_sizeOfHead = sizeOfHead; }
