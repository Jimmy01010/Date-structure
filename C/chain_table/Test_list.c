#include<stdlib.h>
#include<stdio.h>
#include"list.h"



void Test_InitList();

int main()
{
    Test_InitList();
    return 0;
}


void Test_InitList()
{
    List got;
    got = InitList();
    if(got->Next == NULL)
        printf("Function InitLIst executed successfully!\n");
    else
        printf("Function InitLIst failed to execute!\n");
    

}








