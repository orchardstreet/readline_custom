# readline_custom
A custom version of readline and without malloc

###The function

####signed char readline_custom(char *prompt,char *input, size_t input_size_temp,size_t *result_string_length)

'prompt' should be a null terminated prompt string, eg ("Enter your name: ")

'input' is the buffer your input goes into, it should be input_size_temp bytes large 

'input_size_temp' can be 4 bytes to sizeof(size_t) bytes large. It uses 3 bytes for padding. So if input_size_temp is 10, then a user can enter max 7 characters

'result_string_length' is a pointer to a size_t variable which will contain the length of the string that was input

A user can quit through ctl+D, 'q', or 'quit'.  The function ignores and removes overflow when present, asking the user to enter again.

The function only allows characters a-z (can be changed easily), and doesn't accept null bytes as part of a user response string
