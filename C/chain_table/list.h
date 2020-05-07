#ifndef _LIST_H
#define _LIST_H

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;
typedef int ElementType;

<<<<<<< HEAD
List InitLIst();
void Delete(ElementType X, List L)
=======
void Delete(ElementType X, List L);
>>>>>>> c0ea750801b53039d1a0ece2b87cea7d36ed160b
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

