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
| 01 | [Arrays Hashing](./Arrays-Hashing/) | 6 |
| 02 | [Two Pointers](./Two-Pointers/) | 0 |
| 03 | [Sliding Window](./Sliding-Window/) | 1 |
| 04 | [Stack](./Stack/) | 0 |
| 05 | [Binary Search](./Binary-Search/) | 0 |
| 06 | [Linked List](./Linked-List/) | 1 |
| 07 | [Trees](./Trees/) | 0 |
| 08 | [Tries](./Tries/) | 0 |
| 09 | [Heap](./Heap/) | 0 |
| 10 | [Backtracking](./Backtracking/) | 0 |
| 11 | [Graphs](./Graphs/) | 1 |
| 12 | [Dynamic Programming](./Dynamic-Programming/) | 0 |
| 13 | [Greedy](./Greedy/) | 0 |
| 14 | [Bit Manipulation](./Bit-Manipulation/) | 0 |
| 15 | [Math Geometry](./Math-Geometry/) | 3 |
| 16 | [Other](./Other/) | 7 |
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
| 0070 | [Climbing Stairs](https://leetcode.com/problems/climbing-stairs/) | 🟢 Easy | Math, Dynamic Programming | [✔️](./Math-Geometry/0070-climbing-stairs/) |
| 0721 | [Accounts Merge](https://leetcode.com/problems/accounts-merge/) | 🟡 Medium | Array, Hash Table | [✔️](./Arrays-Hashing/0721-accounts-merge/) |
| 0827 | [Making A Large Island](https://leetcode.com/problems/making-a-large-island/) | 🔴 Hard | Array, Depth First Search | [✔️](./Arrays-Hashing/0827-making-a-large-island/) |
| 0947 | [Most Stones Removed with Same Row or Column](https://leetcode.com/problems/most-stones-removed-with-same-row-or-column/) | 🟡 Medium | Hash Table, Depth First Search | [✔️](./Arrays-Hashing/0947-most-stones-removed-with-same-row-or-column/) |
| 1319 | [Number of Operations to Make Network Connected](https://leetcode.com/problems/number-of-operations-to-make-network-connected/) | 🟡 Medium | Depth First Search, Breadth First Search | [✔️](./Graphs/1319-number-of-operations-to-make-network-connected/) |
| 1927 | [Sum Game](https://leetcode.com/problems/sum-game/) | 🟡 Medium | Math, String | [✔️](./Math-Geometry/1927-sum-game/) |
| 2058 | [Find the Minimum and Maximum Number of Nodes Between Critical Points](https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/) | 🟡 Medium | Linked List | [✔️](./Linked-List/2058-find-the-minimum-and-maximum-number-of-nodes-between-critical-points/) |
| 2091 | [Removing Minimum and Maximum From Array](https://leetcode.com/problems/removing-minimum-and-maximum-from-array/) | 🟡 Medium | Array, Greedy | [✔️](./Arrays-Hashing/2091-removing-minimum-and-maximum-from-array/) |
| 2904 | [Shortest and Lexicographically Smallest Beautiful String](https://leetcode.com/problems/shortest-and-lexicographically-smallest-beautiful-string/) | 🟡 Medium | String, Sliding Window | [✔️](./Sliding-Window/2904-shortest-and-lexicographically-smallest-beautiful-string/) |
| 3622 | [Check Divisibility by Digit Sum and Product](https://leetcode.com/problems/check-divisibility-by-digit-sum-and-product/) | 🟢 Easy | Math | [✔️](./Math-Geometry/3622-check-divisibility-by-digit-sum-and-product/) |
| 3718 | [Smallest Missing Multiple of K](https://leetcode.com/problems/smallest-missing-multiple-of-k/) | 🟢 Easy | Array, Hash Table | [✔️](./Arrays-Hashing/3718-smallest-missing-multiple-of-k/) |
| 3875 | [Construct Uniform Parity Array I](https://leetcode.com/problems/construct-uniform-parity-array-i/) | 🟢 Easy | Array, Math | [✔️](./Arrays-Hashing/3875-construct-uniform-parity-array-i/) |
| 4030 | [Check ASCII Palindromic](https://leetcode.com/problems/check-ascii-palindromic/) | 🟢 Easy | — | [✔️](./Other/4030-check-ascii-palindromic/) |
| 4031 | [Find All Numbers Disappeared in an Array II](https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array-ii/) | 🟡 Medium | — | [✔️](./Other/4031-find-all-numbers-disappeared-in-an-array-ii/) |
| 4032 | [Longest Subarray With at Most K Distinct Prime Factors](https://leetcode.com/problems/longest-subarray-with-at-most-k-distinct-prime-factors/) | 🟡 Medium | — | [✔️](./Other/4032-longest-subarray-with-at-most-k-distinct-prime-factors/) |
| 4034 | [Minimum Bishop Moves to Reach Target](https://leetcode.com/problems/minimum-bishop-moves-to-reach-target/) | 🟡 Medium | — | [✔️](./Other/4034-minimum-bishop-moves-to-reach-target/) |
| 4036 | [Lexicographically Largest String After Pair Transformations](https://leetcode.com/problems/lexicographically-largest-string-after-pair-transformations/) | 🟡 Medium | — | [✔️](./Other/4036-lexicographically-largest-string-after-pair-transformations/) |
| 4038 | [Count Integers Appearing in a Single Block](https://leetcode.com/problems/count-integers-appearing-in-a-single-block/) | 🟢 Easy | — | [✔️](./Other/4038-count-integers-appearing-in-a-single-block/) |
| 4039 | [Sum of Decoded Numbers](https://leetcode.com/problems/sum-of-decoded-numbers/) | 🟡 Medium | — | [✔️](./Other/4039-sum-of-decoded-numbers/) |
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
