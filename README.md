# holbertonschool C - printf

Description :
Group project consisting in coding our own printf function in C
The function printf in C is a part of the standard library stdio.h and is used to output formatted text to the standard output, usually the screen.
It is widelly used in C programs to display messages, computation results, or even for debugging purposes.
This function is an essential tool for displaying content in a readable and precise way in Your C programs.

Compilation code is :
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

Requirements :
Allowed editors : vi, vim, emacs
All our files will be compiled on Ubuntu 20.04 LTS using gcc
using the options gcc -Wall -Werror -Wextra -pedantic -std=gnu89
Our code should use the Betty style.
We are not allowed to use global variables.
No more than 5 functions per file.
The prototypes of all our functions should be included in our header file called main.h
Don't forget to push our header file.
All our header files should be include guarded.
We provide our _putchar function for this project.

Examples :
_printf("String:[%s]\n", "I am a string !");
Result : String:[I am a string !]
_printf("Percent:[%%]\n");
Result : Percent:[%]
_printf("Char: %c, String: %s\n", 'A', "Test");
Result : Char: A, String: Test

Man page :
Here is our man page of our '_printf' function : [man_3_printf](man_3_printf)

Testing :

==901== Memcheck, a memory error detector
==901== Copyright (C) 2002-2022, and GNU GPL'd, by Julian Seward et al.
==901== Using Valgrind-3.22.0 and LibVEX; rerun with -h for copyright info
==901== Command: ./test_printf
==901==
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
len: 39 | len2: 39
!
!
len: 2 | len2: 2
Hello, world !
Hello, World !
len: 15 | len2: 15
len: 0 | len2: 0
Hello
Hello
len: 6 | len2: 6
(null)
(null)
len: 7 | len2: 7


len: 1 | len2: 1
%y
%y
len: 3 | len2: 3
%
%
len: 2 | len2: 2
cc
cc
len: 3 | len2: 3

[...]

Unknown:[%r]
Unknown:[%r]
==901==
==901== HEAP SUMMARY:
==901==     in use at exit: 0 bytes in 0 blocks
==901==   total heap usage: 1 allocs, 1 frees, 1,024 bytes allocated
==901==
==901== All heap blocks were freed -- no leaks are possible
==901==
==901== For lists of detected and suppressed errors, rerun with: -s
==901== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

Flowchart :
Here is a flowchart of our '_printf' function :
[Flowchart of _printf](https://app.diagrams.net/#G1U4Gm3_DjQ5njLOEj71ezO5NFpmzPwl-J#%7B%22pageId%22%3A%221Ge7Q-dWyH-wWi8jwrI0%22%7D)

