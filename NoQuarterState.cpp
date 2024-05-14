//
// Created by German Albershteyn on 13.05.2024.
//

#include "NoQuarterState.h"
#include "GumballMachine.h"
#include <iostream>

NoQuarterState::NoQuarterState(GumballMachine *gumballMachine) {
  this->gumballMachine = gumballMachine;
}

void NoQuarterState::insertQuarter() {
  std::cout << "You inserted a quarter\n";
  gumballMachine->setState(gumballMachine->getHasQuarterState());
}

void NoQuarterState::ejectQuarter() {
  std::cout << "You haven’t inserted a quarter\n";
}

void NoQuarterState::turnCrank() {
  std::cout << "You turned, but there’s no quarter\n";
}

void NoQuarterState::dispense() { std::cout << "You need to pay first\n"; }
