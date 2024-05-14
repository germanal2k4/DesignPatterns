//
// Created by German Albershteyn on 13.05.2024.
//

#include "GumballMachine.h"
#include "HasQuarterState.h"
#include "NoQuarterState.h"
#include "SoldOutState.h"
#include "SoldState.h"
#include "WinnerState.h"
#include <iostream>
#include <memory>

GumballMachine::GumballMachine(int numberGumballs) {
    count = numberGumballs;
    hasQuarterState = std::make_unique<HasQuarterState>(this);
    noQuarterState = std::make_unique<NoQuarterState>(this);
    soldoutState = std::make_unique<SoldOutState>(this);
    soldState = std::make_unique<SoldState>(this);
    winnerState = std::make_unique<WinnerState>(this);
    if (numberGumballs > 0) {
        state = noQuarterState.get();
    } else {
        state = soldoutState.get();
    }

    std::cout << "Gumball machine initialized with " << numberGumballs
              << " gumballs \n";
}

void GumballMachine::insertQuarter() {
    state->insertQuarter();
}

void GumballMachine::turnCrank() {
    state->turnCrank();
    state->dispense();
}

void GumballMachine::ejectQuarter() {
    state->ejectQuarter();
}

std::ostream &operator<<(ostream &os, const GumballMachine &machine) {
    os << "Gumball Machine with version 1.000.000 with " << machine.count << " gumballs is executing\n";
    return os;
}

