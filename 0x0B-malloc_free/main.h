#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

char *create_array(unsigned in size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **greid, int height);
char *argtostr(int ac, char **av);
char **strtow(char *str);

#endif
