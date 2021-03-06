#include"list.h"
#include <stdlib.h> 
#include <stdio.h>


/* Return an initialized linked list*/
List InitList()
{
    List L = (List)malloc(sizeof(struct Node));
    L->Next = NULL;
    return L;
}


/* Return true if L is empty*/
int IsEmpty(List L)
{
    return L->Next == NULL;
}


/* Return true if P is the last position in list L */
/* Parameter L is unused in this implemenration */
int IsLast(Position P, List L)
{
    return P->Next == NULL;
}


/* Return Position of x in L; NULL is not found */
Position Find(ElementType X, List L)
{
    Position P;
    P = L->Next;
    while(P->Next != NULL && P->Element != X)
        P = P->Next;
    return P;
}


/* If X is not found, then Next field of returned Position is NULL */
/* Assumes a header */
/* Use with Delete */
Position FindPrevious(ElementType X, List L)
{
    Position P;
    P = L;
    while(P != NULL && P->Element != X)
        P = P->Next;
    return P;
}


/* Delete first occurence of X from a list */
/* Assume use of a header node */
void Delete(ElementType X, List L)
{
    Position P, TmpCell;
    P = FindPrevious(X, L);
    if(!IsLast(P, L))  /*Assumption of header use*/
    {                /* X is found; delete it */
        TmpCell = P->Next;
        P->Next = TmpCell->Next;
        free(TmpCell);
    }
}


/* Insert (after position P) */
/* Header implementation assumed */
/* Parameter L is unused in this implementation*/
void Insert(Position P, ElementType X, List L)
{
    Position TmeCell;
    TmeCell = malloc(sizeof(struct Node));
    if(TmeCell == NULL)
    {
        printf("Out of space!");
    }
    TmeCell->Element = X;
    TmeCell->Next = P->Next;
    P->Next = TmeCell;
   
}


/* Correct Deletelist algorithm */
/* Deletelist the list */
void Deletelist(List L)
{
    Position P, Temp;

    P = L->Next;/* Header assumed */
    L->Next = NULL;
    while(P != NULL)
    {
        Temp = P->Next;
        free(P);
        P = Temp;
    }             
}

