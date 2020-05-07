#ifndef _LIST_H
#define _LIST_H

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
typedef int ElementType;

List InitList();
void Delete(ElementType X, List L);
void Delete(ElementType X, List L);
List MakeEmpty(List L);
int IsEmpty(List L);
int IsLast(Position P, List L);
Position Find(ElementType X, List L);

#endif
/* Place in the implementation file */
struct Node{
    ElementType Element;
    Position Next;
};

