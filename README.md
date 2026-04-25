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
link "libhttp.so" http

alias http_client = http.http_client
alias time = stdlib.time

const ConstValue i8 = 100

multireturn struct{
    value1 u8
    value u8
}

const main() 
{
    puts("Program starting\n")

    // Dynamic memory allocation
    flow dynptr void = malloc(i32)

    // Pointer operations
    dynptr.() = ConstValue
    dynptr.(i8) = ConstValue

    // Array operations
    arry f32[3] = {1.1, 1.2, 1.3}
    ptr void[3] = &arry
    ptrarry void[3] = {&arry[2], &arry[1], &arry[0]}
    ptrarry2 void[][3] = &ptrarry

    ptrarry2[][1].() = 2.1

    // Visibility checking
    if visof(staticptr) == _static {
        flow temp void = malloc(float32)
    }

    if visof(dynptr) == _flow {
        puts("the ptr is _flow attribute \n");
    }

    // Multiple return value handling
    returnValue multireturn = calculate()

    return
    /* If the flow variable: dynptr, temp, is not returned,
     * they will be automatically free.
    */
}

const calculate() multireturn  
{
    if visof(value) != _undef {
      return {0,0}
    }
    else if visof(ConstValue) == _static {
      return {ConstValue, (ConstValue*2)}
    }
}

// Inline function definition
inline add(a int, b int)
{
    return (a+b)
}

// Compile-time definitions

// Compile-time type define 
cooking arry_i8_t struct {
    icopy const(size_t, arry_i8_t)
    arry i8[...]
}

// Compile-time array copy function definition
cooking icopy(len size_t, src arry_i8_t){
    target arry_i8_t = holdof(icopy)
    target.arry.(struct{_ i8[len]}) = src.arry.(struct{_ i8[len]})

}

// Compile-time maker function definition
cooking obj_maker(len size_t) struct 
{
    return {
        .icopy = icopy
        .arry  = i8[len]
    }
}

// Assign values at compile time
cooking PI = 3.1415926
// Assign values at initialization time
const DoublePI f64 = PI * 2

cooking {
    // Compile-time calculation
    const COMPILE_TIME_VALUE i32 = 10 * 20 + 5
    
    // Compile-time assert
    static_assert(sizeof(i32) == 4, "i32必须是4字节")
    static_assert(COMPILE_TIME_VALUE == 205, "编译期计算错误")
}

```
