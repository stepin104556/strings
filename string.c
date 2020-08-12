#include<stdio.h>
#include <string.h>

#include "header.h"

// using strtok

int main() {

   char input_string[] = "my_name_is_edcast_future_skills";
   // Extract the first Broken_string

   char *  broken_strings = strtok(input_string, delimeter);
   // loop through the string to extract all other Broken_string

   while(  broken_strings != 0 )
    {
      printf( " ''%s'' " "\n",  broken_strings ); //printing each Broken_string

       broken_strings = strtok(NULL, delimeter);  // used to call next delimeter

   }
   return 0;
}


