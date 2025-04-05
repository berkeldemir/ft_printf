![42-ftprintf](https://github.com/user-attachments/assets/0810a550-56c9-45b1-b520-7cb826af57b5)
![project-badge](https://badgen.net/badge/ft_printf/110%25/blue?icon=terminal)
![user-badge](https://badgen.net/badge/created%20by/%40berkeldemir/yellow?icon=github)
![intra-badge](https://badgen.net/badge/intra/%40beldemir/cyan?icon=slack)

# Ever wondered how printf works? Implement it yourself and see!

In this project of 42 Cursus, you will create your own printf function. 

## 🖥️ Installation

Follow the instructions in your terminal:
```bash
git clone https://github.com/berkeldemir/ft_printf.git
cd ft_printf
make
```

## ⌨️ Usage

To try how it works you can create a main.c in the root of repository and type something like this:

```c
#include "ft_printf.h"

int  main(void)
{
  ft_printf("%s!", "Hello World");
  return (0);
}
```

and then type this in your terminal:

```bash
gcc -o main main.c -L. -lftprintf
./main
```

if you see this output, then it works all good!:
```bash
Hello World!
```

## 👨‍💻 Code
Variadic functions are the cornerstone of this project, and I would like to start by discussing them.

### Variadic Functions <stdarg.h>
You probably noticed that ft_printf function declared as
```c
int	ft_printf(const char *str, ...);
```
Interesting there is '...', what is that?

It is what printf makes printf. Thanks to **stdarg.h**, we are allowed to create a function that takes unlimited number of undeclared arguments.

First we need a variable of type va_list.

```c
va_list  args;
```

To unitialize it, we should use **va_start(va_list ap, "which variable to start")**

Remember you have to use **va_end(va_list ap);** at the end of your code before exit, to get no leaks.

```c
va_start(arg, str);
```

And then basically you can call **va_arg(va_list ap, "type");** to get the next value.

```c
va_arg(arg, int);
va_arg(arg, char *);
va_arg(arg, unsigned int);
(...)
```

Examples above will work for %d (or %i), %s and %u in order. So it is important to correctly specify the character after %.

>> ❗Remember that, you cannot go to the previous result of va_arg() function, it basically takes the next one every time.
>>
>> If you want to do that you can use **va_copy(va_list dst, va_list src);** It will copy the existing va_list into another, to use back again.

### (nil) or 0x0?

In printf if you want to print a NULL value with %p, it will give you **"0x0"** if you are working on a Mac and **"(nil)"** if you are on a Linux.

So i came up with this solution in my header file:

```c
# ifdef __APPLE__
#  define NULLSTRING "(null)"
#  define NULLPOINTER "0x0"
# else
#  define NULLSTRING "(null)"
#  define NULLPOINTER "(nil)"
# endif
```

It basically looks if \_\_APPLE\_\_ defined in the system, if it is: NULLPOINTER macro will be "0x0" if not: it will be "(nil)".

### How ft_base works?

While printing a number in hexadecimal way if the number is:
- between 0-15     -> 1 character will be printed -- *(0 and f)*
- between 16-25    -> 2 characters will be printed -- *(10 and ff)*
- between 255-4095 -> 3 characters will be printed -- *(100 and fff)*
- between ![16^x-1](https://latex.codecogs.com/svg.image?\color{yellow}16^{(x-1)}) - ![16^x](https://latex.codecogs.com/svg.image?\color{yellow}16^x) -> x characters will be printed

It is also valid for integers because they are decimals (10 based):
- between 0-9      -> 1 character will be printed
- between 10-99    -> 2 characters will be printed
- between 100-999  -> 3 characters will be printed
- between ![10^x-1](https://latex.codecogs.com/svg.image?\color{yellow}10^{(x-1)}) - ![10^x](https://latex.codecogs.com/svg.image?\color{yellow}10^x) -> x characters will be printed

So kinda doesn't it mean, we should repeat the situation till the number is 0-15?

Yes it does! Function will repeat itself while the number is greater than 15:

```c
int	ft_base(unsigned long n, char *ref)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_base(n / 16, ref);
	count += ft_print_c(ref[n % 16]);
	return (count);
}
```

And then, it will be quitting itself repeatedly and printing 16 based indexed value from the given string.

```c
if (c == 'x')
  count += ft_base(n, HEXADOWN);
else if (c == 'X')
  count += ft_base(n, HEXAUP);
```

```c
# define HEXADOWN "0123456789abcdef"
# define HEXAUP "0123456789ABCDEF"
```
