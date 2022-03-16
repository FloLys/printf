_PRINTF(1)                     User Manuals                    _PRINTF(1)


NAME
    _printf - prints data string from format argument

SYNOPSIS
    _printf FORMAT [ARGUMENT]...

DESCRIPTION
     _printf  simulates the printf function from the <stdio.h> library.
     Prints the string ("") FORMAT it recieves as input and replaces its
     identifiers with the correspondant ARGUMENT instead to stdout.
     Return the number of characters printed excluding the null byte used
     to end output to strings. Writes output to stdout stream.

IDENTIFIERS
     %c   Prints a character.

     %s   Prints an array of characters.

     %d   Prints a decimal number.

     %i   Prints an integer number.

     %ui  Prints an unsigned integer.

FILES
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

DIAGNOSTICS
     The following diagnostics may be issued on stderr:

     Bad magic number.
          The input file does not look like an archive file.
     Old style baz segments.
          _printf  can  only  handle  new  style  baz segments. COBOL
          object libraries are not supported in this version.

BUGS
     Incomplete identifiers list.

AUTHOR
     Florencia Mestre <https://github.com/FloLys/printf>
