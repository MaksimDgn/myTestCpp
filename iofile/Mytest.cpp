#include <iostream>
#include "wfile.h"
#include "my.h"

Mytest::Mytest(int i){
  this->x = i;
}

Mytest::~Mytest(){
  std::cout << "Destructor ~Mytest()" << "\n";
}

int Mytest::get(){
  return this->x;
}
