#include <iostream>
#include <queue>
#include <vector>


using namespace std;

struct Fruit {
	const char *name = new char[50];
	const char *color = new char[50];
	float weight;
	
	Fruit(const char *fname, const char *fcolor, float fweight) {
		name = fname;
		color = fcolor;
		weight = fweight;
	}
};

ostream& operator<<(ostream &os, const Fruit &fruit) {
	os << fruit.name << ';' << fruit.color << ';' << fruit.weight << '\n';
	return os;
}


void show_queue(queue<int>);

int main(int argc, char *argv[]) {
	queue <int>q;
	q.push(5);
	q.push(10);
	q.push(3);
	q.push(8);
	
	show_queue(q);
	
	// vector
	vector <Fruit>v;
	
	v.push_back(Fruit("apple", "red", 0.215));
	v.push_back(Fruit("banana", "yellow", 0.287));
	v.push_back(Fruit("peach", "light orange", 0.302));
	v.push_back(Fruit("watermelon", "green", 5.841));
	v.push_back(Fruit("pear", "light green", 0.23));
	
	for (unsigned int i = 0; i < v.size(); i++) cout << v[i];
	
	return 0;
}

void show_queue(queue <int>q) {
	cout << "Kolejka: ";
	while (!q.empty()) {
		cout << q.front() << ' ';
		q.pop();
	}
	cout << '\n';
}
