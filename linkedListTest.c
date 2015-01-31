#include "expr_assert.h"
#include <stdlib.h>
#include "linkedList.h"

void test_that_function_createList_creates_New_list_or_not(){
	LinkedList newList = createList();
	assert(newList.tail==NULL);
	assert(newList.head==NULL);
	assert(newList.count==0);
}

void test_that_function_create_node_creates_New_node_or_not(){
	int data = 2;
	Node *newNode = create_node(&data);
	assert((*(int *)newNode->data)==2);
	assert(newNode->next==NULL);
}

void test_that_function_create_node_creates_new_Node_for_char_or_not(){
	char data = 'a';
	Node *newNode = create_node(&data);
	assert((*(char *)newNode->data)=='a');
	assert(newNode->next==NULL);	
}

void test_that_function_create_node_creates_new_Node_for_float_or_not(){
	float data = 1.25;
	Node *newNode = create_node(&data);
	assert((*(float *)newNode->data)==1.25);
	assert(newNode->next==NULL);	
}

void test_that_function_create_node_creates_new_Node_for_string_or_not(){
	char* data = "vijay";
	Node *newNode = create_node((void*)data);
	assertEqual(strcmp(newNode->data,data),0);
	assert(newNode->next==NULL);	
}


void test_that_function_add_to_add_first_student_or_not_for_integers(){
	int score = 99;
	LinkedList studentInfo = createList();
	Node *student = create_node(&score);
	assertEqual(add_to_list(&studentInfo, student), 1);
}

void test_that_function_add_to_add_first_student_or_not_for_char(){
	char grade = 'a';
	LinkedList studentInfo = createList();
	Node *student = create_node(&grade);
	assertEqual(add_to_list(&studentInfo, student), 1);
}

void test_that_function_add_to_add_first_student_or_not_for_float(){
	float percent = 84.25;
	LinkedList studentInfo = createList();
	Node *student = create_node(&percent);
	assertEqual(add_to_list(&studentInfo, student), 1);
}

void test_that_function_add_to_add_first_student_or_not_for_string(){
	char* name = "vijay";
	LinkedList studentInfo = createList();
	Node *student = create_node(&name);
	assertEqual(add_to_list(&studentInfo, student), 1);
}


void test_that_function_add_to_list_add_more_than_1_student_for_int(){
	int score1 = 98,score2 = 77, score3 = 90;
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&score1);
	Node *student2 = create_node(&score2);
	Node *student3 = create_node(&score3);
	assertEqual(add_to_list(&studentsInfo, student1),1);
	assertEqual(add_to_list(&studentsInfo, student2),2);
	assertEqual(add_to_list(&studentsInfo, student3),3);
	assert((int)studentsInfo.head==(int)student1);
}

void test_that_function_add_to_list_add_more_than_1_student_for_char(){
	char grade1 = 'a',grade2 = 'b', grade3 = 'a';
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&grade1);
	Node *student2 = create_node(&grade2);
	Node *student3 = create_node(&grade3);
	assertEqual(add_to_list(&studentsInfo, student1),1);
	assertEqual(add_to_list(&studentsInfo, student2),2);
	assertEqual(add_to_list(&studentsInfo, student3),3);
	assert((int)studentsInfo.head==(int)student1);
}

void test_that_function_add_to_list_add_more_than_1_student_for_flaot(){
	float percent1 = 88.5,percent2 = 83.2, percent3 = 91.3;
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&percent1);
	Node *student2 = create_node(&percent2);
	Node *student3 = create_node(&percent3);
	assertEqual(add_to_list(&studentsInfo, student1),1);
	assertEqual(add_to_list(&studentsInfo, student2),2);
	assertEqual(add_to_list(&studentsInfo, student3),3);
	assert((int)studentsInfo.head==(int)student1);
}

