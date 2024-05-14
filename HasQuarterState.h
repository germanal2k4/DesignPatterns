//
// Created by German Albershteyn on 13.05.2024.
//

#ifndef UNTITLED19_HASQUARTERSTATE_H
#define UNTITLED19_HASQUARTERSTATE_H

#include "State.h"
#include "GumballMachine.h"
#include "random"

using namespace std;

class HasQuarterState : public State{
private:
  random_device rd;
  mt19937 engine;
  uniform_int_distribution<int> distribution;
  GumballMachine* gumballMachine;
public:
    explicit HasQuarterState(GumballMachine *gumballMachine);
    void insertQuarter() override;
    void ejectQuarter() override;
    void turnCrank() override;
    void dispense() override;
};


#endif //UNTITLED19_HASQUARTERSTATE_H
