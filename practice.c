/*
#include<stdio.h>
#include<stdlib.h>

void display();

struct node
{
	int data;
	struct node *next;
} *head, *old, *p, *n;
 
void main()
{
	int j, k, l, m;
	printf("enter how many nodes you want\n");
	scanf("%d", &m);
	head = (struct node*)malloc(sizeof(struct node));
	printf("enter the data: ");
	scanf("%d", &head->data);
    head->next = NULL;
    old = head;
    for(int i = 1; i < m; i++)
    {
    	n = (struct node*)malloc(sizeof(struct node));
        printf("enter the data: ");
        scanf("%d", &n->data);
        n->next = NULL;
        old->next = n;
        old = n;
    	
	}
	
	printf("before change display\n");
	display();
	
	//insert at begninning
	/*n = (struct node*)malloc(sizeof(struct node));
    printf("enter the data to insert at begninng: ");
    scanf("%d", &n->data);
    n->next = NULL;
    n->next = head;
    head = n;
	printf("after change display\n");
	display();*/
	
	/*insert at end
	n = (struct node*)malloc(sizeof(struct node));
    printf("enter the data to insert at end: ");
    scanf("%d", &n->data);
    n->next = NULL;
    //n->next = head;
    p = head;
    while(p->next != NULL)
    {
    	p = p->next;
	}
	p->next = n;
	printf("after change display\n");
	display();*/
	
	/*insert at middle 
	
	printf("enter the position\n");
	scanf("%d", &m);
	n = (struct node*) malloc(sizeof(struct node));
	printf("enter the data: ");
	scanf("%d",&n->data);
	n->next= NULL;
	p = head;
	for(int i = 1; i < (m-1); i++)
	{
		p = p->next;
	}
	old = p->next;
	p->next = n;
	n->next = old;
	
	//deletion at middle 
	printf("enter the position\n");
	scanf("%d", &m);
	p = head;
	for(int i = 1; i<m; i++)
	{
		old = p;
		p = p->next;
	}
	old->next = p->next;
	free(p);
	
	printf("after changes at middle\n ");
	display();
}

void display()
{
	p = head;
	while(p != NULL)
	{
		printf("data is: %d\n", p->data);
		p = p->next;
	}
}*/

/*
//doubly linked list 

//this is forward and reverse printing data
#include<stdio.h>
#include<stdlib.h>

void farward_display();
void reverse_display();
struct node
{
	struct node *prev;
	int data;
	struct node *next;
} *head, *old, *p, *n;
 
void main()
{
	int j, k, l, m;
	printf("enter how many nodes you want\n");
	scanf("%d", &m);
	head = (struct node*)malloc(sizeof(struct node));
	printf("enter the data: ");
	scanf("%d", &head->data);
	head->next = NULL;
	head->prev = NULL;
	old = head;
	for(int i = 1; i<m; i++)
	{
		n = (struct node*)malloc(sizeof(struct node));
		printf("enter tha data\n ");
		scanf("%d", &n->data);
		n->next = NULL;
		n->prev = NULL;
		old->next = n; 
		n->prev = old;
		old =n; 
	}
	
	printf("before display\n");
	farward_display();
	
	printf("reverse display\n");
	reverse_display();
}

void farward_display()
{
	p = head;
	while(p != NULL)
	{
		printf("data is: %d\n", p->data);
		p = p->next;
	}
}


void reverse_display()
{
	p = head;
	while(p->next != NULL)
	{
		p = p->next;
	}
	while(p != NULL)
	{
		printf("data is: %d\n", p->data);
		p = p->prev;
	}
	
}*/

