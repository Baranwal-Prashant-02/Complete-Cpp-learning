/*
====================================================================
           STL CONTAINERS AND THEIR DATA STRUCTURE
====================================================================

1. vector
   Data Structure : Dynamic Array
   Access         : O(1)
   Insert End     : O(1) amortized
   Use Case       : Arrays, DP, Graph adjacency list

--------------------------------------------------------------------

2. array
   Data Structure : Static Array
   Access         : O(1)
   Size           : Fixed
   Use Case       : Fixed-size collections

--------------------------------------------------------------------

3. deque
   Data Structure : Dynamic Double-Ended Array
   Insert Front   : O(1)
   Insert Back    : O(1)
   Use Case       : Sliding Window, Monotonic Queue

--------------------------------------------------------------------

4. list
   Data Structure : Doubly Linked List
   Insert/Delete  : O(1)
   Access         : O(n)
   Use Case       : Frequent insertions/deletions

--------------------------------------------------------------------

5. forward_list
   Data Structure : Singly Linked List
   Insert/Delete  : O(1)
   Access         : O(n)
   Use Case       : Memory-efficient linked list

--------------------------------------------------------------------

6. stack
   Data Structure : Stack (LIFO)
   Default Base   : deque
   Operations     : push(), pop(), top()
   Use Case       : Recursion, Expression Evaluation

--------------------------------------------------------------------

7. queue
   Data Structure : Queue (FIFO)
   Default Base   : deque
   Operations     : push(), pop(), front()
   Use Case       : BFS, Scheduling

--------------------------------------------------------------------

8. priority_queue
   Data Structure : Heap
   Default        : Max Heap
   Operations     : push(), pop(), top()
   Use Case       : Dijkstra, Top-K Problems

--------------------------------------------------------------------

9. set
   Data Structure : Red-Black Tree (BST)
   Stores         : Unique Sorted Elements
   Operations     : O(log n)
   Use Case       : Ordered unique elements

--------------------------------------------------------------------

10. multiset
    Data Structure : Red-Black Tree
    Stores         : Duplicate Sorted Elements
    Operations     : O(log n)
    Use Case       : Frequency with ordering

--------------------------------------------------------------------

11. unordered_set
    Data Structure : Hash Table
    Stores         : Unique Elements
    Operations     : O(1) average
    Use Case       : Fast lookup

--------------------------------------------------------------------

12. map
    Data Structure : Red-Black Tree
    Stores         : Key-Value Pairs (Sorted Keys)
    Operations     : O(log n)
    Use Case       : Ordered dictionary

--------------------------------------------------------------------

13. multimap
    Data Structure : Red-Black Tree
    Stores         : Duplicate Keys Allowed
    Operations     : O(log n)
    Use Case       : One-to-many mapping

--------------------------------------------------------------------

14. unordered_map
    Data Structure : Hash Table (HashMap)
    Stores         : Key-Value Pairs
    Operations     : O(1) average
    Use Case       : Frequency counting, Two Sum

--------------------------------------------------------------------

15. unordered_multiset
    Data Structure : Hash Table
    Stores         : Duplicate Elements
    Operations     : O(1) average

--------------------------------------------------------------------

16. unordered_multimap
    Data Structure : Hash Table
    Stores         : Duplicate Keys
    Operations     : O(1) average

====================================================================
                 MOST IMPORTANT FOR DSA
====================================================================

Array            -> vector
Dynamic Array    -> vector
Linked List      -> list / forward_list
Stack            -> stack
Queue            -> queue
Deque            -> deque
Heap             -> priority_queue
BST              -> set / map
HashSet          -> unordered_set
HashMap          -> unordered_map

====================================================================
*/