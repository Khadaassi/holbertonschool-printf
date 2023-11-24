![image](https://camo.githubusercontent.com/53e388ccefde9c9b8cf54cac98852e1000a2b2a861a10fe8c755ffe1ffe0fd64/68747470733a2f2f6170706c792e686f6c626572746f6e7363686f6f6c2e636f6d2f686f6c626572746f6e2d6c6f676f2e706e67)


 <p align="center">PRINTF</p>
        
The _printf() function prints formatted data to the standars output. It parses the format string and processes each conversion spesifier by calling the appropriate function to print the corresponding data type. Additional arguments after format are retrieved using va_list and va_start to access the variable arguments.


## Prototype

`int _printf(const char *format, ...);`
        
## Requirements

- Allowed editors: vim or emacs.
- All the files will be compiled on Ubuntu 20.04 LTS using gcc.
- The code should use the betty style.
- Global variables are not allowed.
- No more than 5 functions per file.
- The prototypes of all th functions should be included in the header file called main.h.
- The header files should be include guarded.

## Commande de compilation

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
## Specifiers


| Specifier|  Description|
| -------- | -------- | 
|   %c    | print a single character | 
|   %s    | print a null-terminated string   | 
|   %%    | print a literal '%' character  | 
|   %d | print a decimal number|
|  %i   |print an integer number|

## Exemple


```
#include "main.h"

/**
 * main - entry point of the program
 *
 * Return: always 0 (Success)
 */
int main(void)
{
        int positive_number = 59;
        int negative_number = -59;

        char character = 'A';
        char *string = " I am a Holberton student!";

        _printf("%c\n", character);
        _printf("%s\n", string);
        _printf("%%\n\n");

        _printf("This is the best school\n\n");

        _printf("%d\n", positive_number);
        _printf("%i\n\n", negative_number);

        return (0);
}
```

output 

```
A
I am a Holberton student!
%

This is the best school

59
-59
```

## man page


![Image](https://i.imgur.com/FH3M8WN.png)
        

## Flowchart

![Image](https://i.imgur.com/Rfh5HXq.png)
 

## Authors

 **Aassi Khadija & Abdelmalek Mhamed**
