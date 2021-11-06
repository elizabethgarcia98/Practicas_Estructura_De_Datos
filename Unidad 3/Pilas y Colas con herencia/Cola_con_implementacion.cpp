#include <iostream>
#include <queue>

using namespace std;

int main(){
	
	queue <int> q;
	
	q.push(20);
	q.push(21);
	q.push(22);
	q.push(23);
	q.push(24);
	q.push(25);
	q.push(26);
	q.push(27);
	q.push(28);
	q.push(29);
	q.push(30);
	
	cout << "Tamanio de la cola: " << q.size() << endl;
	cout << "Fente de la cola: " << q.front() << endl;
	cout << "Final de la cola: " << q.back() << endl;
	queue <int> q1;
	
	q1 = q;
	
	while(!q1.empty()){
		cout << q1.front() << endl;
		q1.pop();
	}
	
	return 0;
}
