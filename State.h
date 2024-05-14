//
// Created by German Albershteyn on 13.05.2024.
//

#ifndef UNTITLED19_STATE_H
#define UNTITLED19_STATE_H

class State{
public:
    virtual void insertQuarter() = 0;
    virtual void ejectQuarter() = 0;
    virtual void turnCrank() = 0;
    virtual void dispense() = 0;
    virtual ~State() = default;
};

#endif //UNTITLED19_STATE_H
