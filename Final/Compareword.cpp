#include <dirent.h>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
std::string a ("hello word");


void RfileNrc(){
  std::string word;
  cout << "guss what is inside" << endl;
  cin >> word;
  if(word.compare(a)<0){
    std::cout<<"you got it"<<endl;
    }else{
    std::cout<< "hha, you missed it, guss again"<<endl;
    RfileNrc();
    }
}
