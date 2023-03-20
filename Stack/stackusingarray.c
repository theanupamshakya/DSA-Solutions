#include<stdio.h>
#include<conio.h>
#define N 10


int stack[N];
int top=-1;
void push();
void pop();
void disp();
void peek();

void push()
{
    int x;
    printf("Enter the data:");
    scanf("%d", &x);
    if(top==N-1)
    {
        printf("Stack is overflow");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}

void pop()
{
    int x;

    if(top==-1)
    {
        printf("Stack is underflow");
    }
    else
    {
        x=stack[top];
        top--;
    }
}

void peek()
{
    if(top==-1)
    {
        printf("Stack is underflow");
    }
    else
    {
        printf("%d", stack[top]);
    }
}

void disp()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d\n", stack[i]);
    }
}

int main()
{
    int ch;
    printf("1. Enter the element to push\n");
    printf("2. Enter the element to pop\n");
    printf("3. Enter the element to display\n");
    printf("4. Peek Element\n");

    while(1)
    {
        printf("Enter your choice:");
        scanf("%d", &ch);

        switch(ch)
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
                disp();
                break;
            }
        case 4:
            {
                peek();
                break;
            }
        default:
            {
        printf("Wrong Choice");
            }
        }
    }
}
