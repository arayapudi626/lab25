#include <iostream>
#include <chrono>
#include <fstream>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <algorithm>
using namespace std;
using namespace std::chrono;

//READING
int readVector(string& filename, vector<string>& vec){

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
    string line;

    auto start = high_resolution_clock::now();
    ifstream fin2("codes.txt");
   while 
    (getline(fin2, line));{
       lst.push_back(line);
    }
    auto end = high_resolution_clock::now();
    return duration_cast<milliseconds>(end-start).count();

}

int readSet(string& filename, set<string>& st){
    string line;

    auto start = high_resolution_clock::now();
    ifstream fin3("codes.txt");
   while 
    (getline(fin3, line));{
       st.insert(line);
    }
    auto end = high_resolution_clock::now();
    return duration_cast<milliseconds>(end-start).count();

}

//SORTING
int sortVector(vector<string>& vec) {
auto start = high_resolution_clock::now();
sort(vec.begin(), vec.end());
auto end = high_resolution_clock::now();

return duration_cast<milliseconds>(end-start).count();
}

int sortList(list<string>& lst) {
auto start = high_resolution_clock::now();
lst.sort();
auto end = high_resolution_clock::now();

return duration_cast<milliseconds>(end-start).count();
}

/*int sortSet(set<string>& st) {
auto start = high_resolution_clock::now();
//automatic sorting
auto end = high_resolution_clock::now();

return duration_cast<milliseconds>(end-start).count();
} */

//INSERT
int insertVector(vector<string>& vec, const string& val) {
    auto start = high_resolution_clock::now();
    int mid = vec.size()/ 2;
    vec.insert(vec.begin() + mid, val);
    auto end = high_resolution_clock::now();
    return duration_cast<milliseconds>(end - start).count();

}
int insertList(list<string>& lst, const string& val) {
    auto start = high_resolution_clock::now();
    list<string>::iterator it = lst.begin();
    int mid = lst.size()/ 2;
    for (int i = 0; i < mid; i++){
        it++;
    }
    lst.insert(it, val);
    auto end = high_resolution_clock::now();
    return duration_cast<milliseconds>(end - start).count();

}
int insertSet(set<string>& st, const string& val) {
    auto start = high_resolution_clock::now();
    st.insert(val);
    auto end = high_resolution_clock::now();
    return duration_cast<milliseconds>(end - start).count();

}
//DELETE


int main() {

vector<string> vec;
list<string> lst;
set<string> st;

string file = "codes.txt";

int vecRead = readVector(file, vec);
int listRead = readList(file, lst);
int setRead = readSet(file, st);

int vecSort = sortVector(vec);
int listSort = sortList(lst);
//int setSort = sortSet(file, st);

string insert = "HI";
int vecInsert = insertVector(vec, insert);
int listInsert = insertList(lst, insert);
int setInsert = insertSet(st, insert);
    


    //output
cout << " vec Read time: " << vecRead;
cout << " list Read time: " << listRead;
cout << " set Read time: " << setRead;

cout << " vec sort time: " << vecSort;
cout << " list sort time: " << listSort;
//cout << " set Read time: " << setSort;

cout << " vec insert time: " << vecInsert;
cout << " list insert time: " << listInsert;
cout << " set insert time: " << setInsert;



    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/