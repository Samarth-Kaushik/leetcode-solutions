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
| 01 | [Arrays Hashing](./Arrays-Hashing/) | 7 |
| 02 | [Two Pointers](./Two-Pointers/) | 0 |
| 03 | [Sliding Window](./Sliding-Window/) | 0 |
| 04 | [Stack](./Stack/) | 1 |
| 05 | [Binary Search](./Binary-Search/) | 0 |
| 06 | [Linked List](./Linked-List/) | 0 |
| 07 | [Trees](./Trees/) | 1 |
| 08 | [Tries](./Tries/) | 0 |
| 09 | [Heap](./Heap/) | 0 |
| 10 | [Backtracking](./Backtracking/) | 0 |
| 11 | [Graphs](./Graphs/) | 0 |
| 12 | [Dynamic Programming](./Dynamic-Programming/) | 1 |
| 13 | [Greedy](./Greedy/) | 0 |
| 14 | [Bit Manipulation](./Bit-Manipulation/) | 0 |
| 15 | [Math Geometry](./Math-Geometry/) | 1 |
| 16 | [Other](./Other/) | 8 |
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
| 0022 | [Generate Parentheses](https://leetcode.com/problems/generate-parentheses/) | 🟡 Medium | String, Dynamic Programming | [✔️](./Dynamic-Programming/0022-generate-parentheses/) |
| 0208 | [Implement Trie (Prefix Tree)](https://leetcode.com/problems/implement-trie-prefix-tree/) | 🟡 Medium | Hash Table, String | [✔️](./Arrays-Hashing/0208-implement-trie-prefix-tree/) |
| 0355 | [Design Twitter](https://leetcode.com/problems/design-twitter/) | 🟡 Medium | Hash Table, Linked List | [✔️](./Arrays-Hashing/0355-design-twitter/) |
| 0703 | [Kth Largest Element in a Stream](https://leetcode.com/problems/kth-largest-element-in-a-stream/) | 🟢 Easy | Tree, Design | [✔️](./Trees/0703-kth-largest-element-in-a-stream/) |
| 0973 | [K Closest Points to Origin](https://leetcode.com/problems/k-closest-points-to-origin/) | 🟡 Medium | Array, Math | [✔️](./Arrays-Hashing/0973-k-closest-points-to-origin/) |
| 1046 | [Last Stone Weight](https://leetcode.com/problems/last-stone-weight/) | 🟢 Easy | Array, Heap Priority Queue | [✔️](./Arrays-Hashing/1046-last-stone-weight/) |
| 1081 | [Smallest Subsequence of Distinct Characters](https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/) | 🟡 Medium | String, Stack | [✔️](./Stack/1081-smallest-subsequence-of-distinct-characters/) |
| 1291 | [Sequential Digits](https://leetcode.com/problems/sequential-digits/) | 🟡 Medium | Enumeration | [✔️](./Other/1291-sequential-digits/) |
| 1331 | [Rank Transform of an Array](https://leetcode.com/problems/rank-transform-of-an-array/) | 🟢 Easy | Array, Hash Table | [✔️](./Arrays-Hashing/1331-rank-transform-of-an-array/) |
| 1979 | [Find Greatest Common Divisor of Array](https://leetcode.com/problems/find-greatest-common-divisor-of-array/) | 🟢 Easy | Array, Math | [✔️](./Arrays-Hashing/1979-find-greatest-common-divisor-of-array/) |
| 3658 | [GCD of Odd and Even Sums](https://leetcode.com/problems/gcd-of-odd-and-even-sums/) | 🟢 Easy | Math, Number Theory | [✔️](./Math-Geometry/3658-gcd-of-odd-and-even-sums/) |
| 3867 | [Sum of GCD of Formed Pairs](https://leetcode.com/problems/sum-of-gcd-of-formed-pairs/) | 🟡 Medium | Array, Math | [✔️](./Arrays-Hashing/3867-sum-of-gcd-of-formed-pairs/) |
| 3979 | [Maximum Valid Pair Sum](https://leetcode.com/problems/maximum-valid-pair-sum/) | 🟡 Medium | — | [✔️](./Other/3979-maximum-valid-pair-sum/) |
| 3980 | [Minimum Operations to Transform Binary String](https://leetcode.com/problems/minimum-operations-to-transform-binary-string/) | 🟡 Medium | — | [✔️](./Other/3980-minimum-operations-to-transform-binary-string/) |
| 3992 | [Rearrange String to Avoid Character Pair](https://leetcode.com/problems/rearrange-string-to-avoid-character-pair/) | 🟢 Easy | — | [✔️](./Other/3992-rearrange-string-to-avoid-character-pair/) |
| 3993 | [Maximum Value of an Alternating Sequence](https://leetcode.com/problems/maximum-value-of-an-alternating-sequence/) | 🟡 Medium | — | [✔️](./Other/3993-maximum-value-of-an-alternating-sequence/) |
| 3994 | [Minimum Adjacent Swaps to Partition Array](https://leetcode.com/problems/minimum-adjacent-swaps-to-partition-array/) | 🟡 Medium | — | [✔️](./Other/3994-minimum-adjacent-swaps-to-partition-array/) |
| 3996 | [Even Number of Knight Moves](https://leetcode.com/problems/even-number-of-knight-moves/) | 🟢 Easy | — | [✔️](./Other/3996-even-number-of-knight-moves/) |
| 3997 | [Count Dominant Nodes in a Binary Tree](https://leetcode.com/problems/count-dominant-nodes-in-a-binary-tree/) | 🟡 Medium | — | [✔️](./Other/3997-count-dominant-nodes-in-a-binary-tree/) |
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
