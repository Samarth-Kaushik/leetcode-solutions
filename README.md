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
| 06 | [Linked List](./Linked-List/) | 3 |
| 07 | [Trees](./Trees/) | 0 |
| 08 | [Tries](./Tries/) | 0 |
| 09 | [Heap](./Heap/) | 0 |
| 10 | [Backtracking](./Backtracking/) | 0 |
| 11 | [Graphs](./Graphs/) | 0 |
| 12 | [Dynamic Programming](./Dynamic-Programming/) | 1 |
| 13 | [Greedy](./Greedy/) | 0 |
| 14 | [Bit Manipulation](./Bit-Manipulation/) | 0 |
| 15 | [Math Geometry](./Math-Geometry/) | 0 |
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
| 0011 | [Container With Most Water](https://leetcode.com/problems/container-with-most-water/) | 🟡 Medium | Array, Two Pointers | [✔️](./Arrays-Hashing/0011-container-with-most-water/) |
| 0020 | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | 🟢 Easy | String, Stack | [✔️](./Stack/0020-valid-parentheses/) |
| 0021 | [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) | 🟢 Easy | Linked List, Recursion | [✔️](./Linked-List/0021-merge-two-sorted-lists/) |
| 0084 | [Largest Rectangle in Histogram](https://leetcode.com/problems/largest-rectangle-in-histogram/) | 🔴 Hard | Array, Stack | [✔️](./Arrays-Hashing/0084-largest-rectangle-in-histogram/) |
| 0085 | [Maximal Rectangle](https://leetcode.com/problems/maximal-rectangle/) | 🔴 Hard | Array, Dynamic Programming | [✔️](./Arrays-Hashing/0085-maximal-rectangle/) |
| 0131 | [Palindrome Partitioning](https://leetcode.com/problems/palindrome-partitioning/) | 🟡 Medium | String, Dynamic Programming | [✔️](./Dynamic-Programming/0131-palindrome-partitioning/) |
| 0203 | [Remove Linked List Elements](https://leetcode.com/problems/remove-linked-list-elements/) | 🟢 Easy | Linked List, Recursion | [✔️](./Linked-List/0203-remove-linked-list-elements/) |
| 0402 | [Remove K Digits](https://leetcode.com/problems/remove-k-digits/) | 🟡 Medium | String, Stack | [✔️](./Stack/0402-remove-k-digits/) |
| 0496 | [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/) | 🟢 Easy | Array, Hash Table | [✔️](./Arrays-Hashing/0496-next-greater-element-i/) |
| 0907 | [Sum of Subarray Minimums](https://leetcode.com/problems/sum-of-subarray-minimums/) | 🟡 Medium | Array, Dynamic Programming | [✔️](./Arrays-Hashing/0907-sum-of-subarray-minimums/) |
| 1441 | [Build an Array With Stack Operations](https://leetcode.com/problems/build-an-array-with-stack-operations/) | 🟡 Medium | Array, Stack | [✔️](./Arrays-Hashing/1441-build-an-array-with-stack-operations/) |
| 2126 | [Destroying Asteroids](https://leetcode.com/problems/destroying-asteroids/) | 🟡 Medium | Array, Greedy | [✔️](./Arrays-Hashing/2126-destroying-asteroids/) |
| 2144 | [Minimum Cost of Buying Candies With Discount](https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount/) | 🟢 Easy | Array, Greedy | [✔️](./Arrays-Hashing/2144-minimum-cost-of-buying-candies-with-discount/) |
| 2816 | [Double a Number Represented as a Linked List](https://leetcode.com/problems/double-a-number-represented-as-a-linked-list/) | 🟡 Medium | Linked List, Math | [✔️](./Linked-List/2816-double-a-number-represented-as-a-linked-list/) |
| 2869 | [Minimum Operations to Collect Elements](https://leetcode.com/problems/minimum-operations-to-collect-elements/) | 🟢 Easy | Array, Hash Table | [✔️](./Arrays-Hashing/2869-minimum-operations-to-collect-elements/) |
| 3120 | [Count the Number of Special Characters I](https://leetcode.com/problems/count-the-number-of-special-characters-i/) | 🟢 Easy | Hash Table, String | [✔️](./Arrays-Hashing/3120-count-the-number-of-special-characters-i/) |
| 3121 | [Count the Number of Special Characters II](https://leetcode.com/problems/count-the-number-of-special-characters-ii/) | 🟡 Medium | Hash Table, String | [✔️](./Arrays-Hashing/3121-count-the-number-of-special-characters-ii/) |
| 3300 | [Minimum Element After Replacement With Digit Sum](https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/) | 🟢 Easy | Array, Math | [✔️](./Arrays-Hashing/3300-minimum-element-after-replacement-with-digit-sum/) |
| 3945 | [Digit Frequency Score](https://leetcode.com/problems/digit-frequency-score/) | 🟢 Easy | — | [✔️](./Other/3945-digit-frequency-score/) |
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
