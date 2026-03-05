# AI Assignment 2 – Individual Implementation

Name: Sai Teja  
Course: Artificial Intelligence

This project contains implementations of Breadth First Search (BFS), Depth First Search (DFS), and the Water Jug Problem using Python.

--------------------------------------------------

PROGRAMS INCLUDED

bfs.py – Implementation of Breadth First Search  
dfs.py – Implementation of Depth First Search  
waterjug.py – Implementation of Water Jug Problem  

--------------------------------------------------

PROGRAM OUTPUTS

BFS Output

Example traversal:

A B C D E F

BFS visits nodes level by level starting from the root node.

--------------------------------------------------

DFS Output

Example traversal:

A C F B E D

DFS visits nodes deeply into one branch before backtracking.

--------------------------------------------------

Water Jug Problem Output

Example states explored:

(0,0)
(4,0)
(4,3)
(0,3)
(3,0)
(3,3)
(2,3)

Goal Reached

The goal is to measure 2 liters of water.

--------------------------------------------------

DIFFERENCE BETWEEN BFS AND DFS

1. BFS uses Queue (FIFO) while DFS uses Stack (LIFO).

2. BFS explores nodes level by level, while DFS explores nodes depth first.

3. BFS guarantees the shortest path in unweighted graphs, while DFS does not always give the optimal solution.

4. BFS requires more memory because it stores all nodes at each level, while DFS requires less memory.

5. BFS is suitable for shallow problems, while DFS works better for deep search problems.

--------------------------------------------------

OUTPUT STEPS

1. Run BFS program

python bfs.py

Output:
A B C D E F

2. Run DFS program

python dfs.py

Output:
A C F B E D

3. Run Water Jug program

python waterjug.py

Example Output:
(0,0)
(4,0)
(4,3)
(0,3)
(3,0)
(3,3)
(2,3)

Goal Reached

--------------------------------------------------

OBSERVATION

BFS explores nodes level by level and guarantees the shortest path in an unweighted graph.  
DFS explores nodes deeply before backtracking and uses less memory compared to BFS.  
The Water Jug problem demonstrates how search algorithms can be used to reach a goal state by exploring possible states.

--------------------------------------------------

FILES IN REPOSITORY

bfs.py  
dfs.py  
waterjug.py  
README.md
