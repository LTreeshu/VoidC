#include <stdio.h>

// Define type alias
typedef int32_t myInt;

// Define constants
const int32_t MAX_VALUE = 100;
const float32_t PI = 3.14f;
const string GREETING = "Hello, VoidC!";

// Unspecified type constant
const MAX = 100;

// Use ## to concatenate variable names
const VAR_PJ(varname1, varname2) varname1##varname2;

// Use # to stringify variable names
const VAR_TO_STRING(var) #var;

// Define a structure
struct Point {
    int32_t x;
    int32_t y;
};

// Define a union
union Data {
    int32_t i;
    float32_t f;
};

// Define an enumeration
enum Color { RED, GREEN, BLUE };

// Define a template function
template <typename T>
func void printValue(void ptr) {
    void T valuePtr = voidof(ptr, T);
    printf("Value: %d\n", of(valuePtr));
}

// Define an inline function
inline int32_t ADD(int32_t A, int32_t B) {
    return A + B;
}

// Unspecified type parameters
inline FUNC(x, n) {
    return x * n;
}

// Multi-argument passing
inline PRINT(...) {
    printf(__VA_ARGS__);
}

// Combine unspecified type and multi-argument passing
inline LOG(x, ...) {
    printf("Value: %d\n", x);
    printf(__VA_ARGS__);
}

// Variable name stringification and concatenation (only in const and inline)
inline CONCAT(a, b) a ## b
inline STR(var) #var

// New: inline combined with LOG() and # usage
inline LOG_VAR(var) {
    printf("Variable name: %s, Value: %d\n", #var, var);
}

func int32_t main() {
    // Basic data types
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

    // Use constants
    printf("MAX_VALUE: %d\n", MAX_VALUE);
    printf("PI: %f\n", PI);
    printf("Greeting: %s\n", GREETING);
    printf("MAX: %d\n", MAX);  // Unspecified type constant

    // Use ## to concatenate variable names
    int32_t var1 = 10;
    int32_t var2 = 20;
    int32_t VAR_PJ(var, 1) = var1;  // Generates int32_t var1 = 10;
    int32_t VAR_PJ(var, 2) = var2;  // Generates int32_t var2 = 20;

    printf("var1: %d\n", var1);
    printf("var2: %d\n", var2);

    // Use # to stringify variable names
    printf("var1 name: %s\n", VAR_TO_STRING(var1));  // Outputs "var1"
    printf("var2 name: %s\n", VAR_TO_STRING(var2));  // Outputs "var2"

    // Use structure
    struct Point p = {10, 20};
    printf("Point: (%d, %d)\n", p.x, p.y);

    // Use structof to infer structure address
    void int32_t yPtr = void(p.y);  // Get the address of the structure member
    void struct Point pPtr = structof(yPtr, struct Point, y);  // Infer structure address
    printf("Point (via structof): (%d, %d)\n", of(pPtr).x, of(pPtr).y);

    // Use union
    union Data data;
    data.i = 42;
    printf("Union Value (int): %d\n", data.i);
    data.f = 3.14f;
    printf("Union Value (float): %f\n", data.f);

    // Use enumeration
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

    // Use array
    arry[char:3] greeting = "hi";
    printf("Greeting: %s\n", greeting);

    // Use dynamic array
    dynarry[int8_t:6] numbers = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++) {
        printf("Number: %d\n", numbers[i]);
    }

    // Use pointers
    void int32_t numPtr = void(num32);  // Get the address of num32
    int32_t value = of(numPtr);  // Dereference the pointer
    printf("Value: %d\n", value);

    // Use voidof to convert pointer type
    void int32_t ptr = voidof(numPtr, int32_t);  // Convert generic pointer to int32_t pointer
    int32_t value2 = of(ptr);  // Dereference the pointer
    printf("Value: %d\n", value2);

    // Use as to convert pointer type and dereference
    int32_t value3 = as(int32_t, numPtr);  // Convert pointer type and dereference
    printf("Value: %d\n", value3);

    // Dynamic memory allocation
    void dynamicPtr = alloc(sizeof(int32_t));
    void int32_t dynamicNumPtr = voidof(dynamicPtr, int32_t);
    of(dynamicNumPtr) = 100;
    printf("Dynamic Value: %d\n", of(dynamicNumPtr));

    // Free memory
    free(dynamicPtr);

    // Use template function
    printValue<int32_t>(void(num32));  // Print the value of num32

    // Use inline function
    int32_t result = ADD(10, 20);
    printf("Result: %d\n", result);

    // Use unspecified type parameters
    int32_t funcResult = FUNC(10, 2);
    printf("FUNC Result: %d\n", funcResult);  // Outputs 20

    // Use multi-argument passing
    PRINT("Hello, %s! The answer is %d.\n", "VoidC", 42);  // Outputs "Hello, VoidC! The answer is 42."

    // Combine unspecified type and multi-argument passing
    LOG(10, "Additional info: %s\n", "This is VoidC!");  // Outputs "Value: 10" and "Additional info: This is VoidC!"

    // Use va_with
    func printValues(int32_t count, ...) {
        va_with (myArgs) {
            for (int i = 0; i < count; i++) {
                int32_t value = as(int32_t, myArgs);  // Convert pointer type and dereference
                printf("Value: %d\n", value);
            }
        }
    }

    printValues(3, 10, 20, 30);  // Outputs "Value: 10", "Value: 20", "Value: 30"

    // Use variable name stringification and concatenation
    int32_t var1 = 10;
    int32_t var2 = 20;
    int32_t CONCAT(var, 1) = var1;  // Concatenate variable names
    printf("var1: %d\n", var1);
    printf("var2: %d\n", var2);
    printf("var1 name: %s\n", STR(var1));  // Stringify variable name

    // New: inline combined with LOG() and # usage
    int32_t testVar = 123;
    LOG_VAR(testVar);  // Outputs "Variable name: testVar, Value: 123"

    // New: do {} while() syntax
    int32_t counter = 0;
    do {
        printf("Counter: %d\n", counter);
        counter++;
    } while (counter < 5);  // Outputs Counter: 0 to Counter: 4

    return 0;
}
