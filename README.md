# FineGrainedQueue

Implementation of the insertIntoMiddle(int value, int pos) method for a list with fine grained locking.
The function inserts a node with passed value into pos position.

The following is assumed:

the queue is not empty,

the element is inserted in the middle or end of the list, i.e. insertion at the beginning of the list is not considered,

if pos is greater than the list length, the element is inserted at the end of the list.
