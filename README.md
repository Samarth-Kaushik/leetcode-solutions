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
| 06 | [Linked List](./Linked-List/) | 0 |
| 07 | [Trees](./Trees/) | 1 |
| 08 | [Tries](./Tries/) | 0 |
| 09 | [Heap](./Heap/) | 0 |
| 10 | [Backtracking](./Backtracking/) | 0 |
| 11 | [Graphs](./Graphs/) | 0 |
| 12 | [Dynamic Programming](./Dynamic-Programming/) | 2 |
| 13 | [Greedy](./Greedy/) | 0 |
| 14 | [Bit Manipulation](./Bit-Manipulation/) | 0 |
| 15 | [Math Geometry](./Math-Geometry/) | 0 |
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
| 0102 | [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/) | 🟡 Medium | Tree, Breadth First Search | [✔️](./Trees/0102-binary-tree-level-order-traversal/) |
| 0322 | [Coin Change](https://leetcode.com/problems/coin-change/) | 🟡 Medium | Array, Dynamic Programming | [✔️](./Arrays-Hashing/0322-coin-change/) |
| 0455 | [Assign Cookies](https://leetcode.com/problems/assign-cookies/) | 🟢 Easy | Array, Two Pointers | [✔️](./Arrays-Hashing/0455-assign-cookies/) |
| 0494 | [Target Sum](https://leetcode.com/problems/target-sum/) | 🟡 Medium | Array, Dynamic Programming | [✔️](./Arrays-Hashing/0494-target-sum/) |
| 0516 | [Longest Palindromic Subsequence](https://leetcode.com/problems/longest-palindromic-subsequence/) | 🟡 Medium | String, Dynamic Programming | [✔️](./Dynamic-Programming/0516-longest-palindromic-subsequence/) |
| 0518 | [Coin Change II](https://leetcode.com/problems/coin-change-ii/) | 🟡 Medium | Array, Dynamic Programming | [✔️](./Arrays-Hashing/0518-coin-change-ii/) |
| 1143 | [Longest Common Subsequence](https://leetcode.com/problems/longest-common-subsequence/) | 🟡 Medium | String, Dynamic Programming | [✔️](./Dynamic-Programming/1143-longest-common-subsequence/) |
| 1190 | [Reverse Substrings Between Each Pair of Parentheses](https://leetcode.com/problems/reverse-substrings-between-each-pair-of-parentheses/) | 🟡 Medium | String, Stack | [✔️](./Stack/1190-reverse-substrings-between-each-pair-of-parentheses/) |
| 1614 | [Maximum Nesting Depth of the Parentheses](https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/) | 🟢 Easy | String, Stack | [✔️](./Stack/1614-maximum-nesting-depth-of-the-parentheses/) |
| 1807 | [Evaluate the Bracket Pairs of a String](https://leetcode.com/problems/evaluate-the-bracket-pairs-of-a-string/) | 🟡 Medium | Array, Hash Table | [✔️](./Arrays-Hashing/1807-evaluate-the-bracket-pairs-of-a-string/) |
| 2267 | [ Check if There Is a Valid Parentheses String Path](https://leetcode.com/problems/check-if-there-is-a-valid-parentheses-string-path/) | 🔴 Hard | Array, Dynamic Programming | [✔️](./Arrays-Hashing/2267-check-if-there-is-a-valid-parentheses-string-path/) |
| 2410 | [Maximum Matching of Players With Trainers](https://leetcode.com/problems/maximum-matching-of-players-with-trainers/) | 🟡 Medium | Array, Two Pointers | [✔️](./Arrays-Hashing/2410-maximum-matching-of-players-with-trainers/) |
| 4061 | [Minimum Queen Moves to Reach Target](https://leetcode.com/problems/minimum-queen-moves-to-reach-target/) | 🟢 Easy | Array, Math | [✔️](./Arrays-Hashing/4061-minimum-queen-moves-to-reach-target/) |
| 4062 | [Transform Array Using Pair Operations](https://leetcode.com/problems/transform-array-using-pair-operations/) | 🟡 Medium | Array, Brainteaser | [✔️](./Arrays-Hashing/4062-transform-array-using-pair-operations/) |
| 4063 | [Longest Subarray Divisible by K with At Most One Negation I](https://leetcode.com/problems/longest-subarray-divisible-by-k-with-at-most-one-negation-i/) | 🟡 Medium | Array, Hash Table | [✔️](./Arrays-Hashing/4063-longest-subarray-divisible-by-k-with-at-most-one-negation-i/) |
| 4065 | [Rearrange Array by Removing Distinct Values](https://leetcode.com/problems/rearrange-array-by-removing-distinct-values/) | 🟢 Easy | Array, Hash Table | [✔️](./Arrays-Hashing/4065-rearrange-array-by-removing-distinct-values/) |
| 4066 | [Maximum Equal Adjacent Pairs After at Most One Replacement](https://leetcode.com/problems/maximum-equal-adjacent-pairs-after-at-most-one-replacement/) | 🟡 Medium | Array, Hash Table | [✔️](./Arrays-Hashing/4066-maximum-equal-adjacent-pairs-after-at-most-one-replacement/) |
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
