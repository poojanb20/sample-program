#include<stdio.h>
 
#define SIZE 3
 
//queue structure 
struct queue
{
    int values[SIZE];
    int front;
    int rear;
};
 
void enqueue(int);
int dequeue();
int isEmpty();
int isFull();
void display();
 
//glob
struct queue q;
