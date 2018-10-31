#include <stdio.h>

void print_main();

int main(){
  print_main();
}

void print_main(){
  int (*pointer)()= main; //sets a pointer of a function to main
  unsigned char* a= (unsigned char*) pointer;

  while(*a!= (unsigned char) 0xc3){ //goes up until the main return value
    printf("%x ",*a);
    a++; //increments pointer
  }
    printf("c3\n"); //prints last value
}
