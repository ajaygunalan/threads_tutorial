#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void run(int count) {
	while(count --> 0)
		cout << "Inside run" <<endl;
}

int main() {
	std::thread t1(run, 10);
	t1.join();
	return 0;
}