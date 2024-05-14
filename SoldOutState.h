//
// Created by German Albershteyn on 13.05.2024.
//

#ifndef UNTITLED19_SOLDOUTSTATE_H
#define UNTITLED19_SOLDOUTSTATE_H

#include "State.h"
class GumballMachine;

class SoldOutState : public State{
    GumballMachine* gumballMachine;
public:
    explicit SoldOutState(GumballMachine* gumballMachine);
    void insertQuarter() override;
    void ejectQuarter() override;
    void turnCrank() override;
    void dispense() override;
};


#endif //UNTITLED19_SOLDOUTSTATE_H
