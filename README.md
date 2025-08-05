# C++ Module 00 – Basics of C++ 🧠💻

> _Namespaces, classes, member functions, stdio streams, initialization lists, static, const, and some other basic stuff._

This module introduces you to the fundamentals of C++ programming, serving as the starting point of your Object-Oriented Programming journey at 42. All code is written in **C++98** standard.

---

## 📁 Structure

| Exercise | Directory | Description |
|----------|-----------|-------------|
| ex00     | `megaphone.cpp` | Transform input to uppercase (simulate a megaphone) |
| ex01     | `PhoneBook` + `Contact` | Build a CLI-based phonebook with fixed-size contact storage |
| ex02     | `Account.cpp` + `Account.hpp` | Reconstruct a class to match given tests and logs (Bank account simulation) |

---

## ⚙️ Compilation

```bash
c++ -Wall -Wextra -Werror -std=c++98
```

Each exercise directory must contain a proper `Makefile` with the following rules:
- `all`
- `clean`
- `fclean`
- `re`

---

## 🔍 Exercise Details

### ex00 – Megaphone
- Executable takes input strings and prints them **in uppercase**.
- If no input is given, it prints:  
  `* LOUD AND UNBEARABLE FEEDBACK NOISE *`

Example:
```bash
$ ./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
```

---

### ex01 – My Awesome PhoneBook
- CLI program with `ADD`, `SEARCH`, and `EXIT` commands
- Can store **up to 8 contacts** (new entries overwrite oldest)
- Each contact includes: First Name, Last Name, Nickname, Phone Number, Darkest Secret
- `SEARCH` shows tabular index, and prompts for contact details

Formatting rules:
- 10-character wide columns
- Truncate long fields with `.`
- Right-aligned fields

---

### ex02 – The Job of Your Dreams
- Reconstruct the `Account.cpp` implementation using `Account.hpp` and `tests.cpp`
- Simulates bank account actions with timestamps and static class data
- Goal: Match the test output exactly (excluding timestamps)

⚠️ This exercise is optional — you can still pass the module without completing it.

---

## 📌 Rules Summary

- Use `c++98` standard
- No global `using namespace`
- No containers or algorithms from STL (before module 08/09)
- No external libraries (e.g., Boost)
- `new`/`delete` usage must be leak-free
- Avoid memory leaks and follow canonical form from Module 02 onward

---

## 💡 Tips

- Don’t include implementation in header files unless templated
- Use include guards (`#ifndef`, `#define`, `#endif`) to prevent double inclusion
- Make each `.hpp` independent and self-contained
- Comment and format your code clearly

---

## 🧪 Evaluation Prep

- Ensure all code compiles with `-Wall -Wextra -Werror -std=c++98`
- Avoid use of forbidden functions (e.g., `printf`, `malloc`, `free`)
- Test using a variety of inputs for edge cases
- Each class should have clear public/private design

---

## 👨‍💻 Author

**ghwa** – 42KL  
Email: ghwa@student.42kl.edu.my

---

> _By Odin, by Thor! Use your brain!_
