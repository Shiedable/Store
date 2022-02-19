#pragma once

#include "Product.h"

class cloth final :
	public Product
{

	std::string size_;
	std::string color_;

public:

	cloth(std::string name, std::string brand, float price, std::string size, std::string color, float quantity);

	void set_size(std::string size);
	void set_color(std::string color);

	std::string get_size() override;
	std::string get_color() override;

};

