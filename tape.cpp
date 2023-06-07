#include "tape.h"
#include "visitor.h"


// Constructor

Tape::Tape(std::string n, double p, list<Song> s, std::string t) : Product(n,p), songs(s), type(t) {}


// Get Methods

std::string Tape::getName() const { return name;}
double Tape::getPrice() const { return price;}
list<Song> Tape::getSongs() const { return songs;}
std::string Tape::getType() const { return type;}


// Set Methods

void Tape::setSongs(list<Song> newSongs) { songs = newSongs;}
void Tape::setType(std::string newType) {type = newType;}


bool Tape::operator==(Tape u) const {
      return ((this->getName() == u.getName()) && (this->getPrice() == u.getPrice())
              && (this->getType() == u.getType()));
}

Tape* Tape::clone() const {
    return new Tape(*this);
}
void Tape::accept(Visitor *v) const
{
    v->visitTape(this);
}
