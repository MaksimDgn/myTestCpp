#include <iostream>
#include <string>
#include "wfile.h"
#include <vector>
#include "my.h"
#include <fstream>

//using namespace std;


void writeFile(std::string str, std::string name){
  std::ofstream out(name);
  std::string s;
  // ввод строки руками из консоли
  /*  getline(std::cin,s);
  std::cout << s << "\n"; */
    out << str << "\n";
    std::cout << "String in file:\n\tname: " << name <<"\n\tstring: " << str << "\n";
  
    //  out.close();
  //  iostream 
}




void myWfile(std::string name){
  std::cout << name << "\n";
}


void f(int N){
  std::cout << N << "\n";
}


// vector<std::string> listfile(std::string name){
void listfile(std::string name){
  //  std::cout << name << "\n";
  //vector<std::int> i;
  std::vector<std::string> str;
  str.push_back(name);
  std::cout << "strSizeOf vector: " << sizeof(str) << "\n";
  std::cout << "strSizeOf vector: " << str.size() << "\n";

  for(std::string s: str){
    std::cout << s << "\n";
}
  //  return str;
}


struct Vector {
  int sz;
  double* elem;
};
//template<typename ParamType>

// void f(ParamType param){
//   std::cout << "Template <ParamType> " << param << "\n";
// }



// void myt(T mparam){
//   std::cout << "myt <T> " << mparam << "\n";
// }



// std::vector listVector(std::string name, int N){
//   //  std::cout << name << "\n";
//   //vector<std::int> i;
//     std::vector<std::string> str(N);
//     str.push_back(name);
//     str.push_back("v2 Listfile 2");
  
//   for(int i=0; i< N; i++){
//     std::cout << str[i] << "\n";
//   }

//   std::cout << "strSizeOf vector: " << sizeof(str) << "\n";
//   std::cout << "strSizeOf vector: " << str.size() << "\n";

//   for(std::string s: str){
//     std::cout << s << "\n";
//   }
//     return str;
// }


// void myWfile(int N){
//   std::cout << N << "\n";
// }
