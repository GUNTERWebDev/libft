#include "get_next_line.h"
bool fun(char *s)
{
    for (int i = 0;s[i];i++)
    {
        if (s[i] == '\n')
            return true;
    }
    return false;
}
int get_next_line(const int fd, char **line)
{
    int i;
    char ty[FD_SIZE];
    char cp[FD_SIZE];
    *line = strdup("");
    if (fd < 0 || FD_SIZE < 0)
        return -1;
    int k = 0;
    while(i = read(fd, ty , BUFF_SIZE))
    {
        ty[i] = '\0';
        strcat(cp, ty);
        if (fun(cp) == true)
        {
            *line = strtok(cp, "\n");
            //memset(cp, 0, sizeof(cp));
            return 1;
        }
    }  
        printf("%s", cp);
    
    if (i < 0) {
        // Handle read error
        return -1;
    } else if (i == 0 && strlen(cp) == 0) {
        // End of file
        return 0;
    } else {
        // Last line without newline
        *line = strdup(cp);
        return 1; // Successfully read a line
    } 
    return 0;
}
int   main(int ac, char **av) 
{
  char  *line;
  int   fd1;

  fd1 = open("text.txt", O_RDONLY);
  get_next_line(fd1, &line);
  printf("%s\n", line);
  
  get_next_line(fd1, &line);
  printf("%s\n", line);
  
  get_next_line(fd1, &line);
  printf("%s\n", line);

  return (0);
}