void test_that_function_add_to_list_add_more_than_1_student_for_string(){
	char* name1 = "vijay",name2 = "vikas", name3 = "prashant";
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&name1);
	Node *student2 = create_node(&name2);
	Node *student3 = create_node(&name3);
	assertEqual(add_to_list(&studentsInfo, student1),1);
	assertEqual(add_to_list(&studentsInfo, student2),2);
	assertEqual(add_to_list(&studentsInfo, student3),3);
	assert((int)studentsInfo.head==(int)student1);
}

void test_that_function_get_first_element_get_the_first_element_of_the_list_for_int(){
	int score1 = 98,score2 = 77, score3 = 90;
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&score1);
	Node *student2 = create_node(&score2);
	Node *student3 = create_node(&score3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual((*(int *)get_first_element(studentsInfo)),(*(int *)student1));	
}

void test_that_function_get_first_element_get_the_first_element_of_the_list_for_flaot(){
	float percent1 = 98.3,percent2 = 77.4, percent3 = 90.2;
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&percent1);
	Node *student2 = create_node(&percent2);
	Node *student3 = create_node(&percent3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual((*(int *)get_first_element(studentsInfo)),(*(int *)student1));	
}

void test_that_function_get_first_element_get_the_first_element_of_the_list_char(){
	char grade1 = 'a',grade2 = 'a', grade3 = 'b';
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&grade1);
	Node *student2 = create_node(&grade2);
	Node *student3 = create_node(&grade3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual((*(int *)get_first_element(studentsInfo)),(*(int *)student1));	
}

void test_that_function_get_first_element_get_the_first_element_of_the_list_for_string(){
	char* name1 = "vijay",name2 = "vikas", name3 = "ananthu";
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&name1);
	Node *student2 = create_node(&name2);
	Node *student3 = create_node(&name3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual((*(int *)get_first_element(studentsInfo)),(*(int *)student1));	
}

void test_that_function_get_last_element_get_the_last_element_of_the_list(){
	int score1 = 98,score2 = 77, score3 = 90;
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&score1);
	Node *student2 = create_node(&score2);
	Node *student3 = create_node(&score3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual((*(int *)get_last_element(studentsInfo)),(*(int *)student3));		
}

void test_that_function_get_last_element_get_the_last_element_of_the_list_for_flaot(){
	float percent1 = 98.3,percent2 = 77.4, percent3 = 90.2;
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&percent1);
	Node *student2 = create_node(&percent2);
	Node *student3 = create_node(&percent3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual((*(int *)get_last_element(studentsInfo)),(*(int *)student3));	
}

void test_that_function_get_last_element_get_the_last_element_of_the_list_char(){
	char grade1 = 'a',grade2 = 'a', grade3 = 'b';
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&grade1);
	Node *student2 = create_node(&grade2);
	Node *student3 = create_node(&grade3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual((*(int *)get_last_element(studentsInfo)),(*(int *)student3));	
}

void test_that_function_get_last_element_get_the_last_element_of_the_list_for_string(){
	char* name1 = "vijay",name2 = "vikas", name3 = "ananthu";
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&name1);
	Node *student2 = create_node(&name2);
	Node *student3 = create_node(&name3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual((*(int *)get_last_element(studentsInfo)),(*(int *)student3));	
}


void getSquar(void* data){
	*(int*)data = (*(int*)data) * (*(int *)data);
};

void test_that_function_traverse_works_for_all_nodes_or_not(){
	int id1 = 1, id2 = 2;
	LinkedList list = createList();
	Node *first = create_node((void*)id1);
	Node *second = create_node((void*)id2);
	add_to_list(&list, first);
	add_to_list(&list, second);
	traverse(list,getSquar);
	assertEqual(*(int*)get_first_element(list), 1);
	assertEqual(*(int*)get_last_element(list), 4);
};

void test_that_function_getElementAt_get_the_second_element_or_not_for_int(){
	int score1 = 98,score2 = 77, score3 = 90;
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&score1);
	Node *student2 = create_node(&score2);
	Node *student3 = create_node(&score3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual(*(int *)getElementAt(studentsInfo, 1),(*(int *)student2));			
}

