#include<stdio.h>
#define ALLOCSIZE 1000
#define NULL 0

static char allocbuf[ALLOCSIZE];
static char *alloc_pointer = allocbuf;

char *alloc(int n) //this function return point char n
{
    if (alloc_pointer + n <= allocbuf+ALLOCSIZE){
        alloc_pointer += n;
        int y = alloc_pointer - n;                     
        return(alloc_pointer - n);
     }else
        return(NULL);
}
void checkfreemem(char *p){
    if(p >= allocbuf && p < allocbuf + ALLOCSIZE){
        alloc_pointer = p;
    }
}

