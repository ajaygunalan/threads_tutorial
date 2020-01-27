#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void run(int count) {
	while(count --> 0)
		cout << count <<"Inside run" <<endl;
	std::this_thread::sleep_for(chrono::seconds(3));
}

int main() {
	std::thread t1(run, 10);
	cout << "Before Join \n" << endl;
	
	t1.detach();


	if (t1.joinable())
		t1.detach();
	cout << "After Join  \n" << endl;
	return 0;
}