void test_that_function_getElementAt_give_0_when_index_is_greater_than_number_of_elememt_in_the_list_for_int(){
	int score1 = 98,score2 = 77, score3 = 90;
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&score1);
	Node *student2 = create_node(&score2);
	Node *student3 = create_node(&score3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual(getElementAt(studentsInfo, 3),0);			
}

void test_that_function_getElementAt_get_the_first_element_or_not_for_char(){
	char grade1 = 'a',grade2 = 'b', grade3 = 'a';
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&grade1);
	Node *student2 = create_node(&grade2);
	Node *student3 = create_node(&grade3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual(*(int *)getElementAt(studentsInfo, 0),(*(int *)student1));			
}


void test_that_function_getElementAt_give_0_when_index_is_greater_than_number_of_elememt_in_the_list_for_char(){
	char grade1 = 'a',grade2 = 'b', grade3 = 'a';
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&grade1);
	Node *student2 = create_node(&grade2);
	Node *student3 = create_node(&grade3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual(getElementAt(studentsInfo, 4),0);						
}

void test_that_function_getElementAt_get_the_third_element_or_not_for_float(){
	float percent1 = 98.3,percent2 = 77.4, percent3 = 90.2;
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&percent1);
	Node *student2 = create_node(&percent2);
	Node *student3 = create_node(&percent3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual((*(int *)getElementAt(studentsInfo, 2)),(*(int *)student3));	
}

void test_that_function_getElementAt_give_0_when_index_is_greater_than_number_of_elememt_in_the_list_for_float(){
	float percent1 = 98.3,percent2 = 77.4, percent3 = 90.2;
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&percent1);
	Node *student2 = create_node(&percent2);
	Node *student3 = create_node(&percent3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual(getElementAt(studentsInfo, 5),0);	
}

void test_that_function_getElementAt_get_the_second_element_or_not_for_string(){
	char* name1 = "vijay",name2 = "vikas", name3 = "ananthu";
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&name1);
	Node *student2 = create_node(&name2);
	Node *student3 = create_node(&name3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual((*(int *)getElementAt(studentsInfo, 1)),(*(int *)student2));	
}

void test_that_function_getElementAt_give_0_when_index_is_greater_than_number_of_elememt_in_the_list_for_string(){
	char* name1 = "vijay",name2 = "vikas", name3 = "ananthu";
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&name1);
	Node *student2 = create_node(&name2);
	Node *student3 = create_node(&name3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual(getElementAt(studentsInfo, 7),0);	
}

