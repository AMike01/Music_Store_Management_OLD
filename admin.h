#ifndef ADMIN_H
#define ADMIN_H
#include"user.h"
#include<string>

class Admin: public user{
public:
    Admin(std::string nam="",std::string usern="",std::string pass="");
    ~Admin();

    std::string getName() const override;
    std::string getUsername() const override;
    std::string getPassword() const override;

    void setName(std::string newName) override;
    void setUsername(std::string newUsername) override;
    void setPassword(std::string newPass) override;

    bool operator==(const Admin u) const;

    void accept(Visitor *visitor) const override;

    //virtual void saveUser(QXmlStreamWriter& r);
};

#endif // ADMIN_H
