typedef struct linkedList LinkedList;

typedef struct node Node;
typedef Node* nodePtr;
typedef char* string;
typedef void perform (void*);

struct linkedList {
	nodePtr head;
	nodePtr tail;
	int count;
};

struct node {
	void *data;
	nodePtr *next;
};

LinkedList createList(void);
Node * create_node(void *);
int add_to_list(LinkedList *,Node *);
void *get_first_element(LinkedList list);
void *get_last_element(LinkedList list);
void traverse(LinkedList, perform * func);
void * getElementAt(LinkedList, int);
int indexOf(LinkedList, void *);
void * deleteElementAt(LinkedList *, int);
int asArray(LinkedList, void **);
LinkedList * filter(LinkedList, int (*)(void *));