void test_that_function_indexOf_give_index_of_the_element_that_matches_with_the_link_list_for_int(){
	int score1 = 98,score2 = 77, score3 = 90, data = 77;
	LinkedList studentsInfo = createList();
	Node *student1 = create_node((void*)score1);
	Node *student2 = create_node((void*)score2);
	Node *student3 = create_node((void*)score3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual(indexOf(studentsInfo, (void*)data),1);	
}

void test_that_function_indexOf_give_minus1_when_element_is_not_matches_with_linkList_for_int(){
	int score1 = 98,score2 = 77, score3 = 90, data = 74;
	LinkedList studentsInfo = createList();
	Node *student1 = create_node((void*)score1);
	Node *student2 = create_node((void*)score2);
	Node *student3 = create_node((void*)score3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual(indexOf(studentsInfo, (void*)data),-1);	
}

void test_that_function_indexOf_give_index_of_the_element_that_matches_with_the_link_list_for_char(){
	char grade1 = 'a',grade2 = 'b', grade3 = 'a', data = 'a';
	LinkedList studentsInfo = createList();
	Node *student1 = create_node((void*)grade1);
	Node *student2 = create_node((void*)grade2);
	Node *student3 = create_node((void*)grade3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual(indexOf(studentsInfo, (void*)data),0);	
}

void test_that_function_indexOf_give_minus1_when_element_is_not_matches_with_linkList_for_char(){
	char grade1 = 'a',grade2 = 'b', grade3 = 'a', data = 'v';
	LinkedList studentsInfo = createList();
	Node *student1 = create_node((void*)grade1);
	Node *student2 = create_node((void*)grade2);
	Node *student3 = create_node((void*)grade3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual(indexOf(studentsInfo, (void*)data),-1);	
}

void test_that_function_indexOf_give_index_of_the_element_that_matches_with_the_link_list_for_float(){
	float percent1 = 98.3,percent2 = 77.4, percent3 = 90.2;
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&percent1);
	Node *student2 = create_node(&percent2);
	Node *student3 = create_node(&percent3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual(indexOf(studentsInfo, &percent2),1);	
}

void test_that_function_indexOf_minus1_when_element_is_not_matches_with_linkList_for_float(){
	float percent1 = 98.3,percent2 = 77.4, percent3 = 90.2, data = 34.2;
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&percent1);
	Node *student2 = create_node(&percent2);
	Node *student3 = create_node(&percent3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual(indexOf(studentsInfo, &data),-1);	
}

void test_that_function_indexOf_give_the_index_of_that_element_that_is_match_with_the_linkList_for_string(){
	char* name1 = "vijay",name2 = "vikas", name3 = "ananthu";
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&name1);
	Node *student2 = create_node(&name2);
	Node *student3 = create_node(&name3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual(indexOf(studentsInfo, &name3),2);	
}

void test_that_function_indexOf_give_minus1_when_element_is_not_match_with_linkList_for_string(){
	char* name1 = "vijay",name2 = "vikas", name3 = "ananthu", name4 = "parmatma";
	LinkedList studentsInfo = createList();
	Node *student1 = create_node(&name1);
	Node *student2 = create_node(&name2);
	Node *student3 = create_node(&name3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);
	assertEqual(indexOf(studentsInfo, &name4),-1);	
}

void test_indexOf_will_give_1_for_gello(){
	string name = "hello";
	string name1 = "gello";
	int result;
	string data = "gello";
	nodePtr expected1,expected;
	LinkedList list = createList();

	expected = create_node((void*)name);
	add_to_list(&list,expected);
	
	expected1 = create_node((void*)name1);
	add_to_list(&list,expected1);
	result = indexOf(list,(void*)data);

	assertEqual(result,1);
	free(expected);
	free(expected1);
};

void test_that_deleteElementAt_delete_the_first_element_for_int(){
	int score1 = 98,score2 = 77, score3 = 90;
	LinkedList studentsInfo = createList();
	Node *student1 = create_node((void*)score1);
	Node *student2 = create_node((void*)score2);
	Node *student3 = create_node((void*)score3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);

	assertEqual(deleteElementAt(&studentsInfo, 1),77);
	assertEqual(indexOf(studentsInfo, &score2),-1);
	assertEqual(*(int *)getElementAt(studentsInfo, 1),(*(int *)student3));
};

void test_that_deleteElementAt_delete_the_head_when_index_is_0_for_int(){
	int score1 = 98,score2 = 77, score3 = 90;
	LinkedList studentsInfo = createList();
	Node *student1 = create_node((void*)score1);
	Node *student2 = create_node((void*)score2);
	Node *student3 = create_node((void*)score3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);

	assertEqual(deleteElementAt(&studentsInfo, 0),98);
	assertEqual((*(int *)get_first_element(studentsInfo)),(*(int *)student2));	
}

void test_that_deleteElementAt_give_0_index_is_greater_than_the_number_of_node_in_the_list(){
	int score1 = 98,score2 = 77, score3 = 90;
	LinkedList studentsInfo = createList();
	Node *student1 = create_node((void*)score1);
	Node *student2 = create_node((void*)score2);
	Node *student3 = create_node((void*)score3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);

	assertEqual(deleteElementAt(&studentsInfo, 6),0);
}

void test_that_deleteElementAt_delete_the_tail_when_index_is_equal_to_the_number_of_element_in_the_linkList_for_int(){
	int score1 = 98,score2 = 77, score3 = 90;
	LinkedList studentsInfo = createList();
	Node *student1 = create_node((void*)score1);
	Node *student2 = create_node((void*)score2);
	Node *student3 = create_node((void*)score3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);

	assertEqual(deleteElementAt(&studentsInfo, 2),90);
	assertEqual((*(int *)get_last_element(studentsInfo)),(*(int *)student2));	
}

void test_that_deleteElementAt_delete_the_first_element_for_char(){
	char grade1 = 'a',grade2 = 'b', grade3 = 'c';
	LinkedList studentsInfo = createList();
	Node *student1 = create_node((void*)grade1);
	Node *student2 = create_node((void*)grade2);
	Node *student3 = create_node((void*)grade3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);

	assertEqual(deleteElementAt(&studentsInfo, 1),'b');
	assertEqual(indexOf(studentsInfo, &grade2),-1);
	assertEqual(*(int *)getElementAt(studentsInfo, 1),(*(int *)student3));
};

void test_that_deleteElementAt_delete_the_head_when_index_is_0_for_char(){
	char grade1 = 'a',grade2 = 'b', grade3 = 'd';
	LinkedList studentsInfo = createList();
	Node *student1 = create_node((void*)grade1);
	Node *student2 = create_node((void*)grade2);
	Node *student3 = create_node((void*)grade3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);

	assertEqual(deleteElementAt(&studentsInfo, 0),'a');
	assertEqual((*(int *)get_first_element(studentsInfo)),(*(int *)student2));	
}

void test_that_deleteElementAt_give_0_index_is_greater_than_the_number_of_node_in_the_list_for_char(){
	char grade1 = 'a',grade2 = 'b', grade3 = 'c';
	LinkedList studentsInfo = createList();
	Node *student1 = create_node((void*)grade1);
	Node *student2 = create_node((void*)grade2);
	Node *student3 = create_node((void*)grade3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);

	assertEqual(deleteElementAt(&studentsInfo, 6),0);
}

void test_that_deleteElementAt_delete_the_tail_when_index_is_equal_to_the_number_of_element_in_the_linkList_for_char(){
	char score1 = 'a',score2 = 'b', score3 = 'c';
	LinkedList studentsInfo = createList();
	Node *student1 = create_node((void*)score1);
	Node *student2 = create_node((void*)score2);
	Node *student3 = create_node((void*)score3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);

	assertEqual(deleteElementAt(&studentsInfo, 2),'c');
	assertEqual((*(int *)get_last_element(studentsInfo)),(*(int *)student2));	
}

void test_deleteElemetAt_will_delete_hello_and_give_gell_atFirst_index(){
	string name = "hello";
	string name1 = "gello";
	nodePtr expected1,expected,result;
	LinkedList list = createList();

	expected = create_node((void*)name);
	add_to_list(&list,expected);
	
	expected1 = create_node((void*)name1);
	add_to_list(&list,expected1);

	result = deleteElementAt(&list,0);

	assertEqual(strcmp((char*)result,"hello"),0);
	free(expected);
	free(expected1);
};

void test_delete_string_from_a_list_by_given_index_1_and_gello_will_be_nomore_there(){
	string name = "hello";
	string name1 = "gello";
	string name2 = "ghello";
	int count,index=1,element;
	void* result;
	nodePtr expected,expected1,expected2;

	LinkedList list = createList();

	expected = create_node((void*)name);
	count = add_to_list(&list,expected);
	
	expected1 = create_node((void*)name1);
	count = add_to_list(&list,expected1);

	expected2 = create_node((void*)name2);
	count = add_to_list(&list,expected2);

	result = deleteElementAt(&list,index);
	element = indexOf(list,(void*)name1);
	
	assertEqual(strcmp((char*)result,"gello"),0);
	assertEqual(element,-1);
};


void test_delete_string_from_a_list_by_given_index_1_replace_the_value_with_next_value(){
	string name = "hello";
	string name1 = "gello";
	string name2 = "ghello";
	int count,index=1,element;
	void* result;
	nodePtr expected,expected1,expected2;

	LinkedList list = createList();

	expected = create_node((void*)name);
	count = add_to_list(&list,expected);
	
	expected1 = create_node((void*)name1);
	count = add_to_list(&list,expected1);

	expected2 = create_node((void*)name2);
	count = add_to_list(&list,expected2);

	result = deleteElementAt(&list,index);
	element = indexOf(list,(void*)name);
	assertEqual(strcmp((char*)result,"gello"),0);
	assertEqual(element,0);
};

void test_that_function_asArray_fill_the_data_of_linkList_in_an_array_for_int(){
	int array[3], score1 = 98,score2 = 77, score3 = 90;
	LinkedList studentsInfo = createList();
	Node *student1 = create_node((void*)score1);
	Node *student2 = create_node((void*)score2);
	Node *student3 = create_node((void*)score3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);

	assertEqual(asArray(studentsInfo,(void**)array), 3);
	assertEqual(array[0], 98);
	assertEqual(array[1], 77);
	assertEqual(array[2], 90);
};

void test_that_function_asArray_fill_the_data_of_linkList_in_an_array_for_char(){
	char *array[3], grade1 = 'a',grade2 = 'b', grade3 = 'c';
	LinkedList studentsInfo = createList();
	Node *student1 = create_node((void*)grade1);
	Node *student2 = create_node((void*)grade2);
	Node *student3 = create_node((void*)grade3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);

	assertEqual(asArray(studentsInfo,(void**)array), 3);
	assertEqual(array[0], 'a');
	assertEqual(array[1], 'b');
	assertEqual(array[2], 'c');
};

void test_asArray_will_contain_lenth_2_and_hello_atFirst_index(){
	string name = "hello";
	string name1 = "gello";
	string array[2];
	int length;
	nodePtr expected1,expected;
	LinkedList list = createList();

	expected = create_node((void*)name);
	add_to_list(&list,expected);
	
	expected1 = create_node((void*)name1);
	add_to_list(&list,expected1);

	length = asArray(list,(void**)array);
	assertEqual(length,2);

	assertEqual(strcmp((char**)array[0],"hello"),0);
	assertEqual(strcmp((char**)array[1],"gello"),0);
	free(expected);
	free(expected1);
};

int isEven(void* element){
	return (int)element % 2 == 0;
};

void test_that_function_filter_filters_the_given_link_list_or_not_for_int(){
	int score1 = 98,score2 = 77, score3 = 90;
	LinkedList *filterList, studentsInfo = createList();
	Node *student1 = create_node((void*)score1);
	Node *student2 = create_node((void*)score2);
	Node *student3 = create_node((void*)score3);
	add_to_list(&studentsInfo, student1);
	add_to_list(&studentsInfo, student2);
	add_to_list(&studentsInfo, student3);

	filterList = filter(studentsInfo, isEven);
	assertEqual((int)filterList->count, 2);	
	assertEqual(filterList->head,student1);
	assertEqual(filterList->tail, student3);	
};

int lessThan(void* element){
	return (strlen((char*)element)>5)?1:0;
};


void test_filter_will_return_lenth_1_and_gellooo_atLast(){
	char* name = "hello";
	char *name1 = "gellooo",*element;
	int length;
	LinkedList *result;
	nodePtr expected1,expected;
	LinkedList list = createList();

	expected = create_node((void*)name);
	add_to_list(&list,expected);
	
	expected1 = create_node((void*)name1);
	add_to_list(&list,expected1);
	result = filter(list,lessThan);
	strcpy(element,get_last_element(*result));

	assertEqual((int)result->count,1);
	assertEqual(strcmp(*(char**)element,"gellooo"),0);
	free(expected);
	free(expected1);
	free(result);
};





