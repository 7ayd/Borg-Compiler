#include <iostream>
#include <list>
#include <cstring>
using namespace std;

class HashTable {
  private:
    static const int hashgroup = 10; 
    list <pair<int, string>> table[hashgroup]; 
};

int main() {
  std::cout << "Hello World!\n";
}