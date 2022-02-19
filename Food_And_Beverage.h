#pragma once

#include "Product.h"

class food_and_beverage final :
	public Product
{

	std::string expiration_date_;

public:

	food_and_beverage(std::string name, std::string brand, float price, std::string exp_date, float quantity);

	void set_exp_date(std::string exp_date);

	std::string get_exp_date() override;

};

