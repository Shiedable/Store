#pragma once

#include<string>

class Product {

protected:

	std::string name_;
	std::string brand_;
	float price_per_unit_;
	float quantity_;

public:
	virtual ~Product() = default;

	void set_name(std::string name);
	void set_brand(std::string brand);
	void set_price_per_unit(float price);
	void set_quantity(float quantity);

	std::string get_brand();
	std::string get_name();
	float get_price_per_unit();
	float get_quantity();

	virtual std::string get_model();
	virtual std::string get_prod_date();
	virtual std::string get_size();
	virtual std::string get_color();
	virtual std::string get_exp_date();
	virtual float get_weight();

};