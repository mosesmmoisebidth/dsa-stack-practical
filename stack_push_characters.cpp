#include <iostream>
#include <string>
#define MAX 100

class Stack {
private:
    int top;
    char arr[MAX];

public:
    Stack() {
        top = -1;
    }

    bool push(char c) {
        if (top >= (MAX - 1)) {
            std::cout << "Stack Overflow" << std::endl;
            return false;
        } else {
            arr[++top] = c;
            return true;
        }
    }

    char pop() {
        if (top < 0) {
            std::cout << "Stack Underflow" << std::endl;
            return 0;
        } else {
            char c = arr[top--];
            return c;
        }
    }

    bool isEmpty() {
        return (top < 0);
    }
};

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    Stack stack;

    for (char c : str) {
        stack.push(c);
    }

    std::string reversed_str;
    
    while (!stack.isEmpty()) {
        reversed_str += stack.pop();
    }

    std::cout << "Original string: " << str << std::endl;
    std::cout << "String after popping: " << reversed_str << std::endl;

    return 0;
}
