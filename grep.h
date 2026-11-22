#ifndef GREP_H
#define GREP_H


char* read_file (char* filename);
char** break_into_lines (char* data, int number_of_lines);

/*Match Sequence*/
void search_sequence (char* sequence, char** source, int source_lines);
void print_matched_line ( char* sequence, char**source, int line, int sequence_matched, int sequence_length);

/* Misc */
int get_lines_count (char* data);



#endif
