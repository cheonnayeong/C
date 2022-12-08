#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_STACK_SIZE 100
typedef int element; //int를 element로 재정의
element	stack[MAX_STACK_SIZE]; //1차원 배열로 스택 정의
//전역변수로 스택 선언
int top = -1;

bool isEmpty(){
  if (top == -1 ) return 1;
	else return 0;
}
bool isFull(){
	if(top == MAX_STACK_SIZE - 1)
		return 1;
	else return 0;
}	 
void push(element item){
	top++;
	stack[top] = item;
}
element pop(){ //반환후 제거
	element temp;
	temp = stack[top];
	top--;
	return temp;

}
element peek(){//반환만
	return stack[top];
}
int main(){
	push(1);
	push(2);
	push(3);
	printf("%d\n",pop());
	printf("%d\n",peek());
	printf("%d\n",pop());
	return 0;

}

// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
// #define MAX_STACK_SIZE 100
// typedef int element; //int를 element로 재정의

// typedef   struct {
//    element stack[MAX_STACK_SIZE];
//    int top;
// }Stack;
// //전역변수로 스택 선언
// Stack s;
// int top = -1;

// bool isEmpty(){
//    if(s.top == -1) return 1;
//    else return 0;
// }
// bool isFull(){
//    if(s.top == MAX_STACK_SIZE-1)
//       return 1;
//    else return 0;
// }    
// void push(element item){
//    s.top++;
//    s.stack[s.top] = item;
// }
// element pop(){ //반환후 제거
//    if(isEmpty()) return;
//    element temp;
//    temp = s.stack[s.top];
//    s.top--;
//    return temp;
// }
// element peek(){//반환만
//    return s.stack[s.top];
// }
// int main(){
//    push(1);
//    push(2);
//    push(3);
//    printf("%d\n",pop());
//    printf("%d\n",peek());
//    printf("%d\n",pop());
//    return 0;
// }