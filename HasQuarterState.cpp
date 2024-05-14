//
// Created by German Albershteyn on 13.05.2024.
//

#include "HasQuarterState.h"
#include "iostream"

HasQuarterState::HasQuarterState(GumballMachine *gumballMachine) : engine(std::random_device()()), distribution(1, 10) {
  this->gumballMachine = gumballMachine;
}
void HasQuarterState::insertQuarter() {
  std::cout << "You can’t insert another quarter\n";
}

void HasQuarterState::ejectQuarter() {
  std::cout << "Quarter returned\n";
  gumballMachine->setState(gumballMachine->getNoQuarterState());
}

void HasQuarterState::turnCrank() {
  std::cout << "You turned ...\n";
  int number = distribution(engine);
  if(number == 5 && gumballMachine->getCount() > 1){
      gumballMachine->setState(gumballMachine->getWinnerState());
  } else{
      gumballMachine->setState(gumballMachine->getSoldState());
  }
}

void HasQuarterState::dispense() { std::cout << "No gumball dispensed\n"; }
