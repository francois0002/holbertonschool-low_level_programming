#ifndef __PLAYER_H__
#define __PLAYER_H__

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
