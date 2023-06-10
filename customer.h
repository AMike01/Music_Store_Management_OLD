#ifndef CUSTOMER_H
#define CUSTOMER_H
#include"user.h"
#include<string>

class Customer: public User{
public:
    Customer(std::string nam="",std::string usern="",std::string pass="");
    ~Customer();

    std::string getName() const override;
    std::string getUsername() const override;
    std::string getPassword() const override;

    void setName(std::string newName) override;
    void setUsername(std::string newUsername) override;
    void setPassword(std::string newPass) override ;

    bool operator==(const Customer u) const;

    void accept(Visitor *visitor) const override;
};
    //virtual void saveUser(QXmlStreamWriter& r);

#endif // COSTUMER_Hstd
