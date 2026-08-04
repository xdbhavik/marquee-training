#include </home/bhavik/Documents/abcpp/java.hpp>

// Import Java packages via namespaces
using namespace java::lang;
using namespace java::util;
using namespace java::literals;
using namespace java::operators;

int main() {
    // 1. Print output using Java syntax
    System.out.println("=== Welcome to Java++ ===");

    ArrayList<String> languages;
    languages << "Java"_String << "C++"_String << "Python"_String;
    languages += "Rust"_String;

    System.out.println("Languages: " + Arrays::toString(languages));

    HashMap<String, Integer> scores;
    scores["Java++"_String] = 100_i;
    scores["C++"_String]    = 99_i;

    System.out.println("Java++ Score: " + Integer::toString(scores["Java++"_String]));

    System.out.println("Math::PI = " + Double::toString(Math::PI));
    System.out.println("Math::sqrt(144) = " + Double::toString(Math::sqrt(144.0)));
    System.out.println("Integer::MAX_VALUE = " + Integer::toString(Integer::MAX_VALUE));

    return 0;
}
