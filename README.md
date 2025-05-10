# 🧠 Smart Scheduler – Task Prioritization System in C++

![C++](https://img.shields.io/badge/C%2B%2B-17-blue.svg)
![DSA](https://img.shields.io/badge/Data%20Structures-Heaps%2C%20HashMaps-orange)
![Status](https://img.shields.io/badge/status-active-brightgreen)
![License](https://img.shields.io/badge/license-MIT-lightgrey)

## 📌 Overview

**Smart Scheduler** is a command-line task management system written in C++ that uses data structures and algorithms to prioritize and manage tasks. It demonstrates practical usage of:
- Min Heaps (via `priority_queue`)
- Hash Maps (`unordered_map`)
- Classes and OOP
- STL and custom comparators


---

## 🚀 Features

- 🔧 Add a new task (with title, description, deadline, and priority)
- 🧾 View the top-priority task
- 📋 View all existing tasks
- ✅ Complete the top-priority task
- ❌ Delete any task by ID
- ⏱️ Auto-prioritize using a **Min-Heap** based on priority value

---

## 💻 How to Run

### 📦 Prerequisites
- C++17 compatible compiler (e.g., `g++`, `clang++`)
- Terminal / Command prompt

### 🛠️ Compile & Run

```bash
g++ main.cpp task.cpp task_manager.cpp -o scheduler
./scheduler
