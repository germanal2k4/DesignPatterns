//
// Created by German Albershteyn on 13.05.2024.
//

#ifndef UNTITLED19_SOLDSTATE_H
#define UNTITLED19_SOLDSTATE_H

#include "State.h"

class GumballMachine;

class SoldState : public State {
  GumballMachine *gumballMachine;

public:
  explicit SoldState(GumballMachine *gumballMachine);
  void insertQuarter() override;
  void ejectQuarter() override;
  void turnCrank() override;
  void dispense() override;
};

#endif // UNTITLED19_SOLDSTATE_H
