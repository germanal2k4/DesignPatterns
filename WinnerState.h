//
// Created by German Albershteyn on 14.05.2024.
//

#ifndef UNTITLED19_WINNERSTATE_H
#define UNTITLED19_WINNERSTATE_H

#include "State.h"

class GumballMachine;

class WinnerState : public State{
private:
    GumballMachine *gumballMachine;
public:
    explicit WinnerState(GumballMachine *gumballMachine);
    void insertQuarter() override;
    void ejectQuarter() override;
    void turnCrank() override;
    void dispense() override;
};


#endif //UNTITLED19_WINNERSTATE_H
