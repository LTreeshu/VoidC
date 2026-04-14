# NiHao

A new better C language for my fantasy， a better programing world for void !

一个新的 "better C" 语言，给void一个更好的编程世界!

语法文档|Document

[中文](./Chinese.md) | [English](./English.md)

Source code example demonstration:
源码展示:

```c
module main
use stdio
use stdlib
link "libhttp.so" as http

alias http_client = http.http_client
alias time = stdlib.time

const ConstValue i8 = 100

multireturn struct{
    value1 u8
    value u8
}

const main() {
    puts("Program starting\n")

    // Dynamic memory allocation
    flow dynptr void = malloc(i32)

    // Pointer operations
    dynptr.(i32) = ConstValue

    // Array operations
    arry f32[3] = {1.1, 1.2, 1.3}
    ptrarry void[3] = {&arry[0], &arry[1], &arry[2]}

    // Visibility checking
    if visof(staticptr) == _static {
        flow temp void = malloc(float32)
    }

    if visof(dynptr) == _flow {
        puts("the ptr is _flow attribute \n");
    }

    // Multiple return value handling
}

const calculate() multireturn  {
    if visof(value) != _undef 
    {
      return 0,0
    }
    elif visof(ConstValue) == _static
    {
      return {ConstValue, (ConstValue*2)}
    }
}
```