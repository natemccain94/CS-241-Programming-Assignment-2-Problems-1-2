//
//  CS 241
//  Fall 2015
//  PA 2
//  15 October 2015
//  problemTwoDriver.cpp
//  Programming Assignment Two Problem One and Two
//  Nate McCain
//
//  Created by Nate McCain on 10/8/15.
//  Copyright © 2015 Nate McCain. All rights reserved.
//

#include <iostream>
#include "stackClass.h"

using namespace std;

int main()
{
   
    // This is the first test case.
    // Create an empty stack and push items on to it, pop items off of it.
    cout << "Now creating an empty stack and will push items on to it and pop" << endl
         << "items off of it." << endl;
    stackArray emptyTest;
    emptyTest.Push(3);
    emptyTest.Push(7);
    emptyTest.Push(23);
    // Should print 23, 7, 3.
    cout << "Should print 23, 7, 3," << endl;
    emptyTest.PrintStack();
    emptyTest.Pop();
    // Should print 7, 3
    cout << "Should print 7, 3" << endl;
    emptyTest.PrintStack();
    cout << endl << endl;
    // End of first test case.
    
    
    // Second test case.
    // Create a single-item stack and remove the item.
    cout << "Creating a single-item stack and will then remove the item." << endl;
    int secondTest = 4;
    stackArray singleItem(secondTest);
    singleItem.PrintStack();
    singleItem.Pop();
    singleItem.PrintStack();
    // End of second test case.
    
    
    // Third test case.
    // Create a stack with several items and make a copy of it.
    cout << "Creating a stack with several items in it." << endl;
    stackArray copyMe;
    copyMe.Push(1);
    copyMe.Push(2);
    copyMe.Push(3);
    copyMe.Push(4);
    copyMe.Push(5);
    cout << "Now printing the original stack." << endl;
    copyMe.PrintStack();
    cout << "Now copying the orignial stack." << endl;
    stackArray copyStack(copyMe);
    cout << "Printing out the copied stack." << endl;
    copyStack.PrintStack();
    // End of third test case.
   
    
    // Fourth test case.
    // Print out the size of a stack.
    cout << "Now printing out the size of the copied stack." << endl;
    copyStack.PrintSize();
    // End of fourth test case.
   
    // Fifth test case.
    // Attempt to push an item on to a full stack.
    stackArray fullStack;
    fullStack.Push(9);
    fullStack.Push(8);
    fullStack.Push(7);
    fullStack.Push(6);
    fullStack.Push(5);
    fullStack.Push(4);
    fullStack.Push(3);
    fullStack.Push(2);
    fullStack.Push(1);
    fullStack.Push(0);
    // Should print 10
    cout << "Printing the size of the full stack" << endl;
    fullStack.PrintSize();
     // Should print 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    cout << "Printing the items in the full stack." << endl;
    fullStack.PrintStack();
    cout << "Now trying to push an item on to the full stack." << endl;
    fullStack.Push(44);
    cout << "Now printing out the full stack to show it did not accept the extra value." << endl;
    fullStack.PrintStack();
    // End of fifth test case.
    
    
    // Sixth test case
    // Attempt to pop an item off an empty stack.
    cout << "Now trying to pop an item off an empty stack." << endl;
    stackArray zeroStack;
    zeroStack.Pop();
    // End of sixth test case.
    
    
    // Seventh test case.
    // Attempt to peek at an item of an empty stack.
    cout << "Now attempting to peek at an item of an empty stack." << endl
         << zeroStack.Top() << endl;
    // End of seventh test case.
    
    
    // Eighth test case.
    // Attempt to create a stack with the wrong data type.
    cout << "Now attempting to create a stack with the wrong data type. It should convert" << endl
         << "the character into its ASCII integer value and store that instead." << endl;
    char a = 'a';
    stackArray wrongType;
    wrongType.Push(a);
    wrongType.PrintStack();
    // End of eithth test case.

    
    return 0;
    
}



