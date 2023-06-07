#include "product.h"
#include <string>

// Constructor and Destructor

Product::Product(std::string n, double p): name(n), price(p) {}
Product::~Product() {}


// Set Methods

void Product::setName(std::string newName) { name = newName;}
void Product::setPrice(double newPrice) { price = newPrice;}


