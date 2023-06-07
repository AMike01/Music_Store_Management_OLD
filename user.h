#ifndef  USER_H
#define USER_H
#include <string>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>

class Visitor;

class user {
protected:
    std::string name;
    std::string username;
    std::string password;     
public:
    sser(std::string nam="",std::string usern="",std::string pass="");
    virtual ~user();

    // GETTERS
    virtual std::string getName() const =0;
    virtual std::string getUsername() const =0;
    virtual std::string getPassword() const =0;


    // SETTERS
    virtual void setName(std::string newName) =0;
    virtual void setUsername(std::string newUsername) =0;
    virtual void setPassword(std::string newPass) =0;


    virtual void accept(Visitor *visitor) const = 0;

    //virtual void saveUser(QXmlStreamWriter& xmlWriter);
    //virtual void loadUser(QXmlStreamReader& xmlReader);
};

#endif // USER_H
