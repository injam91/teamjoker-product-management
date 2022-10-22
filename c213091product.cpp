#include<iostream>
#include<fstream>
using namespace std;
class product{
public:
	int product_id;
	string product_cat,product_name;
};
class sold_product : public product{
public:
	int price;
	string customer_id;
};
class bought_product : public product{
public:
	int buyer_id,price;
	string buyer_name;
};
int main()
{
	ifstream pin("productIN.txt");
	ofstream pout("productOut.txt");
	ifstream sp_in("customerIN.txt");
	ofstream sp_out("customerOut.txt");
	ifstream bp_in("buyerIN.txt");
	ofstream bp_out("buyerOut.txt");

	product p1,p2,p3;
	sold_product sp1,sp2,sp3;
	bought_product bp1,bp2,bp3;

	pin>>p1.product_id;
	pin.ignore();
	getline(pin,p1.product_cat);
	getline(pin,p1.product_name);
	pout<<"Product ID : "<<p1.product_id<<endl;
	pout<<"Product Chatagory : "<<p1.product_cat<<endl;
	pout<<"Product Name : "<<p1.product_name<<endl;

	sp_in>>sp1.product_id;
	sp_in.ignore();
	getline(sp_in,sp1.product_cat);
	getline(sp_in,sp1.product_name);
	sp_in>>sp1.price;
	sp_in.ignore();
	getline(sp_in,sp1.customer_id);
	sp_out<<"Product ID : "<<sp1.product_id<<endl;
	sp_out<<"Product Chatagory : "<<sp1.product_cat<<endl;
	sp_out<<"Product Name : "<<sp1.product_name<<endl;
	sp_out<<"Price : "<<sp1.price<<endl;
	sp_out<<"Customer ID : "<<sp1.customer_id<<endl;

	bp_in>>bp1.product_id;
	bp_in.ignore();
	getline(bp_in,bp1.product_cat);
	getline(bp_in,bp1.product_name);
	bp_in>>bp1.buyer_id>>bp1.price;
	bp_in.ignore();
	getline(bp_in,bp1.buyer_name);
	bp_out<<"Product ID : "<<bp1.product_id<<endl;
	bp_out<<"Product Chatagory : "<<bp1.product_cat<<endl;
	bp_out<<"Product Name : "<<bp1.product_name<<endl;
	bp_out<<"Buyer ID : "<<bp1.buyer_id<<endl;
	bp_out<<"Price : "<<bp1.price<<endl;
	bp_out<<"Buyer Name : "<<bp1.buyer_name<<endl;



	return 0;
}
