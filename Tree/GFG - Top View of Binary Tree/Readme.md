You are given the root of a binary tree, and your task is to return its top view. The top view of a binary tree is the set of nodes visible when the tree is viewed from the top.

Note:

Return the nodes from the leftmost node to the rightmost node.

If multiple nodes overlap at the same horizontal position, only the topmost (closest to the root) node is included in the view. 

Examples:

Input: root = [1, 2, 3]

Output: [2, 1, 3]

Explanation: The Green colored nodes represents the top view in the below Binary tree.

<img width="450" height="400" alt="image" src="https://github.com/user-attachments/assets/25a4285a-79de-44ce-aa7f-c5f76a99e126" />

Input: root = [10, 20, 30, 40, 60, 90, 100]

Output: [40, 20, 10, 30, 100]

Explanation: The Green colored nodes represents the top view in the below Binary tree.

<img width="450" height="400" alt="image" src="https://github.com/user-attachments/assets/d9331ba2-1098-49f6-8e12-5ee0017cab77" />

Constraints:

1 ≤ number of nodes ≤ 105

1 ≤ node->data ≤ 105
