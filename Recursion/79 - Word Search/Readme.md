Given an m x n grid of characters board and a string word, return true if word exists in the grid.

The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.

 

Example 1:

<img width="322" height="242" alt="image" src="https://github.com/user-attachments/assets/44207b95-4143-4fad-9a2f-6d1bb108c3d4" />

Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCCED"

Output: true

Example 2:

<img width="322" height="242" alt="image" src="https://github.com/user-attachments/assets/2aebe678-d1e2-407d-a3ec-094127c30660" />

Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "SEE"

Output: true

Example 3:

<img width="322" height="242" alt="image" src="https://github.com/user-attachments/assets/2de8f562-f105-46cc-a193-076e578ba165" />

Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCB"

Output: false
 

Constraints:

m == board.length

n = board[i].length


1 <= m, n <= 6

1 <= word.length <= 15

board and word consists of only lowercase and uppercase English letters.
