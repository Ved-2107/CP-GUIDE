# COEP Quantitative Finance Club — Competitive Programming Guide

Welcome to the **COEP Quantitative Finance Club (COEP QFC)** Competitive Programming Guide. This repository is curated to help club members master algorithmic problem solving, computational complexity, and mathematical optimization—skills fundamental to quantitative research, algorithmic trading, high-frequency systems, and core software engineering.

---

## 📌 Module 1: Algorithmic Foundations & Core Problem Solving

This initial module establishes core programming intuition, environment setup, asymptotic analysis, and standard competitive coding patterns in C++.

### 🎯 Why Competitive Programming for Quantitative Finance?

1. **Low-Latency & Execution Efficiency**: Quant infrastructure demands execution speeds measured in microseconds. Understanding asymptotic bounds ($O(1)$, $O(\log n)$, $O(n)$ vs $O(n^2)$) and memory layout is critical.
2. **Mathematical & Combinatorial Thinking**: Quant trading challenges involve probability, modular arithmetic, number theory, and invariants—the exact domain of competitive programming problems.
3. **Robustness & Edge-Case Handling**: In live financial markets or coding assessments, an unhandled edge case or integer overflow costs money or points. CP trains you to write bug-free code under tight constraints.

---

## 🚀 Step 1: Platform & Environment Setup

Create accounts on the following competitive programming platforms:

