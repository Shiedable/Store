#include "Food_And_Beverage.h"

food_and_beverage::food_and_beverage(std::string name, std::string brand, float price, std::string exp_date, float quantity)
{
	set_name(name);
	set_brand(brand);
	set_price_per_unit(price);
	set_exp_date(exp_date);
	set_quantity(quantity);
}

void food_and_beverage::set_exp_date(std::string exp_date)
{
	expiration_date_ = exp_date;
}

std::string food_and_beverage::get_exp_date()
{
	return expiration_date_;
}
