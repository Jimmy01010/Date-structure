#include<stdlib.h>
#include<stdio.h>
#include"list.h"



void Test_InitList();
void Test_Insert();
void Test_Find();


int main()
{
    Test_InitList();
    Test_Insert();
    Test_Find();
    return 0;
}


void Test_InitList()
{
    List got;
    got = InitList();
    
    if(got->Next == NULL)
        printf("InitLIst executed successfully!\n");
    else
        printf("Function InitLIst failed to execute!\n");

    Deletelist(got);
}

void Test_Insert()
{
    List got;
    ElementType want = 10;
    got = InitList();  
    Insert(got, want, got);
    if(got->Next->Element == 10) // Insert after Position got 
        printf("Insert element successfully\n");
    else
        printf("Insert element failed, got %d but want %d\n", got->Element, want);

    Deletelist(got);
}

void Test_Find()
{
    List got;
    Position P;
    ElementType want = 10;
    got = InitList();
    Insert(got, 10, got);
    P = Find(want, got);
    if(P->Element == 10)
        printf("Find element successfully\n");
    else
        printf("Find element failed, got %d but want %d\n", got->Element, want);
    Deletelist(got);
    Deletelist(P);
}


