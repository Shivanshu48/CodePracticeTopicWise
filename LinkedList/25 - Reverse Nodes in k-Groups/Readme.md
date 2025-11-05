Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.

Example 1:

<img width="542" height="222" alt="image" src="https://github.com/user-attachments/assets/c4453448-2083-452e-ac8a-9bbb7754c731" />

Input: head = [1,2,3,4,5], k = 2

Output: [2,1,4,3,5]

Example 2:

<img width="542" height="222" alt="image" src="https://github.com/user-attachments/assets/f1ae3f8d-f8e9-4191-b718-351a3e866c19" />

Input: head = [1,2,3,4,5], k = 3

Output: [3,2,1,4,5]
 

Constraints:

The number of nodes in the list is n.

1 <= k <= n <= 5000

0 <= Node.val <= 1000
