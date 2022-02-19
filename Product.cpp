#include "Product.h"

void Product::set_name(std::string name)
{
	name_ = name;
}

std::string Product::get_name()
{
	return name_;
}

void Product::set_brand(std::string brand)
{
	brand_ = brand;
}

std::string Product::get_brand()
{
	return brand_;
}

void Product::set_price_per_unit(float price)
{
	price_per_unit_ = price;
}

float Product::get_price_per_unit()
{
	return price_per_unit_;
}

void Product::set_quantity(float quantity)
{
	quantity_ = quantity;
}

float Product::get_quantity()
{
	return quantity_;
}

std::string Product::get_model()
{
	return "";
}

std::string Product::get_prod_date()
{
	return "";
}

std::string Product::get_size()
{
	return "";
}

std::string Product::get_color()
{
	return "";
}

std::string Product::get_exp_date()
{
	return "";
}

float Product::get_weight()
{
	return 0;
}
