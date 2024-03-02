#include<stdio.h>
#define N 5

int top = -1;
int stack[N];

void push() {
    int x;

    printf("Enter element to push: ");
    scanf("%d", &x);

    if (top == N - 1) {
        printf("Stack overflow\n");
    } else {
        top++;
        stack[top] = x;
    }
}
void pop() {
    if (top == -1) {
        printf("Stack underflow\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}
void peek() {
    if (top == -1) {
        printf("Stack underflow\n");
    } else {
        printf("Top of the stack is %d\n", stack[top]);
    }
}
void display(){
int i;
if(top==-1){
    printf("stack overflow");
}
else{
    for(int i=top;i>=0;i--){
        printf("the element  %d  of the stack are %d\n",i,stack[i]);
    }
}
}

int main() {
    push();  push();  push();  push(); push();push();
    pop();  pop();  pop();
    peek();
    display();
    return 0;
}
    

    
 