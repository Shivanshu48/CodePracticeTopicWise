Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

 

Example 1:

Input: root = [1,2,3,null,5,null,4]

Output: [1,3,4]

Explanation:


<img width="671" height="348" alt="image" src="https://github.com/user-attachments/assets/dcba3985-1167-439b-9ec3-2cb955f3e0f5" />

Example 2:

Input: root = [1,2,3,4,null,null,null,5]

Output: [1,3,4,5]

Explanation:


<img width="829" height="443" alt="image" src="https://github.com/user-attachments/assets/a2e89028-ed1f-4b6f-9222-63c1797d48d1" />

Example 3:

Input: root = [1,null,3]

Output: [1,3]

Example 4:

Input: root = []

Output: []

 

Constraints:

The number of nodes in the tree is in the range [0, 100].

-100 <= Node.val <= 100
