#include<stdio.h>
#include<stdlib.h>
#define t 4
 int stack[t];
 int top=-1;
int push()
{
    int m;
    printf("enter the element:\n");
    scanf("%d",&m);
    if (top==t-1)
    {
        printf("overflow");
    }
    else{
        stack[top+1]=m;
        top++;
        printf("push in element:%d",m);
    }
}
int pop()
{
    int k;
    printf("enter the element:\n");
    scanf("%d",&k);
    if (top==-1)
    {
        printf("underflow");
    }
    else{
        stack[top]=k;
        top--;
        printf("pop out element:%d ",k);
    }
    
}
int display(){
    int temp;
    for (int i = 0; i < t; i++)
    {
          printf("the elements of stack are:%d",stack[i]);
          printf("\n");
    }

}

int main()
{   int choice,a;
    printf("enter the size:");
    scanf("%d",&a);
do
{
    printf("enter the choice:");
    scanf("%d",&choice);
    if(choice==1){
        push(stack[t]);
    }
    else if(choice==2){
        pop(stack[t]);
    }
    else if(choice==3){
        display(stack[t]);
    }
    else if (choice==4)
    {
        break;
    }
    
    else {
        printf("invalid input:");
    }
}
    while (choice!=4);
    return 0;
}

