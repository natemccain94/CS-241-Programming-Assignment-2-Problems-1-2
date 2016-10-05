//
//  CS 241
//  Fall 2015
//  PA 2
//  15 October 2015
//  stackClass.cpp
//  Programming Assignment Two Problem One and Two
//  Nate McCain
//
//  Created by Nate McCain on 10/8/15.
//  Copyright © 2015 Nate McCain. All rights reserved.
//

#include <stdio.h>
#include "stackClass.h"
#include <iostream>
#include <cctype>

using namespace std;

// Default Constructor
stackArray::stackArray() {
    top = -1;
    
}

// Single Item Stack Constructor
stackArray::stackArray(int item) {
    
        top = -1;
        Push(item);
    
}

// Copy Stack Constructor
stackArray::stackArray(stackArray const & stack) {
    top = -1;
    for (int i = 0; i <= stack.top; i++)
    {
        Push(stack.items[i]);
    }
}


// IsEmpty function
bool stackArray::IsEmpty() const{
    return (top == -1);
}

// IsFull function
bool stackArray::IsFull() const{
    return (top == MAX_ITEMS - 1);
}

// Push function
void stackArray::Push(int item) {
    if (IsFull())
    {
        cout << "Cannot Push a full stack." << endl;
    }
    
    else
    {
        top++;
        items[top] = item;
    }
}


// Pop function
void stackArray::Pop() {
    if (IsEmpty())
    {
        cout << "Cannot Pop an empty stack." << endl;
    }
    else
    {
        top--;
    }
}

// Top function
int stackArray::Top() const {
    if (IsEmpty())
    {
        cout << "Cannot peek at an empty stack. Returning the integer -1" << endl;
        return -1;
    }
    else
    {
        return items[top];
    }
}


// Print function that prints the entire stack.
void stackArray::PrintStack() {
    if (IsEmpty())
    {
        cout << "The stack is empty." << endl;
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            cout << items[i] << ", ";
        }
    cout << endl;
    }
}

// Print function that prints the entire size.
void stackArray::PrintSize() {
    cout << top + 1 << endl;
}


