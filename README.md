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
| 04 | [Stack](./Stack/) | 2 |
| 05 | [Binary Search](./Binary-Search/) | 0 |
| 06 | [Linked List](./Linked-List/) | 2 |
| 07 | [Trees](./Trees/) | 0 |
| 08 | [Tries](./Tries/) | 0 |
| 09 | [Heap](./Heap/) | 0 |
| 10 | [Backtracking](./Backtracking/) | 0 |
| 11 | [Graphs](./Graphs/) | 0 |
| 12 | [Dynamic Programming](./Dynamic-Programming/) | 0 |
| 13 | [Greedy](./Greedy/) | 0 |
| 14 | [Bit Manipulation](./Bit-Manipulation/) | 0 |
| 15 | [Math Geometry](./Math-Geometry/) | 0 |
| 16 | [Other](./Other/) | 3 |
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
| 0023 | [Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/) | 🔴 Hard | Linked List, Divide And Conquer | [✔️](./Linked-List/0023-merge-k-sorted-lists/) |
| 0114 | [Flatten Binary Tree to Linked List](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/) | 🟡 Medium | Linked List, Stack | [✔️](./Linked-List/0114-flatten-binary-tree-to-linked-list/) |
| 0155 | [Min Stack](https://leetcode.com/problems/min-stack/) | 🟡 Medium | Stack, Design | [✔️](./Stack/0155-min-stack/) |
| 0169 | [Majority Element](https://leetcode.com/problems/majority-element/) | 🟢 Easy | Array, Hash Table | [✔️](./Arrays-Hashing/0169-majority-element/) |
| 0173 | [Binary Search Tree Iterator](https://leetcode.com/problems/binary-search-tree-iterator/) | 🟡 Medium | Stack, Tree | [✔️](./Stack/0173-binary-search-tree-iterator/) |
| 0215 | [Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/) | 🟡 Medium | Array, Divide And Conquer | [✔️](./Arrays-Hashing/0215-kth-largest-element-in-an-array/) |
| 0238 | [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) | 🟡 Medium | Array, Prefix Sum | [✔️](./Arrays-Hashing/0238-product-of-array-except-self/) |
| 0347 | [Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) | 🟡 Medium | Array, Hash Table | [✔️](./Arrays-Hashing/0347-top-k-frequent-elements/) |
| 0621 | [Task Scheduler](https://leetcode.com/problems/task-scheduler/) | 🟡 Medium | Array, Hash Table | [✔️](./Arrays-Hashing/0621-task-scheduler/) |
| 0739 | [Daily Temperatures](https://leetcode.com/problems/daily-temperatures/) | 🟡 Medium | Array, Stack | [✔️](./Arrays-Hashing/0739-daily-temperatures/) |
| 0918 | [Maximum Sum Circular Subarray](https://leetcode.com/problems/maximum-sum-circular-subarray/) | 🟡 Medium | Array, Divide And Conquer | [✔️](./Arrays-Hashing/0918-maximum-sum-circular-subarray/) |
| 1008 | [Construct Binary Search Tree from Preorder Traversal](https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/) | 🟡 Medium | Array, Stack | [✔️](./Arrays-Hashing/1008-construct-binary-search-tree-from-preorder-traversal/) |
| 1358 | [Number of Substrings Containing All Three Characters](https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/) | 🟡 Medium | Hash Table, String | [✔️](./Arrays-Hashing/1358-number-of-substrings-containing-all-three-characters/) |
| 1846 | [Maximum Element After Decreasing and Rearranging](https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/) | 🟡 Medium | Array, Greedy | [✔️](./Arrays-Hashing/1846-maximum-element-after-decreasing-and-rearranging/) |
| 1967 | [Number of Strings That Appear as Substrings in Word](https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/) | 🟢 Easy | Array, String | [✔️](./Arrays-Hashing/1967-number-of-strings-that-appear-as-substrings-in-word/) |
| 3737 | [Count Subarrays With Majority Element I](https://leetcode.com/problems/count-subarrays-with-majority-element-i/) | 🟡 Medium | Array, Hash Table | [✔️](./Arrays-Hashing/3737-count-subarrays-with-majority-element-i/) |
| 3978 | [Unique Middle Element](https://leetcode.com/problems/unique-middle-element/) | 🟢 Easy | — | [✔️](./Other/3978-unique-middle-element/) |
| 3979 | [Maximum Valid Pair Sum](https://leetcode.com/problems/maximum-valid-pair-sum/) | 🟡 Medium | — | [✔️](./Other/3979-maximum-valid-pair-sum/) |
| 3980 | [Minimum Operations to Transform Binary String](https://leetcode.com/problems/minimum-operations-to-transform-binary-string/) | 🟡 Medium | — | [✔️](./Other/3980-minimum-operations-to-transform-binary-string/) |
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
