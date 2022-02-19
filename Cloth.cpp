#include "Cloth.h"

cloth::cloth(std::string name, std::string brand, float price, std::string size, std::string color, float quantity)
{
	set_name(name);
	set_brand(brand);
	set_price_per_unit(price);
	set_color(color);

	std::string size_map = "XS S M L XL";

	if (size_map.find(size) != std::string::npos)
	{
		set_size(size);
	}

	set_quantity(quantity);
}

std::string cloth::get_size()
{
	return size_;
}

void cloth::set_color(std::string color)
{
	color_ = color;
}

std::string cloth::get_color()
{
	return color_;
}

void cloth::set_size(std::string size)
{
	size_ = size;
}
