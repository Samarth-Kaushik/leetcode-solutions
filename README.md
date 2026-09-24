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
| 01 | [Arrays Hashing](./Arrays-Hashing/) | 14 |
| 02 | [Two Pointers](./Two-Pointers/) | 0 |
| 03 | [Sliding Window](./Sliding-Window/) | 0 |
| 04 | [Stack](./Stack/) | 0 |
| 05 | [Binary Search](./Binary-Search/) | 0 |
| 06 | [Linked List](./Linked-List/) | 1 |
| 07 | [Trees](./Trees/) | 1 |
| 08 | [Tries](./Tries/) | 0 |
| 09 | [Heap](./Heap/) | 0 |
| 10 | [Backtracking](./Backtracking/) | 0 |
| 11 | [Graphs](./Graphs/) | 0 |
| 12 | [Dynamic Programming](./Dynamic-Programming/) | 1 |
| 13 | [Greedy](./Greedy/) | 0 |
| 14 | [Bit Manipulation](./Bit-Manipulation/) | 0 |
| 15 | [Math Geometry](./Math-Geometry/) | 2 |
| 16 | [Other](./Other/) | 1 |
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
| 0062 | [Unique Paths](https://leetcode.com/problems/unique-paths/) | 🟡 Medium | Math, Dynamic Programming | [✔️](./Math-Geometry/0062-unique-paths/) |
| 0063 | [Unique Paths II](https://leetcode.com/problems/unique-paths-ii/) | 🟡 Medium | Array, Dynamic Programming | [✔️](./Arrays-Hashing/0063-unique-paths-ii/) |
| 0064 | [Minimum Path Sum](https://leetcode.com/problems/minimum-path-sum/) | 🟡 Medium | Array, Dynamic Programming | [✔️](./Arrays-Hashing/0064-minimum-path-sum/) |
| 0120 | [Triangle](https://leetcode.com/problems/triangle/) | 🟡 Medium | Array, Dynamic Programming | [✔️](./Arrays-Hashing/0120-triangle/) |
| 0198 | [House Robber](https://leetcode.com/problems/house-robber/) | 🟡 Medium | Array, Dynamic Programming | [✔️](./Arrays-Hashing/0198-house-robber/) |
| 0213 | [House Robber II](https://leetcode.com/problems/house-robber-ii/) | 🟡 Medium | Array, Dynamic Programming | [✔️](./Arrays-Hashing/0213-house-robber-ii/) |
| 0237 | [Delete Node in a Linked List](https://leetcode.com/problems/delete-node-in-a-linked-list/) | 🟡 Medium | Linked List | [✔️](./Linked-List/0237-delete-node-in-a-linked-list/) |
| 0242 | [Valid Anagram](https://leetcode.com/problems/valid-anagram/) | 🟢 Easy | Hash Table, String | [✔️](./Arrays-Hashing/0242-valid-anagram/) |
| 0416 | [Partition Equal Subset Sum](https://leetcode.com/problems/partition-equal-subset-sum/) | 🟡 Medium | Array, Dynamic Programming | [✔️](./Arrays-Hashing/0416-partition-equal-subset-sum/) |
| 0543 | [Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/) | 🟢 Easy | Tree, Depth First Search | [✔️](./Trees/0543-diameter-of-binary-tree/) |
| 0931 | [Minimum Falling Path Sum](https://leetcode.com/problems/minimum-falling-path-sum/) | 🟡 Medium | Array, Dynamic Programming | [✔️](./Arrays-Hashing/0931-minimum-falling-path-sum/) |
| 1401 | [Circle and Rectangle Overlapping](https://leetcode.com/problems/circle-and-rectangle-overlapping/) | 🟡 Medium | Math, Geometry | [✔️](./Math-Geometry/1401-circle-and-rectangle-overlapping/) |
| 1553 | [Minimum Number of Days to Eat N Oranges](https://leetcode.com/problems/minimum-number-of-days-to-eat-n-oranges/) | 🔴 Hard | Dynamic Programming, Memoization | [✔️](./Dynamic-Programming/1553-minimum-number-of-days-to-eat-n-oranges/) |
| 1658 | [Minimum Operations to Reduce X to Zero](https://leetcode.com/problems/minimum-operations-to-reduce-x-to-zero/) | 🟡 Medium | Array, Hash Table | [✔️](./Arrays-Hashing/1658-minimum-operations-to-reduce-x-to-zero/) |
| 1679 | [Max Number of K-Sum Pairs](https://leetcode.com/problems/max-number-of-k-sum-pairs/) | 🟡 Medium | Array, Hash Table | [✔️](./Arrays-Hashing/1679-max-number-of-k-sum-pairs/) |
| 2461 | [Maximum Sum of Distinct Subarrays With Length K](https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/) | 🟡 Medium | Array, Hash Table | [✔️](./Arrays-Hashing/2461-maximum-sum-of-distinct-subarrays-with-length-k/) |
| 3498 | [Reverse Degree of a String](https://leetcode.com/problems/reverse-degree-of-a-string/) | 🟢 Easy | String, Simulation | [✔️](./Other/3498-reverse-degree-of-a-string/) |
| 3550 | [Smallest Index With Digit Sum Equal to Index](https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/) | 🟢 Easy | Array, Math | [✔️](./Arrays-Hashing/3550-smallest-index-with-digit-sum-equal-to-index/) |
| 4048 | [Count Values With Equally Spaced Occurrences I](https://leetcode.com/problems/count-values-with-equally-spaced-occurrences-i/) | 🟢 Easy | Array, Hash Table | [✔️](./Arrays-Hashing/4048-count-values-with-equally-spaced-occurrences-i/) |
| 4049 | [Count Values With Equally Spaced Occurrences II](https://leetcode.com/problems/count-values-with-equally-spaced-occurrences-ii/) | 🟡 Medium | Array, Hash Table | [✔️](./Arrays-Hashing/4049-count-values-with-equally-spaced-occurrences-ii/) |
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
