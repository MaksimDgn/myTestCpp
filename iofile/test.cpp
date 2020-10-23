#include <iostream>
#include <ios>
#include <ostream>
#include <iomanip>
// работа со строками
#include <cctype>
#include <string>
#include "wfile.h"
#include "my.h"
#include <vector>
//#include <template>

//#include <std_lib_facilities>
/*
g++ -std=c++17 test.cpp; ./a.out
https://youtu.be/QU63wpGBvjE?t=597
*/


int main(){
  std::string mystr = "1 Hello, World!";
 

  // fstream fs;
  std::string oname = "out.txt";
  std::string ost{"Testname"};
  writeFile(mystr, oname);
  writeFile("2 string Hello, World!", "out.my");
  
  //  fs.open("out.txt", ios_base::in);
  //  if (!fs) error("Невозможно");

  //  std::ofstream ost{oname};
  //  if (!ost) std::error("Невозможно открыть файл для записи!", oname);
  std::cout << ost << "\n";


  
  //  template<typename T>

  // int a{15};
  // int const b{15};
  
  
  // myt(a);
  // f(a);

  Mytest a(55);
  std::cout << a.get() << "\n";

  
  myWfile("function wfile");
  listfile("My vectorlist 1");
  //std::vector listVector("My vectorlist 2", 5);
  std::vector<std::string> s;
  s.push_back("123");
  s.rbegin();
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
