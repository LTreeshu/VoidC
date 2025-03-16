以下是 **VoidC 语言** 的 **最终语法表** 和 **完整示例代码**，包含了所有核心特性和语法规则。

---

## VoidC 语言最终语法表

### 1. **基本数据类型**

| 类型           | 描述              | 示例                      |
| ------------ | --------------- | ----------------------- |
| `int8_t`     | 8 位有符号整型        | `int8_t num = 42;`      |
| `int16_t`    | 16 位有符号整型       | `int16_t num = 42;`     |
| `int32_t`    | 32 位有符号整型       | `int32_t num = 42;`     |
| `int64_t`    | 64 位有符号整型       | `int64_t num = 42;`     |
| `uint8_t`    | 8 位无符号整型        | `uint8_t num = 42;`     |
| `uint16_t`   | 16 位无符号整型       | `uint16_t num = 42;`    |
| `uint32_t`   | 32 位无符号整型       | `uint32_t num = 42;`    |
| `uint64_t`   | 64 位无符号整型       | `uint64_t num = 42;`    |
| `float32_t`  | 32 位单精度浮点型      | `float32_t pi = 3.14f;` |
| `float64_t`  | 64 位双精度浮点型      | `float64_t pi = 3.14;`  |
| `fixedf32_t` | 32 位定点数（Q16.16） | `fixedf32_t num = 1.5;` |
| `fixedf64_t` | 64 位定点数（Q32.32） | `fixedf64_t num = 1.5;` |
| `char`       | 字符类型            | `char ch = 'A';`        |
| `string`     | 字符串类型           | `string str = "Hello";` |

---

### 2. **类型定义与类型判断**

| 语法         | 描述      | 示例                       |
| ---------- | ------- | ------------------------ |
| `typedef`  | 定义类型别名  | `typedef int32_t myInt;` |
| `typeof()` | 获取变量的类型 | `typeof(myVar) varType;` |

---

### 3. **类型对齐**

| 语法             | 描述         | 示例                    |
| -------------- | ---------- | --------------------- |
| `typepack n{}` | 指定结构体的对齐方式 | `typepack 4 { ... };` |

---

### 4. **类型长度**

| 语法         | 描述           | 示例                               |
| ---------- | ------------ | -------------------------------- |
| `sizeof()` | 获取类型或变量的字节大小 | `size_t size = sizeof(int32_t);` |

---

### 5. **指针类型**

| 语法                | 描述            | 示例                    |
| ----------------- | ------------- | --------------------- |
| `void`            | 通用指针类型        | `void ptr;`           |
| `void type ptr`   | 单重指针          | `void int32_t ptr;`   |
| `void n type ptr` | 多重指针（`n` 为层级） | `void 2 int32_t ptr;` |
| `void n void ptr` | 通用多重指针        | `void 2 void ptr;`    |

---

### 6. **解引用指针**

| 语法              | 描述              | 示例                                         |
| --------------- | --------------- | ------------------------------------------ |
| `of()`          | 解引用指针           | `int32_t value = of(ptr);`                 |
| `voidof()`      | 将通用指针还原为具体类型的指针 | `void int32_t ptr = voidof(ptr, int32_t);` |
| `as(type, ptr)` | 转换指针类型并解引用      | `int32_t value = as(int32_t, ptr);`        |

---

### 7. **获取变量地址**

| 语法       | 描述      | 示例                      |
| -------- | ------- | ----------------------- |
| `void()` | 获取变量的地址 | `void ptr = void(num);` |

---

### 8. **内存管理**

| 语法        | 描述     | 示例                                   |
| --------- | ------ | ------------------------------------ |
| `alloc()` | 动态分配内存 | `void ptr = alloc(sizeof(int32_t));` |
| `free()`  | 释放内存   | `free(ptr);`                         |

---

### 9. **结构体、共用体和枚举**

