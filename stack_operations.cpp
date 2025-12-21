#include <iostream>

struct stack {
    int size;
    int top;
    int* arr;
};

int stack_is_empty(struct stack* ptr) {
    return ptr->top == -1;
}

int stack_is_full(struct stack* ptr) {
    return ptr->top == ptr->size - 1;
}

void push(struct stack* ptr, int val) {
    if (stack_is_full(ptr)) {
        std::cout << "Stack Overflow! Cannot push " << val << " to the stack\n";
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack* ptr) {
    if (stack_is_empty(ptr)) {
        std::cout << "Stack Underflow! Cannot pop from the stack\n";
        return -1;
    } else {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack* sp, int i) {
    int arrayInd = sp->top - i + 1;
    if (arrayInd < 0) {
        std::cout << "Not a valid position for the stack\n";
        return -1;
    } else {
        return sp->arr[arrayInd];
    }
}

int stack_top(struct stack* sp) {
    return sp->arr[sp->top];
}

int stack_bottom(struct stack* sp) {
    return sp->arr[0];
}

int main() {
    struct stack* sp = new stack;
    sp->size = 10;
    sp->top = -1;
    sp->arr = new int[sp->size];

    std::cout << "Stack has been created successfully\n";

    std::cout << "Full: " << stack_is_full(sp) << std::endl;
    std::cout << "Empty: " << stack_is_empty(sp) << std::endl;

    push(sp, 1);
    push(sp, 2);
    push(sp, 3);
    push(sp, 4);
    push(sp, 5);
    push(sp, 6);
    push(sp, 7);
    push(sp, 8);
    push(sp, 9);
    push(sp, 10);
    push(sp, 11);  // Stack Overflow

    std::cout << "After pushing, Full: " << stack_is_full(sp) << std::endl;
    std::cout << "After pushing, Empty: " << stack_is_empty(sp) << std::endl;

    std::cout << "Popped " << pop(sp) << " from the stack\n";
    std::cout << "Popped " << pop(sp) << " from the stack\n";

    for (int i = 1; i <= sp->top + 1; i++) {
        std::cout << "The value at position " << i
                  << " is " << peek(sp, i) << std::endl;
    }

    delete[] sp->arr;
    delete sp;

    return 0;
}
