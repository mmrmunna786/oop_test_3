/*
 * a namespace is a named region used for declaring different types, these types could be functions, classes, structures, variables.
 * the types are not visible outside the namespace.
 * standard library is in std namespace
 * a namespace can help prevent name clashes.
        namespace <name> {
            (namespace, class, structure, function, variable etc.)
        }
 * Types inside a namespace have a scope
 * cannot be accessed outside the namespace or the type
    * use the global using declarative and open the entire namespace
        using namespace std;
    * use the using declarative and open a specific type
        using std::cout;
 */


#include <iostream>

// creating two functions with the same name and parameters:
//float Calculate(float x, float y){
//    return (x+y)/2;
//}
//
//float Calculate(float x, float y){
//    return x+y;
//}
// this gives error, hence, we will have to put these functions inside a namespace like so:

// this is the correct way to implement the namespace while having the same name in both the functions. NOte that this is different than
// function overloading.
namespace Avg {
    float Calculate(float x, float y) {
        return (x + y) / 2;
    }
}
namespace Basic {
    float Calculate(float x, float y) {
        return x + y;
    }
}

int main() {
    // way to access the function using namespace is like so:
    std::cout << Avg::Calculate(5.1, 2.5);

    return 0;
}
