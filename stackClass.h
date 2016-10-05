//
//  CS 241
//  Fall 2015
//  PA 2
//  15 October 2015
//  stackClass.h
//  Programming Assignment Two Problem One and Two
//  Nate McCain
//
//  Created by Nate McCain on 10/8/15.
//  Copyright © 2015 Nate McCain. All rights reserved.
//

#ifndef stackClass_h
#define stackClass_h

static const int MAX_ITEMS = 10;

// The stack class
class stackArray {
    
public:
    // Constructors- Default, Single, and Copy
    stackArray();
    stackArray(int item);
    stackArray(stackArray const & stack);
    
    // Stack functions
    bool IsEmpty() const;
    bool IsFull() const;
    void Push(int item);
    void Pop();
    int Top() const;
    
    // Print function
    void PrintStack();
    void PrintSize();
    
    
private:
    int top;
    int items[MAX_ITEMS];
    
};



#endif /* stackClass_h */
