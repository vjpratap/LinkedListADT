#include <stdlib.h>
#include "expr_assert.h"
#include "linkedList.h"

LinkedList createList(void){
	LinkedList *createNewList = malloc(sizeof(LinkedList));
	createNewList->head = NULL;
	createNewList->tail = NULL;
	createNewList->count = 0;
	return *createNewList;
}

Node * create_node(void *data){
	Node *createNewNode = malloc(sizeof(Node));
	createNewNode->data = data;
	createNewNode->next = NULL;
	return createNewNode;
}

int add_to_list(LinkedList *studentInfo, Node *student){
	if(studentInfo->head == NULL)
		studentInfo->head = student;
    else
    	studentInfo->tail->next = student;
		studentInfo->tail = student;
		studentInfo->count++;
    return studentInfo->count;
}

void *get_first_element(LinkedList list){
	return list.head;
}

void *get_last_element(LinkedList list){
	return list.tail;
}

void traverse(LinkedList list, perform* func){
	while(list.head != NULL){
		func(&(list.head->data));
		list.head = list.head->next;
	}
}




