#include <dirent.h>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

int main(){
    DIR *dir;
    struct dirent *ent;
    std::string word;
    if ((dir = opendir ("/gpfs/slac/atlas/fs1/u/sylar/ATLAS/Final/submitDir")) != NULL) {
      /* print all the files and directories within directory */
      cout << "what element you are looking for?"<< endl;
      cin >> word;
      while ((ent = readdir (dir)) != NULL) {
	if(word.compare(ent->d_name)!=0){
	  std::cout <<  ent->d_name << endl;
	}else{
	  std::cout<<"no documents found"<<endl;
	}
      }
      closedir (dir);
    }else {
      /* could not open directory */
      perror ("");
      //      return EXIT_FAILURE;
    }
}
