<img src="https://github.com/Nureex/Files/blob/master/Photos/duck1.jpg" alt="Rubber Duck" width="500" height="600">

# Debugging Practice Project

Debugging is the crucial process of identifying and rectifying errors in software that hinder its proper functioning. As you progress in your programming journey and step into the world of software engineering, you'll become familiar with various debugging tools like `gdb` and the built-in tools in integrated development environments (IDEs). Nevertheless, it's essential to grasp the fundamental concepts and manual debugging procedures.

## Learning Objectives

By the end of this project, you will be able to explain the following concepts without needing external resources:

### General
- What debugging entails
- Methods for manual debugging
- How to interpret error messages

## Copyright and Plagiarism

It's your responsibility to devise solutions for the tasks below in line with the aforementioned learning objectives. Avoid the temptation to plagiarize or directly copy work from others. Publishing project content is prohibited. Remember that plagiarism breaches program rules and will result in expulsion.

## Requirements

### General
- Supported editors: `vi`, `vim`, `emacs`
- Code will be compiled on Ubuntu 20.04 LTS using `gcc` with options: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Code files should end with a newline
- Code should adhere to the Betty style, checked using `betty-style.pl` and `betty-doc.pl`
- The repository root should contain a `README.md` file describing the repository
- A `README.md` file should be present in the root of the project folder (e.g., `0x03-debugging`), outlining the project's purpose

## Tasks

### 0. Multiple Mains
This task involves testing a function named `positive_or_negative()` with a test case of 0. The provided `main.c` file demonstrates how this function is tested. Your goal is to create a file named `0-main.c` that tests the function with a value of 0.

### 1. Like, Comment, Subscribe
You'll be working with an existing main file that contains an infinite loop. Your task is to comment out the code responsible for the infinite loop without adding or removing any lines.

### 2. 0 > 972?
A program is provided that should print the largest of three integers. However, it's currently producing an incorrect output. Your mission is to fix the code in `2-largest_number.c` so that it accurately determines the largest number.

### 3. Leap Year
This task involves a program that converts a date to the day of the year and calculates the days remaining in the year, accounting for leap years. There are some issues with the program's leap year calculation and output. Your job is to correct the code in `3-print_remaining_days.c` so that it produces correct output for all dates and leap years.

## Repository Structure

- GitHub repository: [alx-low_level_programming](https://github.com/yourusername/alx-low_level_programming)
- Directory: `0x03-debugging`
- Files: 
  - `0-main.c`
  - `1-main.c`
  - `2-main.c`
  - `2-largest_number.c`
  - `3-main_a.c`
  - `3-main_b.c`
  - `3-convert_day.c`
  - `3-print_remaining_days.c`
  - `main.h`
  - `README.md`
