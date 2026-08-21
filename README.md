<div align="center">

# 🧩 LeetCode Solutions

![LeetCode](https://img.shields.io/badge/LeetCode-Solutions-FFA116?style=for-the-badge&logo=leetcode&logoColor=white)
![Language](https://img.shields.io/badge/Language-Python-3776AB?style=for-the-badge&logo=python&logoColor=white)
![Auto-Sync](https://img.shields.io/badge/Stats-Auto--Synced-brightgreen?style=for-the-badge&logo=githubactions&logoColor=white)
![License](https://img.shields.io/badge/License-MIT-blue?style=for-the-badge)

*A structured collection of LeetCode problem solutions with explanations, complexity analysis, and multiple approaches.*

<!-- Replace YOUR_USERNAME with your LeetCode username -->
![LeetCode Stats](https://leetcard.jacoblin.cool/kaushik_samarth?theme=dark&font=Nunito&ext=contest)

</div>

---

## 📌 Table of Contents

- [About](#-about)
- [Progress Tracker](#-progress-tracker)
- [Topics Covered](#-topics-covered)
- [Repository Structure](#-repository-structure)
- [How to Use](#-how-to-use)
- [Problem Index](#-problem-index)
- [Contributing](#-contributing)

---

## 🔍 About

This repository contains my personal solutions to LeetCode problems, organized by topic and difficulty. Each solution includes:

- ✅ Clean, well-commented code
- 📊 Time & Space complexity analysis
- 💡 Approach explanation
- 🔁 Alternative solutions where applicable

> **Goal:** Solve 500+ problems covering all core DSA topics.
>
> 🤖 *Stats and problem index are auto-synced daily via GitHub Actions.*

---

## 📈 Progress Tracker

| Difficulty | Solved | Total |
| :--- | :---: | :---: |
| 🟢 Easy | 50 | 800+ |
| 🟡 Medium | 32 | 1600+ |
| 🔴 Hard | 1 | 700+ |
| **Total** | **83** | **3100+** |
---

## 🗂️ Topics Covered

<!-- TOPICS_START -->
| # | Topic | Problems Solved |
|---|-------|-----------------|
| 01 | [Arrays Hashing](./Arrays-Hashing/) | 12 |
| 02 | [Two Pointers](./Two-Pointers/) | 0 |
| 03 | [Sliding Window](./Sliding-Window/) | 0 |
| 04 | [Stack](./Stack/) | 0 |
| 05 | [Binary Search](./Binary-Search/) | 0 |
| 06 | [Linked List](./Linked-List/) | 0 |
| 07 | [Trees](./Trees/) | 0 |
| 08 | [Tries](./Tries/) | 0 |
| 09 | [Heap](./Heap/) | 0 |
| 10 | [Backtracking](./Backtracking/) | 0 |
| 11 | [Graphs](./Graphs/) | 4 |
| 12 | [Dynamic Programming](./Dynamic-Programming/) | 3 |
| 13 | [Greedy](./Greedy/) | 0 |
| 14 | [Bit Manipulation](./Bit-Manipulation/) | 0 |
| 15 | [Math Geometry](./Math-Geometry/) | 1 |
| 16 | [Other](./Other/) | 0 |
<!-- TOPICS_END -->

---

## 📁 Repository Structure

```
leetcode-solutions/
│
├── .github/
│   └── workflows/
│       └── update-leetcode.yml   ← GitHub Actions (auto-sync)
│
├── scripts/
│   └── update_stats.py           ← Sync script
│
├── Arrays-Hashing/
│   ├── 0001-two-sum/
│   │   ├── solution.py
│   │   └── README.md
│   └── 0049-group-anagrams/
│       ├── solution.py
│       └── README.md
│
├── Two-Pointers/
│   └── ...
│
├── Dynamic-Programming/
│   └── ...
│
└── README.md
```

Each problem folder follows this convention:

```
0001-two-sum/
├── solution.py       # Primary solution
├── solution2.py      # Alternate approach (if applicable)
└── README.md         # Problem statement + explanation
```

---

## 🚀 How to Use

**Clone the repository:**
```bash
git clone https://github.com/YOUR_GITHUB_USERNAME/leetcode-solutions.git
cd leetcode-solutions
```

**Navigate to a topic:**
```bash
cd Dynamic-Programming/
ls
```

**Run a solution:**
```bash
python 0322-coin-change/solution.py
```

**Run the sync script locally** (needs `LEETCODE_USERNAME` env var):
```bash
pip install requests
LEETCODE_USERNAME=your_username python scripts/update_stats.py
```

---

## 📋 Problem Index

> Auto-updated daily via GitHub Actions. Showing last 50 solved problems.

<!-- INDEX_START -->
| # | Problem | Difficulty | Topics | Solution |
|---|---------|------------|--------|----------|
| 0160 | [Intersection of Two Linked Lists](https://leetcode.com/problems/intersection-of-two-linked-lists/) | 🟢 Easy | Hash Table, Linked List | [✔️](./Arrays-Hashing/0160-intersection-of-two-linked-lists/) |
| 0205 | [Isomorphic Strings](https://leetcode.com/problems/isomorphic-strings/) | 🟢 Easy | Hash Table, String | [✔️](./Arrays-Hashing/0205-isomorphic-strings/) |
| 0207 | [Course Schedule](https://leetcode.com/problems/course-schedule/) | 🟡 Medium | Depth First Search, Breadth First Search | [✔️](./Graphs/0207-course-schedule/) |
| 0210 | [Course Schedule II](https://leetcode.com/problems/course-schedule-ii/) | 🟡 Medium | Depth First Search, Breadth First Search | [✔️](./Graphs/0210-course-schedule-ii/) |
| 0743 | [Network Delay Time](https://leetcode.com/problems/network-delay-time/) | 🟡 Medium | Depth First Search, Breadth First Search | [✔️](./Graphs/0743-network-delay-time/) |
| 0787 | [Cheapest Flights Within K Stops](https://leetcode.com/problems/cheapest-flights-within-k-stops/) | 🟡 Medium | Dynamic Programming, Depth First Search | [✔️](./Dynamic-Programming/0787-cheapest-flights-within-k-stops/) |
| 0802 | [Find Eventual Safe States](https://leetcode.com/problems/find-eventual-safe-states/) | 🟡 Medium | Depth First Search, Breadth First Search | [✔️](./Graphs/0802-find-eventual-safe-states/) |
| 1091 | [Shortest Path in Binary Matrix](https://leetcode.com/problems/shortest-path-in-binary-matrix/) | 🟡 Medium | Array, Breadth First Search | [✔️](./Arrays-Hashing/1091-shortest-path-in-binary-matrix/) |
| 1334 | [Find the City With the Smallest Number of Neighbors at a Threshold Distance](https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/) | 🟡 Medium | Dynamic Programming, Graph | [✔️](./Dynamic-Programming/1334-find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/) |
| 1386 | [Cinema Seat Allocation](https://leetcode.com/problems/cinema-seat-allocation/) | 🟡 Medium | Array, Hash Table | [✔️](./Arrays-Hashing/1386-cinema-seat-allocation/) |
| 1631 | [Path With Minimum Effort](https://leetcode.com/problems/path-with-minimum-effort/) | 🟡 Medium | Array, Binary Search | [✔️](./Arrays-Hashing/1631-path-with-minimum-effort/) |
| 1976 | [Number of Ways to Arrive at Destination](https://leetcode.com/problems/number-of-ways-to-arrive-at-destination/) | 🟡 Medium | Dynamic Programming, Graph | [✔️](./Dynamic-Programming/1976-number-of-ways-to-arrive-at-destination/) |
| 2029 | [Stone Game IX](https://leetcode.com/problems/stone-game-ix/) | 🟡 Medium | Array, Math | [✔️](./Arrays-Hashing/2029-stone-game-ix/) |
| 2958 | [Length of Longest Subarray With at Most K Frequency](https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/) | 🟡 Medium | Array, Hash Table | [✔️](./Arrays-Hashing/2958-length-of-longest-subarray-with-at-most-k-frequency/) |
| 2996 | [Smallest Missing Integer Greater Than Sequential Prefix Sum](https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/) | 🟢 Easy | Array, Hash Table | [✔️](./Arrays-Hashing/2996-smallest-missing-integer-greater-than-sequential-prefix-sum/) |
| 3069 | [Distribute Elements Into Two Arrays I](https://leetcode.com/problems/distribute-elements-into-two-arrays-i/) | 🟢 Easy | Array, Simulation | [✔️](./Arrays-Hashing/3069-distribute-elements-into-two-arrays-i/) |
| 3345 | [Smallest Divisible Digit Product I](https://leetcode.com/problems/smallest-divisible-digit-product-i/) | 🟢 Easy | Math, Enumeration | [✔️](./Math-Geometry/3345-smallest-divisible-digit-product-i/) |
| 3471 | [Find the Largest Almost Missing Integer](https://leetcode.com/problems/find-the-largest-almost-missing-integer/) | 🟢 Easy | Array, Hash Table | [✔️](./Arrays-Hashing/3471-find-the-largest-almost-missing-integer/) |
| 3702 | [Longest Subsequence With Non-Zero Bitwise XOR](https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/) | 🟡 Medium | Array, Bit Manipulation | [✔️](./Arrays-Hashing/3702-longest-subsequence-with-non-zero-bitwise-xor/) |
| 3731 | [Find Missing Elements](https://leetcode.com/problems/find-missing-elements/) | 🟢 Easy | Array, Hash Table | [✔️](./Arrays-Hashing/3731-find-missing-elements/) |
<!-- INDEX_END -->

---

## 🤖 Auto-Sync Setup

This repo uses GitHub Actions to automatically update stats and the problem index every day. Here's how it works:

```
Schedule (peridically as determined in the yml file)
        ↓
Fetch LeetCode GraphQL API
        ↓
Update README markers
        ↓
git commit & push
```

To set it up in your fork:
1. Go to **Settings → Secrets → Actions**
2. Add secret: `LEETCODE_USERNAME` = your LeetCode handle
3. The workflow in `.github/workflows/update-leetcode.yml` does the rest

---

## 🤝 Contributing

This is a personal learning repo, but suggestions are welcome!

1. Fork the repository
2. Create a new branch (`git checkout -b fix/problem-123`)
3. Commit your changes (`git commit -m 'Add alternate solution for #123'`)
4. Push and open a Pull Request

---


---

<div align="center">

⭐ **Star this repo if you find it helpful!** ⭐

*Stats auto-synced · Last updated by GitHub Actions*

</div>
