#include <stdio.h>
//#include <conio.h>
#include <time.h>
#include <stdlib.h>
int* memoryadd(double *prt,int size);
void addElements(double *prt, int size);
void printArray(double *prt, int size);
void freememory(int *prt);
void datainput();
int main()
{
    datainput();
    return 0;
}
int* memoryadd(double *prt,int size){
    prt = (double *)malloc(size * sizeof(double));
    return (int*)prt;
}
void addElements(double *prt, int size){
    int i;
    for (i = 0; i < size; i++)
        prt[i]=rand() % 30;
}
void printArray(double *prt, int size){
    int i;
    for (i = 0; i < size; i++){
        printf ("%2.1f ",prt[i]);
    }
}
void freememory(int *prt){
    free(prt);
    prt = NULL;
}
void datainput(){
     double *prt;
    int size=10;
    srand((unsigned) time(NULL));
    //while (1){
        //printf("\nInput size array or Ctr+c for exit \n");
        //scanf("%d",&size);
        prt=memoryadd(prt,size);
        addElements(prt,size);
        printf ("Array:\n");
        printArray(prt,size);
        freememory(prt);
    //}
}