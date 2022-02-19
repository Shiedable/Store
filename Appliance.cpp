#include "Appliance.h"

Appliance::Appliance(std::string name, std::string brand, float price, std::string model, std::string prod_date, float weight, float quantity)
{
	set_name(name);
	set_brand(brand);
	set_price_per_unit(price);
	set_model(model);
	set_prod_date(prod_date);
	set_weight(weight);
	set_quantity(quantity);
}

std::string Appliance::get_model()
{
	return model_;
}

void Appliance::set_prod_date(std::string prod_date)
{
	production_date_ = prod_date;
}

std::string Appliance::get_prod_date()
{
	return production_date_;
}

void Appliance::set_weight(float weight)
{
	weight_ = weight;
}

float Appliance::get_weight()
{
	return weight_;
}

void Appliance::set_model(std::string model)
{
	model_ = model;
}
