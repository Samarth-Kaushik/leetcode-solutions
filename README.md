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
| 01 | [Arrays Hashing](./Arrays-Hashing/) | 8 |
| 02 | [Two Pointers](./Two-Pointers/) | 0 |
| 03 | [Sliding Window](./Sliding-Window/) | 0 |
| 04 | [Stack](./Stack/) | 0 |
| 05 | [Binary Search](./Binary-Search/) | 0 |
| 06 | [Linked List](./Linked-List/) | 2 |
| 07 | [Trees](./Trees/) | 4 |
| 08 | [Tries](./Tries/) | 0 |
| 09 | [Heap](./Heap/) | 0 |
| 10 | [Backtracking](./Backtracking/) | 0 |
| 11 | [Graphs](./Graphs/) | 0 |
| 12 | [Dynamic Programming](./Dynamic-Programming/) | 0 |
| 13 | [Greedy](./Greedy/) | 0 |
| 14 | [Bit Manipulation](./Bit-Manipulation/) | 0 |
| 15 | [Math Geometry](./Math-Geometry/) | 2 |
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
| 0099 | [Recover Binary Search Tree](https://leetcode.com/problems/recover-binary-search-tree/) | 🟡 Medium | Tree, Depth First Search | [✔️](./Trees/0099-recover-binary-search-tree/) |
| 0112 | [Path Sum](https://leetcode.com/problems/path-sum/) | 🟢 Easy | Tree, Depth First Search | [✔️](./Trees/0112-path-sum/) |
| 0116 | [Populating Next Right Pointers in Each Node](https://leetcode.com/problems/populating-next-right-pointers-in-each-node/) | 🟡 Medium | Linked List, Tree | [✔️](./Linked-List/0116-populating-next-right-pointers-in-each-node/) |
| 0117 | [Populating Next Right Pointers in Each Node II](https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/) | 🟡 Medium | Linked List, Tree | [✔️](./Linked-List/0117-populating-next-right-pointers-in-each-node-ii/) |
| 0127 | [Word Ladder](https://leetcode.com/problems/word-ladder/) | 🔴 Hard | Hash Table, String | [✔️](./Arrays-Hashing/0127-word-ladder/) |
| 0129 | [Sum Root to Leaf Numbers](https://leetcode.com/problems/sum-root-to-leaf-numbers/) | 🟡 Medium | Tree, Depth First Search | [✔️](./Trees/0129-sum-root-to-leaf-numbers/) |
| 0226 | [Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/) | 🟢 Easy | Tree, Depth First Search | [✔️](./Trees/0226-invert-binary-tree/) |
| 0279 | [Perfect Squares](https://leetcode.com/problems/perfect-squares/) | 🟡 Medium | Math, Dynamic Programming | [✔️](./Math-Geometry/0279-perfect-squares/) |
| 0506 | [Relative Ranks](https://leetcode.com/problems/relative-ranks/) | 🟢 Easy | Array, Sorting | [✔️](./Arrays-Hashing/0506-relative-ranks/) |
| 1267 | [Count Servers that Communicate](https://leetcode.com/problems/count-servers-that-communicate/) | 🟡 Medium | Array, Depth First Search | [✔️](./Arrays-Hashing/1267-count-servers-that-communicate/) |
| 1524 | [Number of Sub-arrays With Odd Sum](https://leetcode.com/problems/number-of-sub-arrays-with-odd-sum/) | 🟡 Medium | Array, Math | [✔️](./Arrays-Hashing/1524-number-of-sub-arrays-with-odd-sum/) |
| 2243 | [Calculate Digit Sum of a String](https://leetcode.com/problems/calculate-digit-sum-of-a-string/) | 🟢 Easy | String, Simulation | [✔️](./Other/2243-calculate-digit-sum-of-a-string/) |
| 2567 | [Minimum Score by Changing Two Elements](https://leetcode.com/problems/minimum-score-by-changing-two-elements/) | 🟡 Medium | Array, Greedy | [✔️](./Arrays-Hashing/2567-minimum-score-by-changing-two-elements/) |
| 2914 | [Minimum Number of Changes to Make Binary String Beautiful](https://leetcode.com/problems/minimum-number-of-changes-to-make-binary-string-beautiful/) | 🟡 Medium | String | [✔️](./Other/2914-minimum-number-of-changes-to-make-binary-string-beautiful/) |
| 3105 | [Longest Strictly Increasing or Strictly Decreasing Subarray](https://leetcode.com/problems/longest-strictly-increasing-or-strictly-decreasing-subarray/) | 🟢 Easy | Array | [✔️](./Arrays-Hashing/3105-longest-strictly-increasing-or-strictly-decreasing-subarray/) |
| 3364 | [Minimum Positive Sum Subarray ](https://leetcode.com/problems/minimum-positive-sum-subarray/) | 🟢 Easy | Array, Sliding Window | [✔️](./Arrays-Hashing/3364-minimum-positive-sum-subarray/) |
| 3693 | [Climbing Stairs II](https://leetcode.com/problems/climbing-stairs-ii/) | 🟡 Medium | Array, Dynamic Programming | [✔️](./Arrays-Hashing/3693-climbing-stairs-ii/) |
| 3789 | [Minimum Cost to Acquire Required Items](https://leetcode.com/problems/minimum-cost-to-acquire-required-items/) | 🟡 Medium | Math, Greedy | [✔️](./Math-Geometry/3789-minimum-cost-to-acquire-required-items/) |
| 4111 | [Count Consistent Subarrays I](https://leetcode.com/problems/count-consistent-subarrays-i/) | 🟢 Easy | — | [✔️](./Other/4111-count-consistent-subarrays-i/) |
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
