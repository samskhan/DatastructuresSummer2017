// FILE: sequence1.cpp
// Author: Sams Khan
//Description: Class implementation for sequence.h


#include <algorithm>
#include <cassert>
#include "sequence1.h"

using namespace std;

namespace main_savitch_3{

// // TYPEDEFS and MEMBER CONSTANTS for the sequence class:
//
// //   typedef ____ value_type
//
// //     sequence::value_type is the data type of the items in the sequence. It
//
// //     may be any of the C++ built-in types (int, char, etc.), or a class with a
//
// //     default constructor, an assignment operator, and a copy constructor.
//
// //
//
// //   typedef ____ size_type
//
// //     sequence::size_type is the data type of any variable that keeps track of
//
// //     how many items are in a sequence.
//
// //
//
// //   static const size_type CAPACITY = _____
//
// //     sequence::CAPACITY is the maximum number of items that a sequence can hold.
//

	const sequence::size_type sequence::CAPACITY;
//
// // CONSTRUCTOR for the sequence class:
//
// //   sequence( )
//
// //     Postcondition: The sequence has been initialized as an empty sequence.
//
	sequence::sequence(){
		used=0;
		current_index=0;
	}
//
// // MODIFICATION MEMBER FUNCTIONS for the sequence class:
//
// //   void start( )
//
// //     Postcondition: The first item on the sequence becomes the current item
//
// //     (but if the sequence is empty, then there is no current item).
	void sequence::start(){
		current_index=0;
	}
// //
//
// //   void advance( )
//
// //     Precondition: is_item returns true.
//
// //     Postcondition: If the current item was already the last item in the
//
// //     sequence, then there is no longer any current item. Otherwise, the new
//
// //     current item is the item immediately after the original current item.
	void sequence::advance(){
		assert(is_item()==true);
		current_index++;
	}
// //
//
// //   void insert(const value_type& entry)
//
// //     Precondition: size( ) < CAPACITY.
//
// //     Postcondition: A new copy of entry has been inserted in the sequence
//
// //     before the current item. If there was no current item, then the new entry 
//
// //     has been inserted at the front of the sequence. In either case, the newly
//
// //     inserted item is now the current item of the sequence.
	void sequence::insert(const value_type& entry){
		assert(size()<CAPACITY);
		if(!is_item()==true){
			current_index=0;
		}
		for(size_type i=used;i>current_index;i--){
			data[i]=data[i-1];
			
		}
		data[current_index]=entry;
		used++;
	}
// //
//
// //   void attach(const value_type& entry)
//
// //     Precondition: size( ) < CAPACITY.
//
// //     Postcondition: A new copy of entry has been inserted in the sequence after
//
// //     the current item. If there was no current item, then the new entry has 
//
// //     been attached to the end of the sequence. In either case, the newly
//
// //     inserted item is now the current item of the sequence.
//
	void sequence::attach(const value_type& entry){
		assert(size()<CAPACITY);
		current_index++;
		if(!is_item()==true){
			current_index=used;
		}
		for(size_type i=used;i>current_index;i--){
			data[i]=data[i-1];
			
		}
		data[current_index]=entry;
		used++;
	}
//
// //   void remove_current( )
//
// //     Precondition: is_item returns true.
//
// //     Postcondition: The current item has been removed from the sequence, and the
//
// //     item after this (if there is one) is now the new current item.
//
	void sequence::remove_current(){
		assert(is_item()==true);

		for(size_type i=current_index;i<used-1;i++){
			data[i]=data[i+1];
		}
		used--;
	}
//
// // CONSTANT MEMBER FUNCTIONS for the sequence class:
//
// //   size_type size( ) const
//
// //     Postcondition: The return value is the number of items in the sequence.
	sequence::size_type sequence::size() const{
		return used;
	}
// //
//
// //   bool is_item( ) const
//
// //     Postcondition: A true return value indicates that there is a valid
//
// //     "current" item that may be retrieved by activating the current
//
// //     member function (listed below). A false return value indicates that
//
// //     there is no valid current item.
	bool sequence::is_item() const{
		if (current_index<used){
			return true;
		}
		return false;;
	}
// //
//
// //   value_type current( ) const
//
// //     Precondition: is_item( ) returns true.
//
// //     Postcondition: The item returned is the current item in the sequence.
	sequence::value_type sequence::current() const{
		assert(is_item()==true);
		return data[current_index];
	}
// //
//
// // VALUE SEMANTICS for the sequence class:
//
// //    Assignments and the copy constructor may be used with sequence objects.
}
