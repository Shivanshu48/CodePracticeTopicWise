Given the root of a binary tree, determine if it is a valid binary search tree (BST).

A valid BST is defined as follows:

The left subtree of a node contains only nodes with keys strictly less than the node's key.

The right subtree of a node contains only nodes with keys strictly greater than the node's key.

Both the left and right subtrees must also be binary search trees.
 

Example 1:

<img width="302" height="182" alt="image" src="https://github.com/user-attachments/assets/da802b82-7f64-41dd-9104-fe99ca647027" />

Input: root = [2,1,3]

Output: true

Example 2:

<img width="422" height="292" alt="image" src="https://github.com/user-attachments/assets/da6214a0-a752-4877-bed9-c1d13a68bf12" />

Input: root = [5,1,4,null,null,3,6]

Output: false

Explanation: The root node's value is 5 but its right child's value is 4.
 

Constraints:


The number of nodes in the tree is in the range [1, 104].

-231 <= Node.val <= 231 - 1
