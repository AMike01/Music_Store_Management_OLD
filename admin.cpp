#include "admin.h"
#include "visitor.h"

Admin::Admin(std::string nam, std::string usern, std::string pass): User(nam,usern,pass) {}
Admin::~Admin() {}


std::string Admin::getName() const {return name;}
std::string Admin::getUsername() const {return username;};
std::string Admin::getPassword() const {return password;};


void Admin::setName(std::string newName) {name = newName;}
void Admin::setUsername(std::string newUsername) {username = newUsername;}
void Admin::setPassword(std::string newPassword) {password = newPassword;}

bool Admin::operator==(Admin u) const {
      return ((this->getName() == u.getName()) && (this->getUsername() == u.getUsername()) &&
              (this->getPassword() == u.getPassword()));
}

void Admin::accept(Visitor *v) const
{
    v->visitAdmin(this);
}


