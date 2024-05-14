//
// Created by German Albershteyn on 14.05.2024.
//

#include "WinnerState.h"
#include "GumballMachine.h"
#include "iostream"

WinnerState::WinnerState(GumballMachine *gumballMachine) {
    this->gumballMachine = gumballMachine;
}

void WinnerState::insertQuarter() {
    std::cout << "You can’t insert a quarter, the machine is sold out\n";
}

void WinnerState::ejectQuarter() {
    std::cout << "You can’t eject, you haven’t inserted a quarter yet\n";
}

void WinnerState::turnCrank() {
    std::cout << "You turned, but there are no gumballs\n";
}

void WinnerState::dispense() {
    gumballMachine->releaseBall();
    if (gumballMachine->getCount() == 0){
        gumballMachine->setState(gumballMachine->getSoldoutState());
    }else{
        gumballMachine->releaseBall();
        std::cout << "YOU’RE A WINNER! You got two gumballs for your quarter";
        if(gumballMachine->getCount() > 0){
            gumballMachine->setState(gumballMachine->getNoQuarterState());
        }else{
            std::cout << "Oops, out of gumballs!";
            gumballMachine->setState(gumballMachine->getSoldoutState());
        }
    }
}
