#ifndef TAPE_H
#define TAPE_H

#include "product.h"
#include "song.h"
#include "list.cpp"
#include <string>

class Tape : public Product {

    private:
        list<Song> songs;
        std::string type;  // C60, C90 or C120 

    public:
        Tape(std::string n="", double p=0, list<Song> s= list<Song>(), std::string t="C60");

        // GETTERS
        std::string getName() const override;
        double getPrice() const override;
        list<Song> getSongs() const;
        std::string getType() const;
        
        // SETTERS
        void setSongs(list<Song> newSongs);
        void setType(std::string newType);

        bool operator==(const Tape u) const;

        Tape* clone() const;

        void accept(Visitor *visitor) const override;
};

#endif  // TAPE_H
