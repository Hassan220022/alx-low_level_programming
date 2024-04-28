# README for Project 0x1A. C - Hash tables

## About

This project is part of ALX's curriculum under SE Foundations. It focuses on the implementation and utilization of hash tables in C, providing a deep dive into how hash tables work, the importance of hash functions, handling collisions, and the advantages and drawbacks of using hash tables.

## Learning Objectives

- Understand what a hash function is and what makes a good hash function.
- Learn about hash tables, their mechanics, and how to use them effectively.
- Explore collision handling methods in hash tables.
- Assess the advantages and drawbacks of hash tables.
- Recognize common use cases for hash tables.

## Requirements

- All C files must be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- Code must adhere to the Betty style and documentation guidelines.
- No global variables allowed.
- Maximum of 5 functions per file.
- A `README.md` file at the root of the folder is mandatory.

## Data Structures

For this project, specific data structures are defined for use, including `hash_node_s` for nodes of the hash table and `hash_table_s` for the hash table itself. These structures support chaining collision handling.

## Tasks

1. **Create a hash table** - Implement a function to create a hash table.
2. **Implement the djb2 algorithm** - Write a hash function using the djb2 algorithm.
3. **Key indexing** - Generate an index for a key.
4. **Add elements** - Implement a function to add elements to the hash table.
5. **Retrieve elements** - Retrieve values from the hash table using keys.
6. **Print hash table** - Print all the elements in the hash table.
7. **Delete hash table** - Free and delete the hash table.

## Advanced Tasks

Implement a sorted hash table that maintains the elements in order, similar to PHP's ordered hash table.

## Testing

The project includes tests to ensure all implementations work correctly.

For further details, visit the [GitHub repository](https://github.com/alx-low_level_programming).

Enjoy exploring the functionalities and implications of hash tables within software development!
