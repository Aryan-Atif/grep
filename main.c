#include <stdio.h>

#include "grep.h"

int main (int argc, char **argv) 
{
  if (argc < 2) { printf ("Usage: ./grep [Options] Pattern [FILE]"); return 1;}
  
  char *options;
  char *pattern;
  char *file;
  int starting_cmd_index = 0;  /* Assuming that the user has entered no options */
 
  if (argc > 3) /* Or if they have entered an option*/
  {
    starting_cmd_index = 1;
    char *options = argv[1];                      // ./grep [OPTIONS] Pattern [FILE]
  }                                               //        ^^^^^^^^^
  pattern = argv[1 + starting_cmd_index];         // ./grep [OPTIONS] Pattern [FILE]
                                                  //                  ^^^^^^^
  file = argv[2 + starting_cmd_index];            // ./grep [OPTIONS] Pattern [FILE]
                                                  //                          ^^^^^^
  
  char *file_data = read_file(file);
  
  // break the file into separate lines in an array.
  int number_of_lines = get_lines_count (file_data);
  char **file_line = break_into_lines (file_data, number_of_lines);
  search_sequence (pattern, file_line, number_of_lines);
  return 0;
} 

// add a function to search for a word in  the file_line. record all instances of it.
