# Efficient Seat Allocation System (C++)

## Overview
This project implements an efficient **seat allocation system** using core **Data Structures & Algorithms** concepts in C++. It simulates a real-world scenario where candidates are assigned resources (e.g., seats) based on rank and preferences.

The system uses **priority queues (heaps)** and **sorting techniques** to ensure optimal and fast allocation.
---
## Features
- Rank-based allocation system
- Handles multiple preferences per candidate
- Efficient processing using priority queue (O(log n))
- Supports dynamic seat availability updates
- Modular and scalable design
---
## Tech Stack
- Language: C++
- Concepts: Priority Queue, Sorting, Greedy Algorithms
- STL: `vector`, `priority_queue`, `map`
---
## Problem Statement
Given:
- A list of candidates with marks and preferences
- A list of resources (colleges/streams) with limited seats
Allocate each candidate the **highest preferred available option** based on rank.
---
## Approach
1. **Sort candidates** based on marks (descending)
2. Iterate through each candidate:
   - Check preferences in order
   - Assign first available seat
3. Update seat availability dynamically
---
## Time Complexity
- Sorting: O(n log n)
- Allocation: O(n log n)
- Overall: **O(n log n)**
---
## Sample Input
### students.txt
1 Aman 95 1 2 3
2 Rahul 90 2 1 3
3 Neha 85 1 3 2
4 Simran 80 3 2 1
### seats.txt
1 CSE 2
2 ECE 1
3 ME 1
## Sample Output
Aman -> CSE
Rahul -> ECE
Neha -> CSE
Simran -> ME

---
Future Improvements
Add file input support
Web interface (Flask/Frontend)
Database integration
Real-time updates