| 语法       | 描述     | 示例                                        |
| -------- | ------ | ----------------------------------------- |
| `struct` | 定义结构体  | `struct Point { int32_t x; int32_t y; };` |
| `union`  | 定义共用体  | `union Data { int32_t i; float32_t f; };` |
| `enum`   | 定义枚举类型 | `enum Color { RED, GREEN, BLUE };`        |

---

### 10. **数组和动态数组**

| 语法                | 描述     | 示例                                                |
| ----------------- | ------ | ------------------------------------------------- |
| `arry[type:n]`    | 固定大小数组 | `arry[char:3] greeting = "hi";`                   |
| `dynarry[type:n]` | 动态数组   | `dynarry[int8_t:6] numbers = {1, 2, 3, 4, 5, 6};` |

---

### 11. **成员的结构**

| 语法           | 描述            | 示例                                                      |
| ------------ | ------------- | ------------------------------------------------------- |
| `structof()` | 通过成员地址推断结构体地址 | `void struct Point pPtr = structof(yPtr, struct Point, y);` |

---

### 12. **函数定义**

| 语法     | 描述   | 示例                                                         |
| ------ | ---- | ---------------------------------------------------------- |
| `func` | 定义函数 | `func int32_t add(int32_t a, int32_t b) { return a + b; }` |

---

### 13. **控制流**

| 语法            | 描述    | 示例                                     |
| ------------- | ----- | -------------------------------------- |
| `if`          | 条件语句  | `if (a > b) { ... }`                   |
| `else`        | 条件语句  | `else { ... }`                         |
| `for`         | 循环语句  | `for (int i = 0; i < 10; i++) { ... }` |
| `while`       | 循环语句  | `while (a > 0) { ... }`                |
| `do {} while` | 循环语句  | `do { ... } while (a > 0);`            |
| `switch`      | 多分支语句 | `switch (value) { case 1: ... }`       |

---

### 14. **常量定义**

| 语法                    | 描述      | 示例                                                     |
| --------------------- | ------- | ------------------------------------------------------ |
| `const`               | 定义常量    | `const int32_t MAX_VALUE = 100;`                       |
| `const string`        | 定义字符串常量 | `const string GREETING = "Hello";`                     |
| `const` 不指明类型         | 直接字符替换  | `const MAX = 100;`                                     |
| `const` 使用 `##` 拼接变量名 | 拼接变量名   | `const VAR_PJ(varname1, varname2) varname1##varname2;` |
| `const` 使用 `#` 变量名字符化 | 变量名字符化  | `const VAR_TO_STRING(var) #var;`                       |

---

### 15. **内联函数**

| 语法                    | 描述            | 示例                                                                       |
| --------------------- | ------------- | ------------------------------------------------------------------------ |
| `inline`              | 定义内联函数        | `inline int32_t ADD(int32_t A, int32_t B) { return A + B; }`             |
| `inline FUNC(x, n)`   | 不指明类型的参数      | `inline FUNC(x, n) { return x * n; }`                                    |
| `inline FUNC(...)`    | 多参数传递         | `inline FUNC(...) { printf(__VA_ARGS__); }`                              |
| `inline FUNC(x, ...)` | 结合不指明类型和多参数传递 | `inline FUNC(x, ...) { printf("Value: %d\n", x); printf(__VA_ARGS__); }` |

---

### 16. **可变参数处理**

| 语法              | 描述         | 示例                                     |
| --------------- | ---------- | -------------------------------------- |
| `va_with {}`    | 定义可变参数的作用域 | `va_with (myArgs) { ... }`             |
| `as(type, ptr)` | 转换指针类型并解引用 | `int32_t value = as(int32_t, myArgs);` |

---

### 17. **变量名字符化与字符拼接**

| 语法   | 描述     | 示例             |
| ---- | ------ | -------------- |
| `#`  | 变量名字符化 | `#var`         |
| `##` | 字符拼接   | `var1 ## var2` |

