#include "vynil.h"
#include "visitor.h"

// Constructor

Vynil::Vynil(std::string n, double p, list<Song> s, unsigned int r) : Product(n,p), songs(s), rpm(r) {}


// Get Methods

std::string Vynil::getName() const { return name;}
double Vynil::getPrice() const { return price;}
list<Song> Vynil::getSongs() const { return songs;}
unsigned int Vynil::getRpm () const { return rpm;}


// Set Methods

void Vynil::setSongs(list<Song> newSongs) { songs = newSongs;}
void Vynil::setRpm(unsigned int newRpm) {rpm = newRpm;}


bool Vynil::operator==(Vynil u) const {
      return ((this->getName() == u.getName()) && (this->getPrice() == u.getPrice())
              && (this->getRpm() == u.getRpm()));
}

Vynil* Vynil::clone() const {
    return new Vynil(*this);
}

void Vynil::accept(Visitor *v) const
{
    v->visitVynil(this);
}
