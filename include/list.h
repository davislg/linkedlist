#if !defined(_LIST_H)
#define _LIST_H

typedef struct _listnode {
	void *data;
	unsigned long sz;

	struct _listnode *next;
} LISTNODE;

typedef struct _list {
	LISTNODE *nodes;
} LIST;

LISTNODE *AddNode(LIST *, void *, unsigned long);
void DeleteNode(LIST *, LISTNODE *);
LISTNODE *FindNodeByRef(LIST *, void *);
LISTNODE *FindNodeByValue(LIST *, void *, unsigned long);

#endif
