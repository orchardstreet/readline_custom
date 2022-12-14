# readline_custom
A custom (from scratch) version of GNU's readline() and without malloc

basically an elaborate, 2 function wrapper for fgets()

### The functions

#### signed char readline_custom(char *prompt, char *input, size_t input_size_temp, size_t *result_string_length)

'prompt' should be a null-character-terminated prompt string, eg ("Enter your name: ")

'input' is the buffer user input goes into, and it should be 'input_size_temp' bytes large 

'input_size_temp' can a value of 4 to sizeof(size_t). It uses 3 bytes for padding. So if input_size_temp is 10, then a user can enter max 7 characters

'result_string_length' is a pointer to a size_t variable.  It is used to return the length of  user input after readline_custom is called.

While being prompted for input, a user can quit through ctl+D, 'q', or 'quit'.  

Readline_custom ignores and removes overflow when present, asking the user to enter again.

The function only allows characters a-z (can be changed easily), and doesn't accept null characters as part of a user response string

The function returns either EXIT_PROGRAM or SUCCESS.  If EXIT_PROGRAM is returned, exit() should be called.

#### signed char prompt_quit(char *prompt)

This is a quit prompt that readline_custom uses, but you can use it directly easily

'prompt' should be a null-character-terminated prompt string, eg ("Do you want to quit: ")

The function loops until a user enters ctl+d, 'yes', 'y', 'n' or 'no', and returns an exit code as appropriate

In readline_custom, a user pressing ctl+d will call prompt_quit.  In prompt_quit, a user pressing ctl+d will cause the function to return EXIT_PROGRAM

The function returns either EXIT_PROGRAM, YES, or NO.  You should handle all three exit codes if you use this function.  

### To compile
add 

```
#include "headers/readline_custom.h" 
```

to your the file in your program that will use the function.  Then compile your program as normally, but also adding the readline_custom.c file
