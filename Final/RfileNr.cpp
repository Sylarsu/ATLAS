#include <dirent.h>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

void RfileNr(){
    DIR *dir;
    struct dirent *ent;
    string word;
    if ((dir = opendir ("/gpfs/slac/atlas/fs1/u/sylar/ATLAS/Final")) != NULL) {
      /* print all the files and directories within directory */
      cout << "what element you are looking for?"<< endl;
      cin >> word;
      while ((ent = readdir (dir)) != NULL) {
	if( word.compare(ent)<0){
	 printf ("%s\n", ent->d_name);
	}
      }
      closedir (dir);
      } else {
      /* could not open directory */
      perror ("");
      //      return EXIT_FAILURE;
    }
}