---

### 18. **其他语法**

| 语法         | 描述   | 示例           |
| ---------- | ---- | ------------ |
| `return`   | 返回值  | `return 42;` |
| `break`    | 跳出循环 | `break;`     |
| `continue` | 继续循环 | `continue;`  |

---

## 最终示例代码

```c
#include <stdio.h>

// 定义类型别名
typedef int32_t myInt;

// 定义常量
const int32_t MAX_VALUE = 100;
const float32_t PI = 3.14f;
const string GREETING = "Hello, VoidC!";

// 不指明类型的常量
const MAX = 100;

// 使用 ## 拼接变量名
const VAR_PJ(varname1, varname2) varname1##varname2;

// 使用 # 变量名字符化
const VAR_TO_STRING(var) #var;

// 定义结构体
struct Point {
    int32_t x;
    int32_t y;
};

// 定义共用体
union Data {
    int32_t i;
    float32_t f;
};

// 定义枚举类型
enum Color { RED, GREEN, BLUE };

// 定义模板函数
template <typename T>
func void printValue(void ptr) {
    void T valuePtr = voidof(ptr, T);
    printf("Value: %d\n", of(valuePtr));
}

// 定义内联函数
inline int32_t ADD(int32_t A, int32_t B) {
    return A + B;
}

// 不指明类型的参数
inline FUNC(x, n) {
    return x * n;
}

// 多参数传递
inline PRINT(...) {
    printf(__VA_ARGS__);
}

// 结合不指明类型和多参数传递
inline LOG(x, ...) {
    printf("Value: %d\n", x);
    printf(__VA_ARGS__);
}

// 变量名字符化与字符拼接（仅在 const 和 inline 中使用）
inline CONCAT(a, b) a ## b
inline STR(var) #var

// 新增：inline 结合 LOG() 和 # 用法
inline LOG_VAR(var) {
    printf("Variable name: %s, Value: %d\n", #var, var);
}

func int32_t main() {
    // 基本数据类型
    int8_t num8 = 42;
    int16_t num16 = 42;
    int32_t num32 = 42;
    int64_t num64 = 42;
    uint8_t unum8 = 42;
    uint16_t unum16 = 42;
    uint32_t unum32 = 42;
    uint64_t unum64 = 42;
    float32_t pi32 = 3.14f;
    float64_t pi64 = 3.14;
    fixedf32_t fixed32 = 1.5;
    fixedf64_t fixed64 = 1.5;
    char ch = 'A';
    string str = "Hello, VoidC!";

    // 使用常量
    printf("MAX_VALUE: %d\n", MAX_VALUE);
    printf("PI: %f\n", PI);
    printf("Greeting: %s\n", GREETING);
    printf("MAX: %d\n", MAX);  // 不指明类型的常量

    // 使用 ## 拼接变量名
    int32_t var1 = 10;
    int32_t var2 = 20;
    int32_t VAR_PJ(var, 1) = var1;  // 生成 int32_t var1 = 10;
    int32_t VAR_PJ(var, 2) = var2;  // 生成 int32_t var2 = 20;

    printf("var1: %d\n", var1);
    printf("var2: %d\n", var2);

    // 使用 # 变量名字符化
    printf("var1 name: %s\n", VAR_TO_STRING(var1));  // 输出 "var1"
    printf("var2 name: %s\n", VAR_TO_STRING(var2));  // 输出 "var2"

    // 使用结构体
    struct Point p = {10, 20};
    printf("Point: (%d, %d)\n", p.x, p.y);

    // 使用 structof 推断结构体地址
    void int32_t yPtr = void(p.y);  // 获取结构体成员的地址
    void struct Point pPtr = structof(yPtr, struct Point, y);  // 推断结构体地址
    printf("Point (via structof): (%d, %d)\n", of(pPtr).x, of(pPtr).y);

    // 使用共用体
    union Data data;
    data.i = 42;
    printf("Union Value (int): %d\n", data.i);
    data.f = 3.14f;
    printf("Union Value (float): %f\n", data.f);

    // 使用枚举
    enum Color color = GREEN;
    switch (color) {
        case RED:
            printf("Color: RED\n");
            break;
        case GREEN:
            printf("Color: GREEN\n");
            break;
        case BLUE:
            printf("Color: BLUE\n");
            break;
    }

    // 使用数组
    arry[char:3] greeting = "hi";
    printf("Greeting: %s\n", greeting);

    // 使用动态数组
    dynarry[int8_t:6] numbers = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++) {
        printf("Number: %d\n", numbers[i]);
    }

    // 使用指针
    void int32_t numPtr = void(num32);  // 获取 num32 的地址
    int32_t value = of(numPtr);  // 解引用指针
    printf("Value: %d\n", value);

    // 使用 voidof 转换指针类型
    void int32_t ptr = voidof(numPtr, int32_t);  // 将通用指针转换为 int32_t 指针
    int32_t value2 = of(ptr);  // 解引用指针
    printf("Value: %d\n", value2);

    // 使用 as 转换指针类型并解引用
    int32_t value3 = as(int32_t, numPtr);  // 转换指针类型并解引用
    printf("Value: %d\n", value3);

    // 动态分配内存
    void dynamicPtr = alloc(sizeof(int32_t));
    void int32_t dynamicNumPtr = voidof(dynamicPtr, int32_t);
    of(dynamicNumPtr) = 100;
    printf("Dynamic Value: %d\n", of(dynamicNumPtr));

    // 释放内存
    free(dynamicPtr);

    // 使用模板函数
    printValue<int32_t>(void(num32));  // 打印 num32 的值

    // 使用内联函数
    int32_t result = ADD(10, 20);
    printf("Result: %d\n", result);

    // 使用不指明类型的参数
    int32_t funcResult = FUNC(10, 2);
    printf("FUNC Result: %d\n", funcResult);  // 输出 20

    // 使用多参数传递
    PRINT("Hello, %s! The answer is %d.\n", "VoidC", 42);  // 输出 "Hello, VoidC! The answer is 42."

    // 使用结合不指明类型和多参数传递
    LOG(10, "Additional info: %s\n", "This is VoidC!");  // 输出 "Value: 10" 和 "Additional info: This is VoidC!"

    // 使用 va_with
    func printValues(int32_t count, ...) {
        va_with (myArgs) {
            for (int i = 0; i < count; i++) {
                int32_t value = as(int32_t, myArgs);  // 转换指针类型并解引用
                printf("Value: %d\n", value);
            }
        }
    }

    printValues(3, 10, 20, 30);  // 输出 "Value: 10", "Value: 20", "Value: 30"

    // 使用变量名字符化与字符拼接
    int32_t var1 = 10;
    int32_t var2 = 20;
    int32_t CONCAT(var, 1) = var1;  // 拼接变量名
    printf("var1: %d\n", var1);
    printf("var2: %d\n", var2);
    printf("var1 name: %s\n", STR(var1));  // 变量名字符化

    // 新增：inline 结合 LOG() 和 # 用法
    int32_t testVar = 123;
    LOG_VAR(testVar);  // 输出 "Variable name: testVar, Value: 123"

    // 新增：do {} while() 语法
    int32_t counter = 0;
    do {
        printf("Counter: %d\n", counter);
        counter++;
    } while (counter < 5);  // 输出 Counter: 0 到 Counter: 4

    return 0;
}
```

这就是​**VoidC 语言** 的核心语法与示例代码实现。该语言具备现代、安全且强大的特性，适用于系统编程和复杂数据结构的实现。希望本文档与代码能帮助您更好地理解和使用 ​**VoidC 语言**！

若有进一步需求或疑问，欢迎随时交流！💻✨ ​**♥**
