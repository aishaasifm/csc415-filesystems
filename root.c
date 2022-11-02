
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

void main()
   {
   int check;
   char* dirName = "rootDir";

   check = mkdir(dirName, S_IFDIR);
   if(check<0)
      {
      printf("Root directory not created");
      perror("Error: ");
      }
   system("dir");
   }
