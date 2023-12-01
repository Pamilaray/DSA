#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int stack[MAX];
int top = -1;

int isFull()
{
    if(top == MAX-1)
        return 1;
    else  
        return 0;
}

int isEmpty()
{
    if(top == -1)
        return 1;
    else    
        return 0;
}

void push(int data)
{
    if(isFull()){
        printf("Stack overflow\n");
        exit(1);
    }
    top++;
    stack[top] = data;
}

int pop()
{
    int x;
    if(isEmpty()){
        printf("Stack underflow\n");
    }
    x = stack[top];
    top--;
    return x;
}

int peek()
{
    if(isEmpty()){
        printf("Stack underflow\n");
    }
    return stack[top];
}

void print()
{
    if(isEmpty()){
        printf("Stack underflow\n");
    }
    for(int i=0;i<=top;i++){
        printf("%d ",stack[i]);
    }
    printf("\n");
}

int main()
{
    int data,choice;
    
    while(1)
    {
        printf("\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print the top most element\n");
        printf("4. Print all the elements of the stack\n");
        printf("5. Quit\n");
        printf("Please Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter the element to be pushed: ");
                scanf("%d",&data);
                push(data);
                break;
            
            case 2:
                data = pop();
                printf("Deleted element is %d\n",data);
                break;

            case 3:
                printf("The topmost element is %d\n",peek());
                break;

            case 4:
                printf("All the element of the stack are ");
                print();
                break;

            case 5:
                exit(1);

            default:
                printf("Wrong choice\n");
        }
    }
    return 0;
}

