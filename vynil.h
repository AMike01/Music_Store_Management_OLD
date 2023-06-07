#ifndef VYNIL_H
#define VYNIL_H

#include "product.h"
#include "song.h"
#include "list.cpp"
#include <string>

class Vynil : public Product {

    private:
        list<Song> songs;
        unsigned int rpm;  // 33, 45, 78 giri 

    public:
        Vynil(std::string n="", double p=0, list<Song> s= list<Song>(), unsigned int r=0);

        // GETTERS
        std::string getName() const override;
        double getPrice() const override;
        list<Song> getSongs() const;
        unsigned int getRpm() const;
        
        // SETTERS
        void setSongs(list<Song> newSongs);
        void setRpm(unsigned int newRpm);

        bool operator==(const Vynil u) const;
        Vynil* clone() const;

        void accept(Visitor *visitor) const override;
};

#endif  // VYNIL_H
