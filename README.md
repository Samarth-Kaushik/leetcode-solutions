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
| 01 | [Arrays Hashing](./Arrays-Hashing/) | 10 |
| 02 | [Two Pointers](./Two-Pointers/) | 0 |
| 03 | [Sliding Window](./Sliding-Window/) | 0 |
| 04 | [Stack](./Stack/) | 0 |
| 05 | [Binary Search](./Binary-Search/) | 0 |
| 06 | [Linked List](./Linked-List/) | 0 |
| 07 | [Trees](./Trees/) | 1 |
| 08 | [Tries](./Tries/) | 0 |
| 09 | [Heap](./Heap/) | 0 |
| 10 | [Backtracking](./Backtracking/) | 0 |
| 11 | [Graphs](./Graphs/) | 4 |
| 12 | [Dynamic Programming](./Dynamic-Programming/) | 1 |
| 13 | [Greedy](./Greedy/) | 0 |
| 14 | [Bit Manipulation](./Bit-Manipulation/) | 0 |
| 15 | [Math Geometry](./Math-Geometry/) | 2 |
| 16 | [Other](./Other/) | 2 |
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
| 0199 | [Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/) | 🟡 Medium | Tree, Depth First Search | [✔️](./Trees/0199-binary-tree-right-side-view/) |
| 0207 | [Course Schedule](https://leetcode.com/problems/course-schedule/) | 🟡 Medium | Depth First Search, Breadth First Search | [✔️](./Graphs/0207-course-schedule/) |
| 0210 | [Course Schedule II](https://leetcode.com/problems/course-schedule-ii/) | 🟡 Medium | Depth First Search, Breadth First Search | [✔️](./Graphs/0210-course-schedule-ii/) |
| 0743 | [Network Delay Time](https://leetcode.com/problems/network-delay-time/) | 🟡 Medium | Depth First Search, Breadth First Search | [✔️](./Graphs/0743-network-delay-time/) |
| 0787 | [Cheapest Flights Within K Stops](https://leetcode.com/problems/cheapest-flights-within-k-stops/) | 🟡 Medium | Dynamic Programming, Depth First Search | [✔️](./Dynamic-Programming/0787-cheapest-flights-within-k-stops/) |
| 0802 | [Find Eventual Safe States](https://leetcode.com/problems/find-eventual-safe-states/) | 🟡 Medium | Depth First Search, Breadth First Search | [✔️](./Graphs/0802-find-eventual-safe-states/) |
| 0877 | [Stone Game](https://leetcode.com/problems/stone-game/) | 🟡 Medium | Array, Math | [✔️](./Arrays-Hashing/0877-stone-game/) |
| 1020 | [Number of Enclaves](https://leetcode.com/problems/number-of-enclaves/) | 🟡 Medium | Array, Depth First Search | [✔️](./Arrays-Hashing/1020-number-of-enclaves/) |
| 1091 | [Shortest Path in Binary Matrix](https://leetcode.com/problems/shortest-path-in-binary-matrix/) | 🟡 Medium | Array, Breadth First Search | [✔️](./Arrays-Hashing/1091-shortest-path-in-binary-matrix/) |
| 1631 | [Path With Minimum Effort](https://leetcode.com/problems/path-with-minimum-effort/) | 🟡 Medium | Array, Binary Search | [✔️](./Arrays-Hashing/1631-path-with-minimum-effort/) |
| 2029 | [Stone Game IX](https://leetcode.com/problems/stone-game-ix/) | 🟡 Medium | Array, Math | [✔️](./Arrays-Hashing/2029-stone-game-ix/) |
| 2958 | [Length of Longest Subarray With at Most K Frequency](https://leetcode.com/problems/length-of-longest-subarray-with-at-most-k-frequency/) | 🟡 Medium | Array, Hash Table | [✔️](./Arrays-Hashing/2958-length-of-longest-subarray-with-at-most-k-frequency/) |
| 2996 | [Smallest Missing Integer Greater Than Sequential Prefix Sum](https://leetcode.com/problems/smallest-missing-integer-greater-than-sequential-prefix-sum/) | 🟢 Easy | Array, Hash Table | [✔️](./Arrays-Hashing/2996-smallest-missing-integer-greater-than-sequential-prefix-sum/) |
| 3014 | [Minimum Number of Pushes to Type Word I](https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-i/) | 🟢 Easy | Math, String | [✔️](./Math-Geometry/3014-minimum-number-of-pushes-to-type-word-i/) |
| 3345 | [Smallest Divisible Digit Product I](https://leetcode.com/problems/smallest-divisible-digit-product-i/) | 🟢 Easy | Math, Enumeration | [✔️](./Math-Geometry/3345-smallest-divisible-digit-product-i/) |
| 3702 | [Longest Subsequence With Non-Zero Bitwise XOR](https://leetcode.com/problems/longest-subsequence-with-non-zero-bitwise-xor/) | 🟡 Medium | Array, Bit Manipulation | [✔️](./Arrays-Hashing/3702-longest-subsequence-with-non-zero-bitwise-xor/) |
| 3731 | [Find Missing Elements](https://leetcode.com/problems/find-missing-elements/) | 🟢 Easy | Array, Hash Table | [✔️](./Arrays-Hashing/3731-find-missing-elements/) |
| 4006 | [Count Valid Prefixes](https://leetcode.com/problems/count-valid-prefixes/) | 🟢 Easy | — | [✔️](./Other/4006-count-valid-prefixes/) |
| 4007 | [Widest Possible Fence](https://leetcode.com/problems/widest-possible-fence/) | 🟡 Medium | — | [✔️](./Other/4007-widest-possible-fence/) |
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
