#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"

    int globalVar = 1;
    int globalVar1 = 0;
    int globalVar2;
    const int globalVar3 = 71;
    static int globalVar4 = 41;

int main(int argc, char **argv) {
    int globalVar5 = -11;
    const int globalVar6 = 71;
    static int globalVar7 = 41;
    int* heapVar = new int(3); // bereits eine Pointervariable

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);


    fmt::print("Hello, hier ist der Wert von global Value {}\n", globalVar);
    fmt::print("Hello, hier ist die Adresse von global Value {}\n", fmt::ptr(&globalVar));

    
    fmt::println("The value of [global] globalVar: {} the address of globalVar: {}", globalVar, fmt::ptr(&globalVar));
    fmt::println("The value of [global] globalVar1: {} the address of globalVar1: {}", globalVar1, fmt::ptr(&globalVar1));
    fmt::println("The value of [global] globalVar2: {} the address of globalVar2: {}", globalVar2, fmt::ptr(&globalVar2));
    fmt::println("The value of [global const] globalVar3: {} the address of globalVar3: {}", globalVar3, fmt::ptr(&globalVar3));
    fmt::println("The value of [global static] globalVar4: {} the address of globalVar4: {}", globalVar4, fmt::ptr(&globalVar4));
    fmt::println("The value of [main] globalVar5: {} the address of globalVar2: {}", globalVar5, fmt::ptr(&globalVar5));
    fmt::println("The value of [main const] globalVar6: {} the address of globalVar3: {}", globalVar6, fmt::ptr(&globalVar6));
    fmt::println("The value of [main static] globalVar7: {} the address of globalVar4: {}", globalVar7, fmt::ptr(&globalVar7));
    

    // Wert und Adresse ausgeben
    fmt::println("Heap-Variable - Wert: {}, Adresse: {}", *heapVar, fmt::ptr(heapVar)); //Kein Pointer & weil die Variable bereits ein pointer ist
    
    // Speicher wieder freigeben
    delete heapVar;
    heapVar = nullptr;
    /* INSERT YOUR CODE HERE */

    return 0; /* exit gracefully*/
}
