![42-ftprintf](https://github.com/user-attachments/assets/0810a550-56c9-45b1-b520-7cb826af57b5)
![project-badge](https://badgen.net/badge/ft_printf/110%25/blue?icon=terminal)
![user-badge](https://badgen.net/badge/created%20by/%40berkeldemir/yellow?icon=github)
![intra-badge](https://badgen.net/badge/intra/%40beldemir/cyan?icon=slack)

# Ever wondered how printf works? Implement it yourself and see!

**EN:** In this project of 42 Cursus, you will create your own printf function. 

**TR:** 42 Ana Müfredatında bu projede kendi printf fonksiyonunuzu oluşturacaksınız.

## Installation / Kurulum

Follow the instructions in your terminal:
```bash
git clone https://github.com/berkeldemir/ft_printf.git
```
```bash
cd ft_printf
```
```bash
make
```

## Usage / Kullanım

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

## Code / Kod

