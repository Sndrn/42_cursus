# About

This project consists of coding a library that contains a simplified version of the printf function.

For more information, please refer to the subject [ft_printf](https://github.com/Sndrn/42_cursus/tree/main/Subjects_PDFs).

### Desciprion

    The prototype of ft_printf should be int ft_printf(const char *, ...);
    You have to recode the libc’s printf function
    It must not do the buffer management like the real printf
    It will manage the following conversions: c s p d i u x X
    It will be compared with the real printf

#### The following format specifiers of the original printf function are reproduced :

- %d 	print a decimal (base 10) number
- %i 	print an integer in base 10
- %u 	print an unsigned decimal (base 10) number
- %x 	print a number in hexadecimal (base 16) (lowercase)
- %X 	print a number in hexadecimal (base 16) (uppercase)
- %c 	print a single character
- %s 	print a string of characters
- %p 	The void * pointer argument is printed in hexadecimal
- %% 	print a percent sign
