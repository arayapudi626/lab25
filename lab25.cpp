#include <iostream>
#include <chrono>
#include <fstream>
#include <string>
#include <vector>
#include <list>
#include <set>
using namespace std;
using namespace std::chrono;

vector<string> vec;
list<string> lst;
set<string> st;

int vecRead;
int listRead;
int setRead;

int main() {
    //reading
    //vector
    string line;
    auto start = high_resolution_clock::now();
    ifstream fin("codes.txt");
   while 
    (getline(fin, line));{
       vec.push_back(line);
    }
    auto end = high_resolution_clock::now();
    vecRead = duration_cast<milliseconds>(end-start).count();
   // cout << "TIME: " << duration.count();

   //list
   start = high_resolution_clock::now();
    ifstream fin2("codes.txt");
   while 
    (getline(fin2, line));{
       lst.push_back(line);
    }
    end = high_resolution_clock::now();
    listRead = duration_cast<milliseconds>(end-start).count();

    //set
    start = high_resolution_clock::now();
    ifstream fin3("codes.txt");
   while 
    (getline(fin3, line));{
       st.insert(line);
    }
    end = high_resolution_clock::now();
    setRead = duration_cast<milliseconds>(end-start).count();
    

    //output
cout << " vec Read time: " << vecRead;
cout << " list Read time: " << listRead;
cout << " set Read time: " << setRead;



    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/