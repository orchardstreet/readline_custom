#ifndef READLINE_CUSTOM_H
#define READLINE_CUSTOM_H

enum exit_codes {SUCCESS, EXIT, NO, YES,EXIT_PROGRAM, EOF_SEEN, CONTINUE, FAILURE, TRUE, FALSE, UNFINISHED_MESSAGE, FINISHED_MESSAGE,CONNECTION_CLOSED,NO_MESSAGE};

signed char prompt_quit(char *prompt);
signed char readline_custom(char *prompt,char *input, size_t input_size_temp,size_t *result_string_length);


#endif
