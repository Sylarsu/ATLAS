#include <iostream>
#include <dirent.h>

main(){
    DIR *dir;
    struct dirent *ent;
    if ((dir = opendir ("C:\\Users\\Sylar\\OneDrive\\Documents\\Class\\Research\\ATLAS\\submitDir")) != NULL) {
      /* print all the files and directories within directory */
      while ((ent = readdir (dir)) != NULL) {
        printf ("%s\n", ent->d_name);
      }
      closedir (dir);
      } else {
      /* could not open directory */
      perror ("");
      return EXIT_FAILURE;
    }
}