#include <iostream>
#include <time.h>
#include <iomanip>
#include <ctime>

#include "Cashier.h"

void cashier::print_receipt(std::vector<Product*> cart, std::string date_and_time_of_purchase)
{
	float subtotal = 0;
	float total = 0;
	float discount_total = 0;

	float total_price_per_product = 0;
	float total_price_per_product_post_disc = 0;
	float discount_price_temp = 0;

	int discount_temp;

	char* date_ptr = &date_and_time_of_purchase[0];
	struct tm time_of_purchase;
	int yy, mm, dd, hh, min, ss;

	sscanf_s(date_ptr, "%d-%d-%d %d:%d:%d", &yy, &mm, &dd, &hh, &min, &ss);

	time_of_purchase.tm_year = yy - 1900;
	time_of_purchase.tm_mon = mm - 1;
	time_of_purchase.tm_mday = dd;
	time_of_purchase.tm_hour = hh;
	time_of_purchase.tm_min = min;
	time_of_purchase.tm_sec = ss;

	mktime(&time_of_purchase); //setting weekday and yearday for the struct

	std::cout << "Date:" << date_and_time_of_purchase << std::endl;
	std::cout << "---Products---" << std::endl;

	for (int i = 0; i < cart.size(); i++)
	{

		if (cart[i]->get_exp_date() != "") //fnb
		{

			std::string temp = cart[i]->get_exp_date();
			char* exp_date_ptr = &temp[0];

			sscanf_s(exp_date_ptr, "%d-%d-%d %d:%d:%d", &yy, &mm, &dd, &hh, &min, &ss);

			struct tm exp_date;

			exp_date.tm_year = yy - 1900;
			exp_date.tm_mon = mm - 1;
			exp_date.tm_mday = dd;
			exp_date.tm_hour = hh;
			exp_date.tm_min = min;
			exp_date.tm_sec = ss;

			time_t purchase_time_to_exp_time_diff = difftime(mktime(&exp_date), mktime(&time_of_purchase));

			if (purchase_time_to_exp_time_diff <= 0)
			{
				discount_temp = 70;
			}

			else if (purchase_time_to_exp_time_diff <= 432000)
			{
				discount_temp = 30;
			}

			else
			{
				discount_temp = 0;
			}

		}

		else if (cart[i]->get_color() != "") //cloth
		{

			if (time_of_purchase.tm_wday >= 2 && time_of_purchase.tm_wday <= 6)
			{
				discount_temp = 10;
			}

			else
			{
				discount_temp = 0;
			}

		}

		else //appliance
		{

			if ((time_of_purchase.tm_wday == 5 || time_of_purchase.tm_wday == 0) && cart[i]->get_price_per_unit() > 999)
			{
				discount_temp = 7;
			}

			else
			{
				discount_temp = 0;
			}

		}

		std::cout << std::endl;

		std::cout << cart[i]->get_name() << " " << cart[i]->get_brand();

		if (cart[i]->get_model() != "")
		{
			std::cout << " " << cart[i]->get_model();
		}

		std::cout << std::endl;

		total_price_per_product = (cart[i]->get_quantity() * cart[i]->get_price_per_unit());

		std::cout << std::fixed << std::setprecision(2) << cart[i]->get_quantity() << " x $" << cart[i]->get_price_per_unit() << " = $" << total_price_per_product << std::endl;

		discount_price_temp = total_price_per_product * (float)((float)discount_temp / (float)100);
		total_price_per_product_post_disc = total_price_per_product - discount_price_temp;

		if (discount_temp != 0)
		{
			std::cout << "#discount " << std::fixed << std::setprecision(2) << discount_temp << "% - $" << discount_price_temp << std::endl;
		}

		subtotal = subtotal + total_price_per_product;
		discount_total = discount_total + discount_price_temp;
		total = total + total_price_per_product_post_disc;
	}

	std::cout << "\n-----------------------------------------------------------\n";
	std::cout << "SUBTOTAL: $" << std::fixed << std::setprecision(2) << subtotal << std::endl;
	std::cout << "DISCOUNT: -" << std::fixed << std::setprecision(2) << discount_total << "\n\n";
	std::cout << "TOTAL: $" << std::fixed << std::setprecision(2) << total << std::endl;
}
