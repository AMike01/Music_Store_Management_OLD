#ifndef VISITOR_H
#define VISITOR_H
#include "CD.h"
#include "tape.h"
#include "vynil.h"
#include "customer.h"
#include "admin.h"

class Visitor
{
public:
    Visitor();

    virtual void visitCD(const CD *a) const =0;
    virtual void visitTape(const Tape *a) const =0;
    virtual void visitVynil(const Vynil *a) const =0;
    virtual void visitCustomer(const Customer *a) const =0;
    virtual void visitAdmin(const Admin *a) const  =0;
};

#endif // VISITOR_H
