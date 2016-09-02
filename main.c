#include <stdio.h>
#include <conio.h>
#include <time.h>
int main()
{
    datainput();
    return 0;
}
void memoryadd(double *prt,int size){
    prt = (double *)malloc(size * sizeof(double));
}
void addElements(double *prt, int size){
    int i;
    for (i = 0; i < size; i++)
        prt[i]=rand() % 30;
}
void printArray(double *prt, int size){
    int i;
    for (i = 0; i < size; i++){
        printf ("%2.2f ",prt[i]);
    }
}
void freememory(int *prt){
    free(prt);
    prt = NULL;
}
void datainput(){
    double *prt;
    int size,i;
    srand((unsigned) time(NULL));
    printf("Enter");
    for( i=0; getch()!=27; i++ ){
        printf("\nInput size array or ESC for exit \n");
        scanf("%d",&size);
        memoryadd(prt,size);
        addElements(prt,size);
        printArray(prt,size);
        freememory(prt);
    }
    fflush(stdin);
}
