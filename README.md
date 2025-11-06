# Cursus42_get_next_line
This repository contains the get_next_line project from the 42 Cursus.

# Overview
get_next_line is apart of the second group of projects. The idea is to return the next line being read from the file descriptor. The `BUFFER_SIZE` variable can be redefined using the additional flag `-D BUFFER_SIZE=n` during the compilation process.

# Running and Testing

This project includes `main.c` and `test.txt` files for easy testing purposes. Follow the instructions bellow to test the project; this process assumes a CLI interaction with the project.

## Compilation
```
# Full Command for Compilation
gcc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c main.c -o gnl_test

# Run the Compiled Test Executable
./gnl_test

# Compile with Bonus Files
gcc -Wall -Wextra -Werror get_next_line_bonus.c get_next_line_utils_bonus.c main.c -o gnl_bonus

# Run the Bonus Test Executable
./gnl_bonus
```

# Learning Outcomes

This project aims to solidify the concept of static variables and buffer handling. Personally, I had the opportunity to consolidate knowledge regarding I/O as well as writing robust code whilst maintaining readability and sanitisation of code.


# Author

**Karma0151235**

42 Kuala Lumpur | Sunway University | Lancaster University 

