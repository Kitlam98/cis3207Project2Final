#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
extern char ** environ;
int main(int argc, char** argv){
  printf("HEYWORLD\n");
  printf("%s\n", getenv("PARENT"));
  

}
