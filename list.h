#ifndef LIST_CPP
#define LIST_CPP
#include "product.h"


class list {

    friend class iterator;
    private:
        class nodo
        {
            public:
                product* info;
                nodo *next;
                nodo();
                nodo(product*, nodo* n=nullptr);
                nodo(nodo*);
                ~nodo();
        };
    
    nodo* first; // list

    public:

        class iterator {
            friend class list;
            private:
                list::nodo* punt;
            public:
                bool operator==(const iterator&) const;
                bool operator!=(const iterator&) const;
                iterator& operator++(); //++ prefisso
                iterator operator++(int); //++ postfisso
        };

        iterator begin() const;
        iterator end() const;
        product* operator[](const iterator&) const;

        // fine iteratore

        void pushFront(product*); // inserisce all'inizio della lista
        void pushBack(product*); // inserisce alla fine della lista
        product* popFront();
        product* popBack();
        void svuota();
        bool is_empty() const;


        list();
        list(const list&);
        ~list();
        void copy(nodo*, nodo* &n) const;
        static void destroy(nodo*);

};        



#endif  // LIST_CPP
