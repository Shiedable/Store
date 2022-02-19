#include <vector>

#include "Cashier.h"

void main()
{

	std::vector<Product*> cart;

	cart.push_back(new food_and_beverage("apples", "BrandA", 1.50f, "2021-06-14", 2.45));
	cart.push_back(new food_and_beverage("milk", "BrandM", 0.99f, "2022-02-02", 3.0));
	cart.push_back(new cloth("T-shirt", "BrandT", 15.99f, "M", "violet", 2.0));
	cart.push_back(new Appliance("laptop", "BrandL", 2345, "ModelL", "2021-03-03", 1.125, 1.0));

	cashier receipt;
	receipt.print_receipt(cart, "2021-06-14 12:34:56");

}