Given an undirected graph with no self loops with V (from 0 to V-1) nodes and E edges, the task is to check if there is any cycle in the undirected graph.

Note: Solve the problem using disjoint set union (DSU).

Examples

Input: 



<img width="450" height="400" alt="image" src="https://github.com/user-attachments/assets/8912617d-9e18-409a-9363-d6931417137a" />

Output: 1

Explanation: There is a cycle between 0->2->4->0

Input: 

<img width="450" height="400" alt="image" src="https://github.com/user-attachments/assets/efb3a6ec-8b50-4f51-9b2b-b09135da6ec8" />

Output: 0

Explanation: The graph doesn't contain any cycle

Your Task:

You don't need to read or print anyhting. Your task is to complete the function detectCycle() which takes number of vertices in the graph denoting as V and adjacency list adj and returns 1 if graph contains any cycle otherwise returns 0.

Expected Time Complexity: O(V + E)

Expected Space Complexity: O(V)

Constraints:

2 ≤ V ≤ 104

1 ≤ E ≤ 104
