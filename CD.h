#ifndef CD_H
#define CD_H

#include "product.h"
#include "song.h"
#include "list.cpp"
#include <string>


class CD : public Product {

    private:
        list<Song> songs;
        bool rewritable;
    public:
        CD(std::string n="", double p=0, bool r=0);

        // GETTERS
        std::string getName() const override;
        double getPrice() const override;
        bool getRewritable() const;
        
        // SETTERS
        void setSongs(list<Song> newSongs);
        void setRewritable(bool newR);

        bool operator==(const CD u) const;

        CD* clone() const;

        //void accept(Visitor *visitor) const override;
};

#endif  // CD_H
