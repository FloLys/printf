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
     ![Flowchart](https://viewer.diagrams.net/?tags=%7B%7D&highlight=0000ff&edit=_blank&layers=1&nav=1&title=ff.drawio#R7Vxbc5s4FP4tffBsujPxIAkEPNZp0%2B5uttNt0m371FFAtmmw5QJO4v76lUDCiIuNLyR4p51OYglZF3S%2B73znIDJAF7PHtxFZTP9mPg0H0PAfB%2Bj1AEKAkMF%2FiZpVVmOLkqiYRIGfVRnriuvgJ5XfVLXLwKexrMuqEsbCJFjolR6bz6mXaHUkitiD3mzMQl%2BrWJAJrVRceySs1n4O%2FGSa1TrQXte%2Fo8FkqkYG2M2u3BLvbhKx5VyON2dzml2ZEdWNXGM8JT57KIyH3gzQRcRYkn2aPV7QUNxWdcc%2B%2F7H6HF7d4bd%2F%2FhP%2FIJ9Gf928%2F%2Fc86%2Bxyl6%2Fki4voPDlu13KX70m4lHdSrjVZqVub3hwqOjEGaDRNZiH%2FCPjH7zRJVtIUyDJhvIpFyZRN2JyEV4wtZLsxmyeyGRBlOvdfiS3n5duQeXdZ1WUQqo55SbUXQ8ZJxO7ybRUN8p0QhZDc0nCUb%2BMFC1nEL6UbyfvyuZ3Ixaxn92ZdO6KPQfJFrG5oydJXNQ%2F%2B%2BfWjXHhaWMlCfEcTT82m5e7IXYzZMvLkrXU%2FvLnC8MZ2ky%2FhNDZWP79ffjk3s3Zi4mVb4%2FClbEaTaMUbRDQkSXCvA4BIHE3ydvlXP7CAzw8aEvPIdoeG5TgQWdA1AZBIWSlcY73DbNqyj6KVVbvVOzJLHSUkmtCk0hG3CLIqNFuIBnGxBf9QWP%2B6KjXzepOvvb8AV2z%2BkoQxrRj%2BdtPRoaEZRS0SahBTwBM3n2hVsERR%2FKqsTxTWtpiWcmMsokGA7ZLMglBcfUfDe5oEHimh0NwDhZthVmuz%2B4Gitp3cs8x4NmyuUY8VaZznxtB2HUcz0HNF7%2FviSTVh43FMkwMtdtPiCwY7ZhF3T7xOFEWN8f7T1dUA4pDfnNFtpBky%2FrEULiq1gPM43dJXvAEwFo%2Fpzqnr%2FNMk%2FW1fiP%2FH6exMTtUaGQPrdXHGA2gda8IQkxnH2Cj7WS0eY5AX%2BUIAX8jLqpucstntMi7i0Sjj8WrpBT7h37tg85ilFFKEpWhPwmAy5wWP44ZG9d5vQbxgPuElc126SUnG0EhJNCaRJ7uHFY7KIM0in0YlON%2FTSNBG%2BErOZhb4fjrdAl3JgT9KVZWKAxYFP%2FmCiGqTrk7eo%2FRucHpRQw0gGhPfJl6%2ByMKVWxNbhrmzcxXzpkrUbqQCZFhDYYB1ruphrSCBaQ9lq2lRP5pGMz9o8N%2FZOxk99U7NVr3Zyyifpnm0tYNr8Gm5KCtIsrVAqxdlJYe11cE9mUdr9lQtPJq9zaO5GOmS6xyah3k02beLhm7hn6OPggEe2gAZyOSaDyCIDpR59XOwTW1QhMBG9Vlqbju4BMhs%2FC49eD2qq3HWTbTsEah3lI77CdXeSs6DAArQNoQ6jqnbpXI8h4ZwTgkddrtYq9LReWno7oBQ9W65lH2xt5CFT6ELmwbJZWGQ6Vu5jN8G1gX%2F0YFKhKeuEvcVgRVx1xbsjdgERhmXNQoQGzX6z%2BpK%2F6FuHMWBabt9EgYb0nbbyV3pP5WGa6f%2F9tOaNcm8509kWNucimljXZB1l8eo%2BAvLgUMDF7ShPhG4Z%2B7QAiU4gr7lDs0KOpUX4Tw3b%2BVHcIMf%2BbaI%2BKzHZx4nfXFPvCkRjul35R%2F5hI3hcPhSDcjnn42pfF2ZIcIwWMQCSw%2FTIKHXnIfFlYeILHQ%2B0D1BM9trMGmlFXEt2bu%2BVUf2hJo8iuiQ7GEpgKmL9p0arsddUb1VMaaIJstImNHZOahmmHqwo2avdtQquW%2Fg1mypUbOlnWVv7A1bKgHt8c3hmq2X29svwCJDB6xdp87Mp0QsqO7v%2FyM511kc7zx7GA9QS8UFtz87Qsd%2BdqRcUyk%2FYJWfvm4N5J8gheV0E5mcXApLduO2AcKJmD5wt5m%2BY5m66at874GWb8ETsPxqTK5EuDCrVqoftMweiU7S%2FFHh6SifdDZOg9I%2FQk4JnHpOSVZd0XH%2FskwIOEMDaGaO6pQqBEPXrqqZXMEeXc7AjpJNz6VmDs1P7ZtAemaWd9sKHHMby2OsJPaRckqya2yVWB71j%2BVhNRzvmbbv9HjXJjTsJpFOBQ14q9x3kH4o8lhyH5XkPj44z9nuLKaC3fM%2FDnd%2FKapfimp%2FRWViHUCm0ws5BSqG1B%2Fl1MJc6%2BVPfuVIhzq6dgCw7bmNhnTPgdwOStyOnG64vTyOpZ%2BM0rn9aBqpenyjxNtj4um0XbG7AmG3ZPkKxS%2BWiUimn2lU%2F7J4niNrp2fcUxcwSv%2BXGwZNF1o7DA3FW%2FL3HT%2BQuQW%2BP15LusIVYNjIXYuwDs5T4IZszrNl7FV66ddDtn33FKPSnoLnfsimXurrx6s6hqtHR0MMt3pMXvpAo4DfDiELn%2FAlnpoob4%2BD1p278APf9tnNhe%2FseYEeVWH8FJ7X6ZPN9%2FD1tKpl98ZKG07wt7bSw8iy%2BvLYIZJNl0WtDz3Vyjgek4axuIFTKjqhIfUSbq18Rsu5lwRMdH1L4rQqLWQNx%2BnL2mLZfB%2BDcZAqOzLOFF7WRA%2F19WNSJyDoNmfQ%2BiP3oI2H%2BitUWPVcEAfQsPLHH0V94HR2hBb2hyvzQsujqI3x%2Bw1XCwIs7%2BkD%2F%2FmRzbhN65aDdNZUB2lz0tQfX9vPwplI%2FW2IfbOzT0Oaapo7kGbd%2FuwW6jYdDFUjBwf1Mp6nuiYLg9N8aHre9Bun3WIcDeXbrTu%2FHtE0rjeXcXc6Zj6LszCIkyMOoyJ4jeGDk2F9cfDOJ%2FE0jycnIYnjWlIosL%2F2SKWD45Wl49gYIkX3RXqvi%2Bdtqytkbj2L0QEyraMgs6kX8e1grYMWLA6k%2BOHmF5GECWSw8SA7Ek64RopiVSOlUxKJZwhCGgkgD3fEVNPErjlLi0DISF%2FPMo7V7UkC1OojQE2gn8lCNakZqFJwB0ovXlz%2FpaMsql3%2FJSn05j8%3D)

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
