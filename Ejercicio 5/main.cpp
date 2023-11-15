#include <iostream>
#include <vector>
#include <map>
#include <set>

int main() {

    std::cout << "Vector: \n";
    std::vector<int> myVector = {1,2,3,4,5};

    myVector.push_back(6);

    std::cout << "Elementos en el vector:";
    for (const auto &element : myVector) {
        std::cout << " " << element;
    }

    std::cout << "\n";

    std::cout << "\nMap:\n";
    std::map<std::string, int> myMap;

    myMap["Uno"] = 1;
    myMap["Dos"] = 2;
    myMap["Tres"] = 3;

    std::cout << "Elementos en el mapa:\n";
    for (const auto &pair : myMap) {
        std::cout << pair.first << ": " << pair.second << "\n";
    }

    std::string keyToFind = "Dos";
    auto it = myMap.find(keyToFind);
    if (it != myMap.end()) {
        std::cout << keyToFind << " Encontrado en el mapa. Valor: " << it->second << "\n";
    } else {
        std::cout << keyToFind << " No encontrado en el mapa. \n";
    }

    std::cout << "\nSet:\n";
    std::set<int> mySet = {3,1,4,1,5,9,2,6,5};

    mySet.erase(1);

    std::cout << "Elementos unicos en el conjunto:";
    for (const auto &element : mySet) {
        std::cout << " " << element;
    }

    std::cout << "\n";
    return 0;
}