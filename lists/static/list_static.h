#ifndef LIST_STATIC_H
#define LIST_STATIC_H

//Array Structure
typedef struct {
    int* array;
    int capacity;
    int size;
}List_static;

//Funtion prototype
List_static* create(int capacity);  //Initialize empty list
List_static* insert(List_static* list, int position, int element);  //Insert element at position
List_static* insertEnd(List_static* list, int element); //Insert element at the end
List_static* delete(List_static* list, int element);    //Delete element by position
int search(List_static* list, int value);   //Search element by value
void display(List_static* list);    //Display all elements
int isEmpty(List_static* list);     //Check if list is empty
int isFull(List_static* list);      //Check if list is full
int length(List_static* list);      //Get current numbers of elements
int getElement(List_static* list, int position);    //Get element by position

#endif