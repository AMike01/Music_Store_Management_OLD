#include "customer.h"
#include "visitor.h"

Customer::Customer(std::string nam, std::string usern, std::string pass): User(nam,usern,pass) {}
Customer::~Customer() {}


std::string Customer::getName() const {return name;}
std::string Customer::getUsername() const {return username;};
std::string Customer::getPassword() const {return password;};

void Customer::setName(std::string newName) {name = newName;}
void Customer::setUsername(std::string newUsername) {username = newUsername;}
void Customer::setPassword(std::string newPassword) {password = newPassword;}

bool Customer::operator==(Customer u) const {
      return ((this->getName() == u.getName()) && (this->getUsername() == u.getUsername()) &&
              (this->getPassword() == u.getPassword()));
}

void Customer::accept(Visitor *v) const
{
    v->visitCustomer(this);
}
