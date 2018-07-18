#include <dirent.h>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
std::string a ("abc");


int main(){
  std::string word;
  cout << "guss what is inside" << endl;
  getline(std::cin , word);
  int i;
  i = 0;
  if(a.compare(i,word.size(),word)&&i>a.size()){
    i++;
  std::cout<< "hha, you missed it, guss again"<<endl;
  main();
  }else{
    std::cout << "yosylar@rhel6-64.slac.stanford.eduu got it"<<endl;
  }
}
