##### NAME
    _printf - prints data string from format argument

##### SYNOPSIS
    _printf FORMAT [ARGUMENT]...

##### DESCRIPTION
     _printf  simulates the printf function from the <stdio.h> library.
     Prints the string ("") FORMAT it recieves as input and replaces its
     identifiers with the correspondant ARGUMENT instead to stdout.
     Return the number of characters printed excluding the null byte used
     to end output to strings. Writes output to stdout stream.
     ![Flowchart](https://github.com/FloLys/printf/blob/0a4f6b09eee2dc75665c98a2c0057ed1e07216b2/test/Flowchart%20_printf.png)

##### IDENTIFIERS

     %c   Prints a character.

     %s   Prints an array of characters.

     %d   Prints a decimal number.

     %i   Prints an integer number.

     %ui  Prints an unsigned integer.

     %b   Prints a number in binary.

     %o   Prints a number in octal.

##### FILES
     /_printf.c
          Main file.
     /fn_sel.c
          Function pointer to identified module functions.
     /fn_unk.c
          Counter function for an unknown identifier.
     /fn_print.c
          Definition of functions for character, string and module.
     /_print_i.c
          Definition of function for integers and decimals.
     /_print_ui.c
          Definition of function for unsigned integers.
     /_pwr.c
          Function to raise x to the power of x.
     /_putchar.c
          Custom function of putchar() to print the chars of the string.

###### BUGS
     Incomplete identifiers list.

###### AUTHOR
     Florencia Mestre <https://github.com/FloLys/printf>
