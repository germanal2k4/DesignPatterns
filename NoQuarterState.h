//
// Created by German Albershteyn on 13.05.2024.
//

#ifndef UNTITLED19_NOQUARTERSTATE_H
#define UNTITLED19_NOQUARTERSTATE_H

#include "State.h"

class  GumballMachine;

class NoQuarterState : public State {
  GumballMachine *gumballMachine;

public:
  explicit NoQuarterState(GumballMachine *gumballMachine);
  void insertQuarter() override;
  void ejectQuarter() override;
  void turnCrank() override;
  void dispense() override;
};

#endif // UNTITLED19_NOQUARTERSTATE_H