- [CSES Problem Set](https://cses.fi/) — The cleanest collection of curated algorithmic problems across classic topics.
- [Codeforces](https://codeforces.com/) — The premier platform for regular rated contests and active problem archives.
- [LeetCode](https://leetcode.com/) — Helpful for standard data structure questions and technical interview practice.
- [CodeChef](https://www.codechef.com/) — Additional contest and problem repository.

---

## 📚 Step 2: Essential Reading & Theory

Before diving into problems, review the foundational theory:

1. **Competitive Programmer's Handbook (Antti Laaksonen)**:
   - Read **Chapters 1 to 4**:
     - *Chapter 1: Introduction* (C++ features, input/output, working with numbers)
     - *Chapter 2: Time Complexity* (Order of magnitude, calculation rules, estimation)
     - *Chapter 3: Sorting* (Sorting theory, C++ `std::sort`, binary search)
     - *Chapter 4: Data Structures* (Dynamic arrays `vector`, sets, maps, iterators)
   - Available in this repository: [`Resources/Competitive Programmer_s Handbook.pdf`](Resources/Competitive%20Programmer_s%20Handbook.pdf)
2. **Stanford CS 97SI: Introduction to Competitive Programming (Jaehyun Park)**:
   - Covers contest basics, operational limits, and strategy.
   - Available in this repository: [`Resources/01-introduction.pdf`](Resources/01-introduction.pdf)
3. **Basic Information & Strategy Guide**:
   - Guide on fast I/O, avoiding common pitfalls, and debugging tips.
   - Available in this repository: [`Resources/Basic Info.pdf`](Resources/Basic%20Info.pdf)

---

## ⚡ Step 3: Fast I/O & C++ Best Practices

In competitive programming and performance engineering, small implementation choices have major impacts:

### 1. Fast I/O
Standard `std::cin` and `std::cout` synchronize with C standard streams (`stdio`), introducing significant overhead. Disable this synchronization in your `main()`:

```cpp
ios_base::sync_with_stdio(false);
cin.tie(NULL);
```

### 2. Output Flushing (`\n` vs `std::endl`)
- `std::endl` writes a newline **and flushes the output buffer**. Flushing repeatedly inside loops causes **Time Limit Exceeded (TLE)**.
- Always use `'\n'` or `"\n"` unless an interactive problem explicitly requires flushing.

### 3. Number Representation & Integer Overflow
- A standard 32-bit signed `int` ranges from $-2 \times 10^9$ to $2 \times 10^9$.
- If calculations (e.g., $n \times (n + 1) / 2$, or $3n + 1$) exceed $2 \times 10^9$, values overflow into negative numbers.
- Use 64-bit integers (`long long` in C++) by default when values or intermediate products can exceed $10^9$.

### 4. Operations Per Second Rule of Thumb
- A modern computer performs roughly **$10^8$ operations per second**.
- If the time limit is 1.0 second:
  - $N \le 10^4$: $O(N^2)$ solution is acceptable.
  - $N \le 10^6$: $O(N \log N)$ or $O(N)$ solution is required.
  - $N \le 10^8$: $O(N)$ simple operations or $O(\log N)$ required.
  - $N > 10^9$: $O(\log N)$ or $O(1)$ formula required.

---

## 🧠 Step 4: Core Problem Set

Work through these five core problems to cement your understanding of loops, data bounds, parity, and state tracking. Reference solutions are provided in [`solutions/core/`](solutions/core/).

| # | Problem | Platform | Solution Code | Official Editorial / Walkthrough |
|---|---|---|---|---|
| 1 | **Missing Number** | CSES 1083 | [`01_missing_number.cpp`](solutions/core/01_missing_number.cpp) | [GeeksforGeeks Editorial](https://www.geeksforgeeks.org/missing-number-cses/) |
| 2 | **Repetitions** | CSES 1069 | [`02_repetitions.cpp`](solutions/core/02_repetitions.cpp) | [GeeksforGeeks Editorial](https://www.geeksforgeeks.org/cses-solutions-repetitions/) |
| 3 | **Coins** | Codeforces 1814A | [`03_coins.cpp`](solutions/core/03_coins.cpp) | [Codeforces Editorial](https://codeforces.com/blog/entry/114854) |
| 4 | **Lucky Numbers** | Codeforces 1808A | [`04_lucky_numbers.cpp`](solutions/core/04_lucky_numbers.cpp) | [Codeforces Editorial](https://codeforces.com/blog/entry/114523) |
| 5 | **Weird Algorithm** | CSES 1068 | [`05_weird_algorithm.cpp`](solutions/core/05_weird_algorithm.cpp) | [GeeksforGeeks Editorial](https://www.geeksforgeeks.org/weird-algorithm/) |

---

## 🎯 Step 5: Practice Problem Set

After completing the core set, challenge yourself with these five practice problems involving mathematical deduction, recursion, and combinatorics. Reference solutions are provided in [`solutions/practice/`](solutions/practice/).

| # | Problem | Platform | Solution Code | Editorial / Guide |
|---|---|---|---|---|
| 1 | **Increasing Array** | CSES 1094 | [`01_increasing_array.cpp`](solutions/practice/01_increasing_array.cpp) | [GeeksforGeeks Editorial](https://www.geeksforgeeks.org/cses-solutions-increasing-array/) |
| 2 | **Towers of Hanoi** | CSES 2165 | [`02_towers_of_hanoi.cpp`](solutions/practice/02_towers_of_hanoi.cpp) | [GeeksforGeeks Editorial](https://www.geeksforgeeks.org/cses-solutions-tower-of-hanoi/) |
| 3 | **Coin Piles** | CSES 1754 | [`03_coin_piles.cpp`](solutions/practice/03_coin_piles.cpp) | [GeeksforGeeks Editorial](https://www.geeksforgeeks.org/cses-solutions-coin-piles/) |
| 4 | **Walking Master** | Codeforces 1806A | [`04_walking_master.cpp`](solutions/practice/04_walking_master.cpp) | [Codeforces Editorial](https://codeforces.com/blog/entry/114048) |
| 5 | **Two Knights** | CSES 1072 | [`05_two_knights.cpp`](solutions/practice/05_two_knights.cpp) | [GeeksforGeeks Editorial](https://www.geeksforgeeks.org/cses-solutions-two-knights/) |

---

## 📁 Repository Structure

```text
CP-GUIDE/
├── README.md                              # This guide for COEP QFC members
├── Resources/
│   ├── 01-introduction.pdf                # Stanford CS 97SI Competitive Programming Intro
│   ├── Basic Info.pdf                     # C++ Tips, Fast I/O, Macros, and Best Practices
│   └── Competitive Programmer_s Handbook.pdf # Antti Laaksonen's CPH textbook
└── solutions/
    ├── core/
    │   ├── 01_missing_number.cpp
    │   ├── 02_repetitions.cpp
    │   ├── 03_coins.cpp
    │   ├── 04_lucky_numbers.cpp
    │   └── 05_weird_algorithm.cpp
    └── practice/
        ├── 01_increasing_array.cpp
        ├── 02_towers_of_hanoi.cpp
        ├── 03_coin_piles.cpp
        ├── 04_walking_master.cpp
        └── 05_two_knights.cpp
```

---

## 💡 Key Advice for Club Members

- **Solve Before Viewing Editorials**: Spend at least 20–30 minutes attacking a problem from multiple angles before reading the editorial.
- **Analyze Time and Space Constraints First**: Always check $N$ and constraints on values before choosing an algorithmic approach.
- **Inspect Other People's Code**: On Codeforces and CSES, review accepted solutions from top-ranked submissions to learn idiomatic, clean implementations.
- **Contest Practice**: Participate regularly in Codeforces Div 3 / Div 4 rounds or use the Virtual Contest feature to build time management and speed under pressure.

---
*Maintained for the COEP Quantitative Finance Club.*
