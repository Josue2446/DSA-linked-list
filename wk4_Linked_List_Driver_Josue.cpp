// FILE: wk4_Linked_List_Driver_Josue.cpp
//
// CLASS PROVIDED: bag (part of the namespace Josue)
// 
// Summary: Driver file to test functions located in bag3.h and bag3.cpp
//             
// Test Cases: used valgrind to check for memory leaks, output: 
//             HEAP SUMMARY:
//              in use at exit: 0 bytes in 0 blocks
//              total heap usage: 39 allocs, 39 frees, 74,440 bytes allocated
//              All heap blocks were freed -- no leaks are possible
//
// Author: Josue 
//
// Date: 04/27/2023
//
// Summary of modifications: N/A
//  
// Complier: Ubuntu (g++)

#include <iostream> // cout, endl
#include "bag3.h"

using std::cout;
using std::endl;
using namespace Josue;

int main(){
    bag b1;

    b1.insert(10.5);
    b1.insert(20.5);
    b1.insert(30.5);
    b1.insert(40.5);

    cout << "before ++ operator: ";
    b1.print();

    cout << endl;

    cout << "number of added nodes: " << ++b1;
    cout << endl << "after ++ operator: ";
    b1.print();
     /*    
    bag b2(b1);

    cout << "Size of b2 using copy constructor: " << b2.size() << endl;
    cout << "There are " << b1.count(10) << " 10's in b2" << endl;

    cout << "\nSize of b1 after 4 inserts is: " << b1.size() << endl;
    cout << "There are " << b1.count(10) << " 10's in b1" << endl;
    cout << "random number grabbed is: " << b1.grab() << endl;
    cout << "Erasing one value of ten, output: " << b1.erase_one(10) << endl;
    cout << "Now the size is: " << b1.size() << " with only ";
    cout << b1.count(10) << " ten's in b1 now" << endl;
    cout << "Now erasing ALL value of 10 in b1.... " << endl;
    cout << "b1 got rid of " << b1.erase(10) << " ten's" << endl;

    bag b3;

    b3 = b1;
    b3 += b2;

    cout << "\nb3 after using overloaded = and += has: " << b3.size() << " nodes";
    cout << endl << "with " << b3.count(10) << " ten's" << endl;
    cout << "and " << b3.count(9) << " 9's" << endl;

    bag b4;

    b4 = b1 + b3;

    cout << "\nAfter b4 = b1 + b3 size of b4 is: " << b4.size() << endl;
    cout << "with " << b4.count(10) << " ten's and " << b4.count(9) << " 9's" << endl;
    cout << endl;

    // ADDITIONAL FUNCTIONS (SEE BELOW)

    bag b5;

    b5.insert(10.0);
    b5.insert(20.0);
    b5.insert(30.0);

    cout << "b5 contains: ";
    b5.print();
    cout << "output of appending head value to tail: " << b5.append_head_value() << endl;        
    cout << "b5 now contains: ";
    b5.print();
    cout << endl;

    b5.attach_sum();
    cout << "after attaching sum to head, b5 contains: ";
    b5.print();
    cout << endl;

    cout << "output of removing tail: " << b5.remove_tail() << endl;
    cout << "b5 now contains: ";
    b5.print();
    cout << endl;
    
    b5.insert(90.0);
    b5.insert(90.0);

    cout << "after inserting 90 twice, b5 contains: ";
    b5.print();
    cout << "output of removing duplicates: " << b5.remove_duplicates() << endl;
    cout << "b5 now contains: ";
    b5.print();
    cout << "b5 size: " << b5.size() << endl;
    */
    return 0;
}
