#include "CD.h"
#include "visitor.h"

// Constructor

CD::CD(std::string n, double p, list<Song> s, bool r) : Product(n,p), songs(s), rewritable(r) {}


// Get Methods

std::string CD::getName() const { return name;}
double CD::getPrice() const { return price;}
list<Song> CD::getSongs() const { return songs;}
bool CD::getRewritable() const { return rewritable;}


// Set Methods

void CD::setSongs(list<Song> newSongs) { songs = newSongs;}
void CD::setRewritable(bool newR) {rewritable = newR ;}

bool CD::operator==(CD u) const {
      return ((this->getName() == u.getName()) && (this->getPrice() == u.getPrice())
              && (this->getRewritable() == u.getRewritable()));
}

CD* CD::clone() const {
    return new CD(*this);
}
void CD::accept(Visitor *v) const
{
    v->visitCD(this);
}

