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

Flowchart :
Here is a flowchart of our '_printf' function :
[Flowchart of _printf](https://app.diagrams.net/#G1U4Gm3_DjQ5njLOEj71ezO5NFpmzPwl-J#%7B%22pageId%22%3A%221Ge7Q-dWyH-wWi8jwrI0%22%7D)

