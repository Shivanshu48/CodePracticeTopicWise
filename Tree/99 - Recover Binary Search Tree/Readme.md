You are given the root of a binary search tree (BST), where the values of exactly two nodes of the tree were swapped by mistake. Recover the tree without changing its structure.

 

Example 1:

<img width="422" height="302" alt="image" src="https://github.com/user-attachments/assets/8c4ec716-0194-467e-9182-082afbb1a486" />

Input: root = [1,3,null,null,2]

Output: [3,1,null,null,2]

Explanation: 3 cannot be a left child of 1 because 3 > 1. Swapping 1 and 3 makes the BST valid.

Example 2:

<img width="581" height="302" alt="image" src="https://github.com/user-attachments/assets/0f9d1110-807b-4b6f-8982-481b4ffd68e1" />

Input: root = [3,1,4,null,null,2]

Output: [2,1,4,null,null,3]

Explanation: 2 cannot be in the right subtree of 3 because 2 < 3. Swapping 2 and 3 makes the BST valid.
 

Constraints:

The number of nodes in the tree is in the range [2, 1000].

-231 <= Node.val <= 231 - 1
