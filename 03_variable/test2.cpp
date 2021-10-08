#include <stdio.h> 
 
void p1(void) 
{ 
    int local1 = 1; 
 
    printf("p1: local1=%d\n",local1); 
} 
 
void p2(void) 
{ 
    int local2; 
 
    printf("p2: local2=%d\n", local2); 
} 
 
int main(void) 
{ 
    p2(); 
    p1(); 
    p2(); 
} 
