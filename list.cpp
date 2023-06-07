#include "list.h"
#include "product.h"

list::nodo::nodo() {}
list::nodo::nodo(product* p, nodo* n) : info(p), next(n) {}
list::nodo::nodo(nodo *t) {
    if(t) {
        while(t->next != nullptr){
            this->info = t->info;
            this->next = t->next;
        }
    }
}

list::nodo::~nodo() {
    delete info;
}

list::list(): first(nullptr) {}
list::list(const list& d): first(nullptr) {
        copy(d.first, first);
    }
list::~list() {if(first) destroy(first); }

 void list::destroy(nodo* t) {
    if(t) {destroy(t->next); delete t;}
}

void list::copy(nodo* f, nodo* &n ) const {
    if(f==nullptr) {return;}  //lista vuota
        // lista non vuota

    nodo* ptr = f;
    n=new nodo(ptr->info, nullptr);
        while(ptr->next != nullptr) {
            ptr = ptr->next;
            n->next= new nodo(ptr->info, nullptr);
            n = n->next;
        }

    }

void list::pushFront(product* t) {
    first = new nodo(t, first);
}

void list::pushBack(product* t) {
    if(first == nullptr) {
        this->first = new nodo(t, nullptr);
    }
    else {
        nodo* tmp = first;
            while(tmp->next!=nullptr)
                tmp = new nodo(tmp->next->info, tmp->next->next);

            tmp->next = new nodo(t);
            }
    }

product* list::popFront() {
    if (first==0)
        return 0;
    product* b=first->info->clone();
    first=first->next;
    return b;
}

product* list::popBack()  {
    if (first==0)
		return 0;
	if (first->next==0)
	{
		product* b=first->info->clone();
		first=0;
		return b;
    }
}

void list::svuota() {
    delete first;
    first = nullptr;
}

bool list::is_empty() const {
    return first ==nullptr;
}
bool list::iterator::operator==(const iterator& it) const
{
	return punt==it.punt;
}

bool list::iterator::operator!=(const iterator& it) const
{
	return punt!=it.punt;
}

list::iterator& list::iterator::operator++()
{
	if (punt)
        punt=(*punt).next;
	return *this;
}

list::iterator list::iterator::operator++(int)
{
    iterator it=*this;
	if (punt)
        punt=(*punt).next;
	return it;
}

list::iterator list::begin() const
{
    iterator it;
    it.punt=first; //amicizia
	return it;
}

list::iterator list::end() const
{
    iterator it;
	it.punt=0;
	return it;
}

product* list::operator[](const iterator& it) const
{
	return it.punt->info;
}

