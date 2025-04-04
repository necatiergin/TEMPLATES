#include <iostream>
#include <map>
#include <string>

// std::map için bir alias template
template<typename K, typename V>
using Dictionary = std::map<K, V>;

int main() 
{
    Dictionary<std::string, std::string> dct = { 
        {"kitap", "book"}, 
        {"elma", "apple"} ,
        {"baba", "father"},
        {"masa", "table"},
    };

    for (const auto& [turkish, english] : dct) {
        std::cout << turkish << ": " << english << '\n';
    }
}

