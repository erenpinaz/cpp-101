// google-cpp-next-exer2.cpp: Eren Pinaz
// Description: Google cpp next steps Exercise#2

#include <iostream>
#include <math.h>
#include <optional>

using namespace std;

const float kDiscountPct = 0.8;

struct Book {
	string code;
	float price;
	int inventory;
	int enrollment;
	bool required;
	bool not_used;

	void print_info() {
		cout << "Book: " << code << endl;
		cout << "Price: " << price << endl;
		cout << "Inventory: " << inventory << endl;
		cout << "Enrollment: " << enrollment << endl;

		cout << endl;

		if (required && not_used)
			cout << "This book is required and new." << endl;
		else if (!required && !not_used)
			cout << "This book is optional and used." << endl;
		else if (required && !not_used)
			cout << "This book is required and used." << endl;
		else
			cout << "This book is optional and new." << endl;

		cout << "***************************************************" << endl;
	}

	float calculate_order_cost() {
		int order_count;
		float cost;

		if (required && not_used)
			order_count = enrollment * 0.90;
		else if (!required && !not_used)
			order_count = enrollment * 0.20;
		else if (required && !not_used)
			order_count = enrollment * 0.65;
		else
			order_count = enrollment * 0.40;

		order_count = order_count - inventory;
		cost = order_count * price;

		cout << "Need to order: " << order_count << endl;
		cout << "Total cost: " << cost << endl;
		cout << "***************************************************" << endl;

		return cost;
	}
};

void GetUserInput(Book& b) {
	cout << "Please enter the book code: "; cin >> b.code;
	cout << "	single copy price: "; cin >> b.price;
	cout << "	number on hand: "; cin >> b.inventory;
	cout << "	prospective enrollment: "; cin >> b.enrollment;
	cout << "	1 for reqd/0 for optional: "; cin >> b.required;
	cout << "	1 for new/0 for used: "; cin >> b.not_used;
	cout << "***************************************************" << endl;
}

int main(int argc, char const *argv[]) {
	int input;
	float total_cost;
	
	do
	{
		Book b;
		GetUserInput(b);
		
		b.print_info();
		total_cost += b.calculate_order_cost();

		cout << "Enter 1 to do another book, 0 to stop. " << endl;
		cin >> input;
	} while (input != 0);

	cout << "Total for all orders: " << total_cost << endl;
	cout << "Profit: " << total_cost - (total_cost * kDiscountPct) << endl;
	
	return 0; 
}