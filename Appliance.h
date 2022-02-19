#pragma once

#include "Product.h"

class Appliance :
	public Product
{

	std::string model_;
	std::string production_date_;
	float weight_;

public:

	Appliance(std::string name, std::string brand, float price, std::string model, std::string prod_date, float weight, float quantity);

	void set_model(std::string model);
	void set_prod_date(std::string prod_date);
	void set_weight(float weight);

	std::string get_prod_date() override;
	std::string get_model() override;
	float get_weight() override;

};

