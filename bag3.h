// FILE: bag3.h 
// CLASS PROVIDED: bag (part of the namespace Josue)
// 
// Summary: Declares bag class, function definitions are in bag3.cpp.
//          Bag class utilizes functions located in node1.h to manipulate a 
//          Linked List using functions in this class.
//
// Test cases: N/A
//
// Author: Josue 
//
// Date: 04/27/2023
//
// Summary of modifications:
//                          04/27/2023 - added: bool append_head_value();
//                          04/27/2023 - added: bool attach_sum();
//                          04/27/2023 - added: bool remove_tail();
//                          04/27/2023 - added: bool remove_duplicates();
//                          04/27/2023 - added: void print() const;
//                          06/01/2023 - added: int operator ++ ();
// Complier: Ubuntu (g++) 
//  
// TYPEDEFS for the bag class:
//   bag::value_type
//     is the data type of the items in the bag. It may be any 
//     of the C++ built-in types (int, char, etc.), or a class with a default
//     constructor, a copy constructor, an assignment
//     operator, and a test for equality (x == y).
//
//   bag::size_type
//     is the data type of any variable that keeps track of how many items are
//     in a bag
//
// CONSTRUCTOR for the bag class:
//   bag( )
//     Postcondition: The bag is empty.
//
// MODIFICATION MEMBER FUNCTIONS for the bag class:
//   size_type erase(const value_type& target)
//     Postcondition: All copies of target have been removed from the bag.
//     The return value is the number of copies removed (which could be zero).
//
//   bool erase_one(const value_type& target)
//     Postcondition: If target was in the bag, then one copy of target has
//     been removed from the bag; otherwise the bag is unchanged. A true
//     return value indicates that one copy was removed; false indicates that
//     nothing was removed.
//
//   void insert(const value_type& entry) 
//     Postcondition: A new copy of entry has been inserted into the bag.
//
//   void operator +=(const bag& addend) 
//     Postcondition: Each item in addend has been added to this bag.
//   
//   bool append_head_value()
//     Postcondition: The value that is at the top of the list gets 
//                    copied and appended to the tail of the list. 
//                    If list is empty, nothing occurs, list 
//                    remains unchanged.
//
//   bool attach_sum()
//     Postcondition: The sum of the value in all the nodes of the 
//                    list is added up and added to the front of the 
//                    list, increases list size by 1. If list is empty, 
//                    nothing is added. List remains unchanged.   
//
//   bool remove_tail()
//     Postcondition: The last node in the list is removed, decreasing 
//                    list size by 1. If list is empty, nothing occurs. 
//                    List remains unchanged.
//
//   bool remove_duplicates()
//     Postcondition: Removes all duplicate values in the list, leaving 
//                    only unique value. If list is empty or there are no 
//                    duplicates in the list, nothing occurs, list 
//                    remains unchanged.
//
//   int operator ++ ():
//     Precondition: Bag object exist.
//     Postcondition: Every value in the Bag object is duplicated, placing 
//                    every new value after the previous value. Returns
//                    an integer that indicates how many new nodes were
//                    created.
//
// CONSTANT MEMBER FUNCTIONS for the bag class:
//   size_type size( ) const 
//     Postcondition: Return value is the total number of items in the bag.
//
//   size_type count(const value_type& target) const 
//     Postcondition: Return value is number of times target is in the bag.
//
//   value_type grab( ) const 
//     Precondition: size( ) > 0.
//     Postcondition: The return value is a randomly selected item from the bag.
// 
//   void print() const
//     Postcondition: Prints every value in the list with a space seperating them.
//
// NONMEMBER FUNCTIONS for the bag class:
//   bag operator +(const bag& b1, const bag& b2) 
//     Postcondition: The bag returned is the union of b1 and b2.
//
// VALUE SEMANTICS for the bag class:
//    Assignments and the copy constructor may be used with bag objects.
//
// DYNAMIC MEMORY USAGE by the bag: 
//   If there is insufficient dynamic memory, then the following functions throw
//   bad_alloc: The constructors, insert, operator +=, operator +, and the
//   assignment operator.

#ifndef MAIN_SAVITCH_BAG3_H
#define MAIN_SAVITCH_BAG3_H
#include <cstdlib>   // Provides size_t and NULL
#include "node1.h"   // Provides node class
namespace Josue
{
    class bag
    {
    public:
        // TYPEDEFS
        typedef std::size_t size_type;
        typedef node::value_type value_type;
        // CONSTRUCTORS and DESTRUCTOR
        bag( );
        bag(const bag& source);
	~bag( );
        // MODIFICATION MEMBER FUNCTIONS
        size_type erase(const value_type& target);
        bool erase_one(const value_type& target);
        void insert(const value_type& entry);
        void operator +=(const bag& addend);
        void operator =(const bag& source);
        // CONSTANT MEMBER FUNCTIONS
        size_type size( ) const { return many_nodes; }
        size_type count(const value_type& target) const;
        value_type grab( ) const;

        // additional functions
        void print() const;
        bool append_head_value();
        bool attach_sum();
        bool remove_tail();
        bool remove_duplicates();
        int operator ++ ();
    private:
        node *head_ptr;       // List head pointer 
        size_type many_nodes; // Number of nodes on the list
    };

    // NONMEMBER FUNCTIONS for the bag class:    
    bag operator +(const bag& b1, const bag& b2);
}
#endif


