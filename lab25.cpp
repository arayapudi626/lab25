#include <iostream>
#include <chrono>
#include <fstream>
#include <string>
#include <vector>
#include <list>
#include <set>
using namespace std;
using namespace std::chrono;

//READING
int readVector(string& filename, vector<string>& vec){
    ifstream fin(filename);
    string line;

    auto start = high_resolution_clock::now();
    ifstream fin("codes.txt");
   while 
    (getline(fin, line));{
       vec.push_back(line);
    }
    auto end = high_resolution_clock::now();
    return duration_cast<milliseconds>(end-start).count();
   // cout << "TIME: " << duration.count();

}

int readList(string& filename, list<string>& lst){
    ifstream fin(filename);
    string line;

    auto start = high_resolution_clock::now();
    ifstream fin("codes.txt");
   while 
    (getline(fin, line));{
       lst.push_back(line);
    }
    auto end = high_resolution_clock::now();
    return duration_cast<milliseconds>(end-start).count();

}

int readSet(string& filename, set<string>& st){
    ifstream fin(filename);
    string line;

    auto start = high_resolution_clock::now();
    ifstream fin("codes.txt");
   while 
    (getline(fin, line));{
       st.insert(line);
    }
    auto end = high_resolution_clock::now();
    return duration_cast<milliseconds>(end-start).count();

}

int main() {

vector<string> vec;
list<string> lst;
set<string> st;

string file = "codes.txt";

int vecRead = readVector(file, vec);
int listRead = readList(file, lst);
int setRead = readSet(file, st);;

    


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