## NihaoC Language Keywords and Syntax Elements Table

###### Reserved Keywords

- `const` Constant / function definition keyword
- `flow` Dynamically allocated variable declaration keyword
- `static` Static variable declaration keyword
- `var` Local variable declaration keyword
- `_const` Constant visibility attribute enumeration value
- `_flow` Dynamic visibility attribute enumeration value
- `_static` Static visibility attribute enumeration value
- `_undef` Undefined / invisible attribute enumeration value
- `_var` Local visibility attribute enumeration value
- `cooking {...}` Compile-time execution block keyword
- `align n {...}` Byte alignment block
- `module` Module definition
- `use` Module import
- `alias` Type alias
- `link ...` Static library export / usage
- `struct` Structure definition
- `union` Union definition
- `enum` Enumeration definition
- `typeof` Type inspection
- `sizeof` Get type size
- `alignof` Get type alignment size
- `offsetof` Get structure member offset
- `holdof` Get base address of the structure containing a member
- `if` Conditional branch
- `else` Else branch
- `for` Loop control
- `while` Loop control
- `do` Loop control
- `switch` Multi-way branch
- `case` Branch option
- `break` Break out of branch/loop
- `return` Function return
- `visof` Visibility check
- `malloc` Dynamic memory allocation

###### Type Keywords

- `void` Void type
- `bool` Boolean type
- `i8` 8-bit signed integer type
- `i16` 16-bit signed integer type
- `i32` 32-bit signed integer type
- `u8` 8-bit unsigned integer type
- `u16` 16-bit unsigned integer type
- `u32` 32-bit unsigned integer type
- `u64` 64-bit unsigned integer type
- `f32` 32-bit floating point type
- `f64` 64-bit floating point type
- `fx32` 32-bit fixed-point type
- `fx64` 64-bit fixed-point type
- `char` Character type
- `short` Character type
- `int` Character type
- `long` Character type
- `float` Character type
- `double` Character type

###### Reserved Operators

- `&` Address-of operator
- `=` Assignment operator
- `?=` Safe assignment operator (with pointer checking)
- `.` Structure/union member access
- `.()` Pointer dereference
- `.(type)` Type‑specified dereference (with built‑in bounds checking)
- `->` Structure/union pointer member access
- `{}` Code block / initializer list / multiple return values
- `()` Function call, type cast
- `[]` Array subscript
- `[start..end]` Array/slice range operator
- `?:` Conditional (ternary) operator
- `,` Comma operator

###### Arithmetic Operators

- `+` Addition
- `-` Subtraction, unary negation
- `*` Multiplication
- `/` Division
- `%` Modulo (remainder)
- `++` Increment (prefix or postfix)
- `--` Decrement (prefix or postfix)

###### Relational (Comparison) Operators

- `==` Equal to
- `!=` Not equal to
- `<` Less than
- `>` Greater than
- `<=` Less than or equal to
- `>=` Greater than or equal to

###### Logical Operators

- `&&` Logical AND
- `||` Logical OR
- `!` Logical NOT (unary)

###### Bitwise Operators

- `&` Bitwise AND
- `|` Bitwise OR
- `^` Bitwise XOR
- `~` Bitwise NOT (unary)
- `<<` Left shift
- `>>` Right shift

###### Assignment Operators

- `=` Simple assignment
- `+=` Addition assignment
- `-=` Subtraction assignment
- `*=` Multiplication assignment
- `/=` Division assignment
- `%=` Modulo assignment
- `&=` Bitwise AND assignment
- `|=` Bitwise OR assignment
- `^=` Bitwise XOR assignment
- `<<=` Left shift assignment
- `>>=` Right shift assignment

###### Other Operators

-