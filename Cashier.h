#pragma once

#include <vector>

#include "Cloth.h"
#include "Appliance.h"
#include "Food_And_Beverage.h"

class cashier
{
public:

	void print_receipt(std::vector<Product*> cart, std::string date_and_time_of_purchase);

};

