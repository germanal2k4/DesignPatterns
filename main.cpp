#include "GumballMachine.h"

int main() {
  GumballMachine gumballMachine(5);
  std::cout << gumballMachine;
  gumballMachine.insertQuarter();
  gumballMachine.turnCrank();
}
