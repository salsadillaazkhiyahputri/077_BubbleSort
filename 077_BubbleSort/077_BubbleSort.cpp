#include <iostream>
#include <string>
using namespace std;

int arr[20]; 
int n;


void input() { //procedur untuk input 
	while (true) {
		cout << "Masukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"
		}
	}
	cout << endl;
	cout << "====================" << endl;
	cout << "Masukkan elemen Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++) { // Looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << ": "; //Output ke layar
		cin >> arr[i];
	}
}
int main() {

}
