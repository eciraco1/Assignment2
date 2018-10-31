#include <stdio.h>

void print backtrace(int count){
  int* ret_addr;
  int* rbp;
  int (*pointer)()= main; //sets a pointer of a function to main
  unsigned char* a= (unsigned char*) pointer;

  while(*a!= (unsigned char) 0xc3 && count > 0){ //goes up until the main return value
    rbp=getCurrentrbp(); //gets rbp
    ret_addr=rbp+4; //gets return address
    if(ret_addr > &main && ret_add<=0xc3)
      return
    printf("%d", ret_addr);
    count--;
  }


  int* getCurrentrbp(){
    asm {
      mov %rbp, %rax
      ret
    }
  }



}
