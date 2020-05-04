# 0x18. C - Dynamic libraries

## Resources:books:
Read or watch:
* [What is difference between Dynamic and Static library (Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM)
* [create dynamic libraries on Linux](https://www.google.com/search?q=linux+create+dynamic+library&cad=h)
* [Technical Writing](https://students-support.hbtn.io/hc/en-us/articles/360023750254)

---
## Learning Objectives:bulb:
What you should learn from this project:

* What is a dynamic library, how does it work, how to create one, and how to use it
* What is the environment variable $LD_LIBRARY_PATH and how to use it
* What are the differences between static and shared libraries
* Basic usage nm, ldd, ldconfig

---

### [0. A library is not a luxury but one of the necessities of life](./libholberton.so)
* Create the dynamic library libholberton.so containing all the functions listed:


### [1. Without libraries what have we? We have no past and no future](./1-create_dynamic_lib.sh)
* Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.


### [2. Either write something worth reading or do something worth writing]()
Write a blog post describing the differences between static and dynamic libraries. It should cover:

- Why using libraries in general
- How do they work
- How to create them (Linux only)
- How to use them (Linux only)
- What are the differences between static and dynamic libraries
- What are the advantages and drawbacks of each of them


### [3. Let's call C functions from Python ](./100-operations.so)
* Create a dynamic library that contains C functions that can be called from Python. See example for more detail.


### [4. Code injection: Win the Giga Millions!](./101-make_me_win.sh)
* I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?

Our mole got us a copy of the program, you can download it here. Our mole also gave us a piece of documentation:

---

## Author
* **Erika Osorio Guerrero** - [Github: erikaosgue](https://github.com/erikaosgue)
