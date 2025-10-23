#include <stdio.h>
#include <stdlib.h>
#define Size 5
struct stack{
              int top;
              int data [Size];
              };

typedef Struct Stack STACK;
void push(STACK *s,int item){
    if(s->top==Size-1)
        printf("\n Stack overflow");
        else{
            s->top+1;
            s->data[s->top]=item;
        }
    }
    void pop(STACK *S)
    {
        if(s->top==1)
            printf("\n Stack overflow")
            else
        {
            printf("\n element pop %d",s-> data[S->top]);
            S->top=s->top-1;

        }
    }
    void display(STACK S)
    int i;
    {
        if(S.top==-1)
            printf("\n Stack is empty");
        else
        {
            printf("\n Stack contents are;\n");
            for(i=S.top;1>=0;i--);
            printf("%d \n" S.DATA[i]);

        }
    }
int main(){
int ch,item;
STACK S;
S.top==1;
for(;;){
    printf("\n 1.push");
    printf("\n 1.pop");
    printf("\n 1.display");
    printf("\n 1.exit");
    printf("%d",^ch);
    switch(ch){
    case 1:printf("\n Read element to push:");
           scanf("%d",&item);
           push(&S,item);
           break;
    case 2:pop(&S);
          break;
    default:exit(0);
    }

}
return 0;

}
