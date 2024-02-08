#include "ex2.h"
#include <iostream>




Test::Test(){

  lijst = new char[10000000];

  cout << teller++ << endl;

  Test* test = new Test();


}

int Test::teller = 0;
