#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



#define MAX_SIZE 100

// Remember stack is LIFO

int stack[MAX_SIZE]; 
int top = -1;

void push(int data) {
	// if stack is full
	if (top == MAX_SIZE - 1) {
		printf("Stack overflow!\n");
		return;

	}

	top++;
	stack[top] = data;
}
void pop() {
	// if stack is empty
	if (top == -1) {
		printf("Stack overflow!\n");
		return;
	}

	top--;
}

void print_stack() {
	printf("--------------------------\n");
	
	if (top == -1) {
		printf("Stack is empty.\n");
		return;
	}

	for (int i = top; i >= 0; i--) printf("%2.d\n", stack[i]);
}

int main()
{
	int size, data;
	printf("Enter stack size : ");
	scanf("%d", &size);

	for (int i = 0; i < size; i++) {
		printf("Enter data to push: ");
		scanf("%d", &data);
		push(data);
	}
	print_stack();
	printf("Popping one element...\n");
	pop();

	print_stack();
}