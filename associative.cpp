#include <iostream>
#include <set>
#include <map>

using namespace std;


int main(int argc, char *argv[]) {
    cout << "Key\tValue\n";
    string keys[] = {"Toronto", "New York", "Las Vegas", "Toronto", "Chicago", "New York", "Chicago"};
    int values[] = {5, 2, 5, 1, 2, 3 ,8};
    
    for (unsigned int i = 0; i < sizeof(values) / sizeof(values[0]); i++)
        cout << keys[i] << ' ' << values[i] << '\n';
    cout << '\n';
    
    
    cout << "Set desceding: ";
    set<int, greater<int>> books_id;
    for (auto &v: values) books_id.insert(v);
    for (auto &v: books_id) cout << v << ' ';
    cout << '\n';
    
    
    cout << "Multiset asceding: ";
    multiset<int> books_id2;
    for (auto &v: values) books_id2.insert(v);
    for (auto &v: books_id2) cout << v << ' ';
    cout << '\n';
    
    
    map<string, int> books_id3;
    for (unsigned int i = 0; i < sizeof(values) / sizeof(values[0]); i++)
        books_id3[keys[i]] = values[i];
	
    map<string, int>::iterator it = books_id3.begin();
    while (it != books_id3.end()) {
        cout << "Key: " << it->first << ", Value: " << it->second << '\n';
        it++;
    }
    cout << '\n';
    
    
    multimap<string, int> books_id4;
    for (unsigned int i = 0; i < sizeof(values) / sizeof(values[0]); i++)
        books_id4.insert(pair<string, int>(keys[i], values[i]));
	
    multimap<string, int>::iterator it2 = books_id4.begin();
    while (it2 != books_id4.end()) {
        cout << "Key: " << it2->first << ", Value: " << it2->second << '\n';
        it2++;
    }
    
    return 0;
}
