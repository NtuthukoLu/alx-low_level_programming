# :shell: 0x1A - C: Hash tables :shell:

In this project I will be learning about hashing functions, hash tables, collisions in has tables, the advantages/disadvantages of hash tables and the most common use cases of hash tables.

## :running: Getting Started

* [Ubuntu 20.04 LTS](http://releases.ubuntu.com/20.04/) - Operating system reqd.

* [GCC 4.8.4](https://gcc.gnu.org/gcc-4.8/) - Compiler used


## :warning: Prerequisites

* Must have `git` installed

* Must have repository cloned

* Must have `gcc` installed

```
$ sudo apt-get install git
```

Compile with:
```
$ gcc -Wall -pedantic -Werror -Wextra X-main.c X-problem.c -o X-output
```
Where X is the problem number for files that are relevant.

## :blue_book: Authors
* **Ntuthuko Zimu** - [@NtuthukoLu](https://github.com/NtuthukoLu)

## TASKS:
### 0. >>> ht = {} - 0-hash_table_create.c
	Function that creates a hash table.

### 1. djb2 - 1-djb2.c
	Function implementing the djb2 algorithm.

### 2. key -> index - 2-key_index.c
	Function that gives you the index of a key.

### 3. >>> ht['betty'] = 'cool' - 3-hash_table_set.c
	Function that adds an element to the hash table.

### 4. >>> ht['betty'] - 4-hash_table_get.c
	Function that retrieves a value associated with a key.

### 5. print(ht) - 5-hash_table_print.c
	Function that prints a hash table.

### 6. >>> del ht - 6-hash_table_delete.c
	Function that deletes a hash table.
