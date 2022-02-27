#include <iostream>
#include <climits>

using namespace std;

int main()
{
	const float price_per_small_room{ 25.0 };
	const float price_per_large_room{ 35.0 };
	const float tax_percent{ 0.06 };

	int small_rooms_to_be_cleaned{ 0 };
	int large_rooms_to_be_cleaned{ 0 };
	float price_for_small_rooms{ 0 };
	float price_for_large_rooms{ 0 };
	float price_for_all_rooms{ 0 };
	float sales_tax{ 0 };
	float total_price{ 0 };

	cout << "Welcome to Frank's Carpet Cleaning Service" << endl;
	cout << "Enter the amount of small rooms you would like cleaned: ";
	cin >> small_rooms_to_be_cleaned;
	cout << "Enter the amount of large rooms you would like cleaned: ";
	cin >> large_rooms_to_be_cleaned;

	price_for_small_rooms = small_rooms_to_be_cleaned * price_per_small_room;
	price_for_large_rooms = large_rooms_to_be_cleaned * price_per_large_room;
	price_for_all_rooms = price_for_large_rooms + price_for_small_rooms;
	sales_tax = price_for_all_rooms * tax_percent;
	total_price = price_for_all_rooms + sales_tax;

	cout << "Estimate for carpet cleaning service:" << endl;
	cout << "Number of small rooms: " << small_rooms_to_be_cleaned << endl;
	cout << "Number of large rooms: " << large_rooms_to_be_cleaned << endl;
	cout << "Price per small room: $" << price_per_small_room << endl;
	cout << "Price per large room: $" << price_per_large_room << endl;
	cout << "Cost: $" << price_for_all_rooms << endl;
	cout << "Tax: $" << sales_tax << endl;
	cout << "=================================" << endl;
	cout << "Total estimate: $" << total_price << endl;
	cout << "This estimate is valid for 30 days" << endl;



	return 0;
}