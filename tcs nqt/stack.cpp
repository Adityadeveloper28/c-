#include <iostream>
#include <vector> // Include the vector library to use std::vector ?    //vector is a sequence container that encapsulates dynamic size arrays

class Stack { // Stack class to implement stack operations using a vector ?  
//stack is a linear data structure which follows a particular order in which the operations are performed
private: //private access specifier to restrict access to certain members of the class 
    std::vector<int> elements;//vector to store elements of stack vector?=array of elements of stack

public: //public access specifier to make members accessible from outside the class
    void push(int value) {
        elements.push_back(value); // Add an element to the end of the vector using push_back() method  
        //elements? vector of elements of stack why elements.push_back(value)? to add an element to the end of the vector

    }

    void pop() {
        if (!elements.empty()) { // Check if the vector is not empty before removing an element
            elements.pop_back(); // Remove the last element from the vector using pop_back() method
        } else {
            std::cout << "Stack is empty!" << std::endl; // Print a message if the stack is empty
        }
    }

    int top() {
        if (!elements.empty()) {
            return elements.back(); // Return the last element of the vector using back() method
        } else {
            std::cout << "Stack is empty!" << std::endl;    // Print a message if the stack is empty
            return -1; // Return an invalid value to indicate the stack is empty
        }
    }
    void print() { // Print all elements in the stack
        std::cout << "Stack elements: ";
        for (int i = elements.size() - 1; i >= 0; i--) { // Reverse order for stack representation
            std::cout << elements[i] << " ";
        }
        std::cout << std::endl;
    }

    bool isEmpty() {
        return elements.empty(); // Check if the vector is empty using empty() method and return the result as a boolean value
        //how elements.empty() works? empty() method returns true if the vector is empty, otherwise false  
        //
    }

    int size() {
        return elements.size(); // Return the number of elements in the vector using size() method
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    ///print stack elements std
    // Print stack elements after pop
    stack.print();

    std::cout << "Stack size: " << stack.size() << std::endl;
    std::cout << "Top element: " << stack.top() << std::endl;
    stack.pop();
    std::cout << "Top element after pop: " << stack.top() << std::endl;

    std::cout << "Stack size: " << stack.size() << std::endl;
    std::cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}