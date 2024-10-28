#include<iostream>
using namespace std;
void dockingcountdown();
void truck_weight_check(int load_weight);
void school_zone_signal(string signal_color);
int get_ticket_price(int visitor_age);
void verify_username();
int main() {

	dockingcountdown();
	truck_weight_check(1201);
	school_zone_signal("red");
	cout<<get_ticket_price(5);
	verify_username();


}
void dockingcountdown() {
	int num = 20;
	while (num > 0) {
		cout << num << " ";
		num -= 3;

	}
	cout << "docking Complete" << endl;
}
void truck_weight_check(int load_weight) {
	if (load_weight > 1200) {
		cout << "Overweight" << endl;

	}
	else {
		cout << "Within Limit" << endl;
	}	
}
void school_zone_signal(string signal_color) {
	if (signal_color == "red") {
		cout << "STOP!" << endl;
	}
	else if (signal_color == "yellow") {
		cout << "Be Ready" << endl;
	}
	else if (signal_color == "green") {
		cout << "Proceed" << endl;
	}
}

int get_ticket_price(int visitor_age) {
	
	if (visitor_age <= 10) {
		
		return 8;
	}
	else if (visitor_age <60) {
		return 18;
	}
	else{
		return 12;
	}
}
void verify_username() {
	string choice = " ";
	while (choice != "CodeMaster123") {
		cout << "Type CodeMaster123 to Quit" << endl;
		cin >> choice;
		if (choice == "CodeMaster123") {
			cout << "Access Granted" << endl;
		}
	}
}


