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
     ![Flowchart](https://viewer.diagrams.net/?tags=%7B%7D&highlight=0000ff&edit=_blank&layers=1&nav=1&title=ff.drawio#R7Vxbc5s4FP4tffBsujPxIAkEPDZp0%2B5uttNt0m371FFAtmmw5QJO4v76lUDCiIuNL8R4p5lMgoR8dDvfOd85CA%2FQ5fTpbUTmk7%2BZT8MBNPynAXo9gBAgZPB%2FomaZ1TgQZxXjKPCzKmNVcRP8pPKTqnYR%2BDSWdVlVwliYBHO90mOzGfUSrY5EEXvUm41Y6GsVczKmlYobj4TV2s%2BBn0zULOxV%2FTsajCeqZ4Dd7M4d8e7HEVvMZH8zNqPZnSlRYuQc4wnx2WOhP%2FRmgC4jxpLsavp0SUOxrGrFPv%2Bx%2FBxe3%2BO3f%2F4T%2FyCfLv66ff%2FveSbsapuP5JOL6Cw5rGiYiX4g4UKupJxrslRLmy4OFUKMAbqYJNOQXwJ%2B%2BZ0myVKqAlkkjFexKJmwMZuR8JqxuWw3YrNENgOiTGf%2BK7HlvHwXMu8%2Bq7oKQiWYl1R70WWcROw%2B31bRIN8JUQjJHQ0v8m28ZCGL%2BK10I7ksn%2BuJnMxqdG9WtRf0KUi%2BiNkNLVn6qsbBr18%2FyYmnhaUsxPc08dRoWu6O3MWYLSJPLq374c01hre2m3wJJ7Gx%2FPn96su5mbUTAy%2FrGocvZVOaREveIKIhSYIHHQBE4mict8s%2F%2BoEFfHzQkJhHtjs0LMeByIKuCYBEylLhGusCs2FLGUUtq4rVBZklQQmJxjSpCOIaQZaFZnPRIC624BeF%2Ba%2BqUjWvV%2Fna9QW4ovNXJIxpRfE3q44ODU0papFQg5gCnrj6RMuCJoriV6V9orDSxbSUK2MRDQJsV2QahOLuOxo%2B0CTwSAmF5g4oXA%2BzWp3dDRS17eSeZcqzZnONeqxI5Tw3hrbrOJqCnivzviueVBM2GsU02VNj102%2BoLAjFnH3xOtEUdQY7z9dXw8gDvniXNxFmiLjHwvholINOI%2FTLX3FGwBj%2FpTunLrPr8bpf%2FtS%2FB5G2JkcqnVhDKzXxREPoHWoAUNMphxjF9nfavEQnbzIJwL4RF5W3eSETe8WcRGPRhmP1wsv8An%2F3CWbxSw1IUVYivYkDMYzXvA4bmhU7%2F3mxAtmY14yV6Xb1MgYmlESjUnkSfGwYqMySLPIp1EJzg80EmYjfCVHMw18Px1uwVzJjj9KVpWSAxYFP%2FmEiGqTzk6uUboa3LyorgYQjYhvEy%2BfZOHOnYktw9zauYpxU0Vq15oCZFhDoYB1rupxxSCBaQ9lq0mRP5pGs33Q4L%2B1dzJ66p2atXq9l1E%2BTfNoKwfX4NNyUlagZCuCVk%2FKSg5ro4N7No%2FW7KlaeDR7k0dzMdIp1zk09%2FNoUraLhm7hx9F7wQAPbYAMZHLOBxBEe9K8%2BjHYptYpQmAt%2Byw1tx1cAmTWf5cevB7V1TjrNlr0CNRbUsfdiGpvKedeAAVoE0Idx9T1UjmefUM4p4QOu12sVRF0Xuq6OyBUvVtOZV%2FsTGThc%2FDCpk5yWhhk%2FFZO47eBdcn%2FdMAS4amzxF1JYIXctQV7IzaBUcZlDQPERg3%2Fs7rif6gbR7Fn2m6XhMGatN1m4674n0rDteN%2Fu3HNmmTe8RMZ1ianYtpYJ2Td5TEq%2FsJy4NDABW6oDwTumDu0QAmOoG%2B5Q7OCTuVFuJ2btfYjFSfybR7xIY%2FOPG7xxYJ4EyK80u%2FKOfLRGsPh8KXqjQ8%2B61A5urJ5CMNgHgsgPU6ChN5wIyzuPEZkrhsD3Q00m3oNI9t4K7PW4Lu%2BVWfwCTV5JNGhwYelIKYu4ndq7D3uytxbFYWKaLKIhCqdnYNqlukZN3ZdBNCfHbVKLhy4NVtq1GxpZxkce82WSlx7fHM4bzvq9m7ALerVLiNDx61dR9TM5wQuqG7z%2FyNP11lI7xw9ogeoJfmCmx8joUM%2FRlIeqpQqsMoPYjfG9M%2BQzXK6CVJOLpslxbhtgHAiqg%2FcTarvWKau%2Bir1u6fmW%2FAENL8anitKLtSqVQAAWiaShJA0lVR4UMoHnfXTwPsPkF4Cp55eklXXdNS%2FhBMCztAAmpqjOsIKwdC1q2wmJ7IHpzOwo7zTsdjMvqmqXXNJR7bybluCY26y8hgrin2g9JIUja2SlUf9s%2FKwGpX3jNt3etJrHRq2o0ingga8ke47SD8feSi6j0p0H%2B%2Bd8mx3LFPB7vhPxt1fjOoXo9qdUZlYB5Dp9IJOgYoi9Yc5tVDXevqT3znQ%2BY6uHQBse4SjId2zp20HJduOnG5se7kfSz8kpdv2g3Gk6kmOkt0eEU832xW9Kxjslla%2BYuLni0Tk1M80U%2F%2ByeLQja6cn3lMXcJH%2BlhsGTTdaOwwNxRvS%2BB0%2Fl7kDvj9aUbrCHWDYyF2RsA6OVuCGbM7RMvYqvfTrWduue4pRaU%2FBsZ%2B1qff7%2BvHWjuHq0dEQw40ek5c%2B0CjgyyFo4TO%2Bz1MT5e1w5rpzF77niz%2FbufCtPS%2FQoyqMn8PzOn3S%2BR6%2BqVbV7N5oacNh%2FtZaup%2BxrL5Htg9l02lR6%2FNPtTSOx6RhLBZwQoUQGlIv4drKR7SYeUnAhOg7EqdVaSFrOErf2xbT5vsYjIKU2ZFRxvCyJnqorx%2BaOgFCtz6D1h%2B6B2081N%2BmwkpygRxAw8offxT5gdPZaVrYH1uZF1qeSm2M3285WxBgeU8f%2Bd%2BPbMp1unp4p2A11Zna3Gjqj6%2Fto9hMpL4mYtfs7PMYTTXMLYxm3f5sF%2Bri5hcaQhmk7iFlNEt5TRYGp%2FnQ9PTpN252i3E0lC%2B6bv2mRFO%2F3kzG3Wmf%2BSjOwiBODtiNiuA1Cx%2BcjNXHvOyTeJLHk%2BOQxHGtUShYf%2B2RSgenLEsnszFEytwXzXtdPG9bXSFz41mMDpBpHQSZTVLEp4MVD5qzOJDkh6tfRBImkMFGg%2ByAOOEcKYpVjaROSSSeIQhqJIA83BJTTQO74VZaBEJG%2BqaWcSixJwlQq48ANYF%2BJgvVpGagSsHtSb14cfWlR1lUu%2FpSKfTmPw%3D%3D)

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