/*
//insert at middle 
#include<stdio.h>
#include<stdlib.h>

void farward_display();
void reverse_display();
struct node
{
	struct node *prev;
	int data;
	struct node *next;
} *head, *old, *p, *n;
 
void main()
{
	int j, k, l, m;
	printf("enter how many nodes you want\n");
	scanf("%d", &m);
	head = (struct node*)malloc(sizeof(struct node));
	printf("enter the data: ");
	scanf("%d", &head->data);
	head->next = NULL;
	head->prev = NULL;
	old = head;
	for(int i = 1; i<m; i++)
	{
		n = (struct node*)malloc(sizeof(struct node));
		printf("enter tha data\n ");
		scanf("%d", &n->data);
		n->next = NULL;
		n->prev = NULL;
		old->next = n; 
		n->prev = old;
		old =n; 
	}
	
	printf("before display\n");
	farward_display();
	
	printf("reverse display\n");
	reverse_display();
	
	//insert at begninning
	printf("enter the position: ");
	scanf("%d", &m);
	p = head;
	for(int i = 1; i<m; i++)
	{
		p = p->next;
		
	}
	n = (struct node*)malloc(sizeof(struct node));
		printf("enter tha data\n ");
		scanf("%d", &n->data);
		n->next = NULL;
		n->prev = NULL;
		n->next = p;
		n->prev = p->prev;
		p->prev = n;
		old= n->prev;
		old->next = n;
	printf("after changed forward display\n");
	farward_display();
	printf("reverse after changed display\n");
	reverse_display();
}

void farward_display()
{
	p = head;
	while(p != NULL)
	{
		printf("data is: %d\n", p->data);
		p = p->next;
	}
}


void reverse_display()
{
	p = head;
	while(p->next != NULL)
	{
		p = p->next;
	}
	while(p != NULL)
	{
		printf("data is: %d\n", p->data);
		p = p->prev;
	}
	
}*/


//stack

/*
#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int item)
{
	if(top == MAX_SIZE - 1)
	{
		printf("stack overflow\n");
		return;
	}
	stack[++top] = item;
}

int pop()
{
	if(top == -1)
	{
		printf("stack underflow\n");
		return -1;
	}
	return stack[top --];
}

int peek()
{
	if(top == -1)
	{
		printf("stack is empty\n");
		return -1;
	}
	return stack[top];
}

int isEmpty()
{
	return top == -1;
}

int isFull()
{
	return top == MAX_SIZE-1;
}

int main()
{
	push(10);
	push(20);
	push(30);
	
	printf("Top element: %d\n", peek());
	printf("Popped element: %d\n", pop());
	printf("Top element: %d\n", peek());
	return 0;
}*/



#include <stdio.h>  
#include <stdlib.h>  
void push();  
void pop();  
void display();  
struct node   
{  
int val;  
struct node *next;  
};  
struct node *head;  
  
void main ()  
{  
    int choice=0;     
    printf("\n*********Stack operations using linked list*********\n");  
    printf("\n----------------------------------------------\n");  
    while(choice != 4)  
    {  
        printf("\n\nChose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                display();  
                break;  
            }  
            case 4:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
    };  
}  
}  
void push ()  
{  
    int val;  
    struct node *ptr = (struct node*)malloc(sizeof(struct node));   
    if(ptr == NULL)  
    {  
        printf("not able to push the element");   
    }  
    else   
    {  
        printf("Enter the value");  
        scanf("%d",&val);  
        if(head==NULL)  
        {         
            ptr->val = val;  
            ptr -> next = NULL;  
            head=ptr;  
        }   
        else   
        {  
            ptr->val = val;  
            ptr->next = head;  
            head=ptr;  
               
        }  
        printf("Item pushed");  
          
    }  
}  
  
void pop()  
{  
    int item;  
    struct node *ptr;  
    if (head == NULL)  
    {  
        printf("Underflow");  
    }  
    else  
    {  
        item = head->val;  
        ptr = head;  
        head = head->next;  
        free(ptr);  
        printf("Item popped");  
          
    }  
}  
void display()  
{  
    int i;  
    struct node *ptr;  
    ptr=head;  
    if(ptr == NULL)
    {  
        printf("Stack is empty\n");  
    }  
    else  
    {  
        printf("Printing Stack elements \n");  
        while(ptr!=NULL)  
        {  
            printf("%d\n",ptr->val);  
            ptr = ptr->next;  
        }  
    }  
}