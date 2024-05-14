//
// Created by German Albershteyn on 13.05.2024.
//

#include "SoldState.h"
#include "GumballMachine.h"
#include <iostream>

SoldState::SoldState(GumballMachine *gumballMachine) {
  this->gumballMachine = gumballMachine;
}

void SoldState::insertQuarter() {
  std::cout << "Please wait, we’re already giving you a gumball\n";
}

void SoldState::ejectQuarter() {
  std::cout << "Sorry, you already turned the crank\n";
}

void SoldState::turnCrank() {
  std::cout << "Turning twice doesn’t get you another gumball!\n";
}

void SoldState::dispense() {
  gumballMachine->releaseBall();
  if (gumballMachine->getCount() > 0) {
    gumballMachine->setState(gumballMachine->getNoQuarterState());
  } else {
    std::cout << "Oops, out of gumballs!\n";
    gumballMachine->setState(gumballMachine->getSoldoutState());
  }
}
