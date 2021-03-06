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

void * getElementAt(LinkedList list, int index){
	int i;
	Node* walker = list.head;
	if(index >= list.count)
		return NULL;
	for(i = 0;i < index; i++)
		walker = walker->next;
	return walker->data;
}

int indexOf(LinkedList studentInfo, void * element){
	int i;
	Node* walker = studentInfo.head;
	for(i = 0; i < studentInfo.count; i++){
		if(walker->data == element)
			return i;
		walker = walker->next;
	}	
	return -1;
}

void * deleteElementAt(LinkedList *studentInfo, int index){
	int i;
	void* data;
	Node* walker =studentInfo->head;
	Node* previousNode=NULL;
	
	if(index >= studentInfo->count || index < 0) 
		return NULL;
	for(i = 0;i < index;i++){
		previousNode = walker;
		walker = walker->next;
	}
	if(studentInfo->tail == walker) 
		studentInfo->tail = previousNode;
	data = walker->data;
	previousNode ? (previousNode->next = walker->next) : (studentInfo->head = studentInfo->head->next);
	studentInfo->count--;
	free(walker);
	return data;
}

int asArray(LinkedList studentInfo, void** array){
	int i;
	Node* walker = studentInfo.head;
	for(i = 0; i < studentInfo.count; i++){
		array[i] = walker->data;
		walker = walker->next;
	}
	return i;
};

LinkedList *filter(LinkedList studentInfo, int (*func)(void *)){
	int i;
	LinkedList *filteredList = malloc(sizeof(LinkedList));
	*filteredList = createList();
	for(i = 0; i < studentInfo.count; i++){
		if((*func)(studentInfo.head->data)){
			add_to_list(filteredList, studentInfo.head);			
		}
		studentInfo.head = studentInfo.head->next;
	}	
	return filteredList;
}







