#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
#include<QXmlStreamWriter>
#include<QXmlStreamReader>

class Visitor;

class product {

    protected:
        std::string name;
        double price;
    
    public:
        product(std::string n="", double p=0);

        virtual ~product() = 0;

        // GETTERS
        virtual std::string getName() const=0;
        virtual double getPrice() const=0;

        // SETTERS
        void setName(std::string newName);
        void setPrice(double newPrice);

     
        virtual product* clone() const =0;

       // virtual void loadXML(QXmlStreamReader & r);
       // virtual void saveXML(QXmlStreamWriter & w);
};


#endif  // PRODUCT_H
