# Gfg-Must-do


## Problem main crux
### 1. Find the middle of linked list 
    First approach
    count the number of nodes and then traverse the linked list again and then print the middle node.
    Handle seperately for odd even cases
    - - - -
    Second Approach
    Use two pointer technique move slow by one fast by two and when the fast reaches the end 
    slow will point to mid.
    
### 2 Reverse a linked list
     using recursion-- reverse the first node and call recursion for all other nodes
     use 3 pointers prev,curr,nextptr
     Be careful while changing the curr first make it next point to nextptr.
