#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble.h"
#include "selection.h"
#include "insertion.h"
//Argument = Assign Value
//Parameter = Get Value from Argument to function.

int main(int argc, char *argv[]) 
//argc = Argument Count, argv = Argument Value

//If you command ./a b c d, it will open your a.exe file and add argument b c d to Array *argv[].
//The amount of all argument will be saved in argc.
{
    printf("\nYour command consist of %d arguments.\n\n",argc);

    printf("Value in Arguments\n");
    int i;
    for(i=0; i<argc; i++)
    {
        printf("arg %d: %s\n",i,argv[i]);
    }

    int n;
    n = argc - 2; //

    int *a; //Array a to store number
    a = (int*)malloc(sizeof(int)*n);
    for(i=2; i<argc; i++)
    {
        a[i-2] = atoi(argv[i]); //atoi = Argument to integer //Assign All numbers to Array a, excluding 0 (or .exe name) and 1 (Type Command)
    }

    printf("\n");
    if(strcmp(argv[1],"bubble")==0)
        bubble(a,n); //Assign Array a , and amount of number to tell how many round to Swap
    else if(strcmp(argv[1],"selection")==0)
        selection(a,n);
    else if(strcmp(argv[1],"insertion")==0)
        insertion(a,n);
    else
        printf("There is no this command.");

    return 0;
}

