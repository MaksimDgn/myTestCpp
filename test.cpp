#include <iostream>
#include <ios>
#include <ostream>
#include <iomanip>
// работа со строками
#include <cctype>
#include <string>

//#include <std_lib_facilities>
/*
g++ -std=c++17 test.cpp; ./a.out
https://youtu.be/QU63wpGBvjE?t=597
*/


int main(){
  std::string mystr = "Hello, World!";
  // fstream fs;
  std::string oname = "out.txt";
  
  // fs.open("out.txt", ios_base::in);
  // if (!fs) error("Невозможно");

  
  std::ofstream ost{oname};
  //  if (!ost) std::error("Невозможно открыть файл для записи!", oname);
  ost << mystr << "\n";
  // fs.close();
  
  // FILE *fname = fopen("out.txt", "w");
  // fwrite(fname, mystr, sizeof(mystr));
  // fclose(fname);
  std::string str = "hello";
  // g++ -std=17
  char *p = str.data();
  p[0] = 'H';
  //   std::cout << "Hello, World!" << std::endl;

  std::cout << str << std::endl;
  return 0;
}
