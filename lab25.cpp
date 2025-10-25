#include <iostream>
#include <chrono>
#include <fstream>
#include <string>
#include <vector>
#include <list>
#include <set>
using namespace std;
using namespace std::chrono;

int main() {
    //reading
    string line;
    auto start = high_resolution_clock::now();
    ifstream fin("codes.txt");
   while 
    (getline(fin, line));{
       cout << line << endl;
    }
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end-start);
    cout << "TIME: " << duration.count();
    

    //output



    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/