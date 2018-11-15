#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

char **parse_args(char *line){
  char **ret = malloc(strlen(line)/2 * sizeof(char));
  for(int i = 0; ret[i] = strsep(&line, " "); i++);
  //{printf("%s\n", ret[i]);}
  return ret;
}

int main(){
  char line[100] = "ls -a -l";
  char **args = parse_args(line);
  execvp(args[0], args);
}
