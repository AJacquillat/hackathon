#include <vector>
#include <iostream>


class item{
    friend class bag;
    protected:
    int obj_x;
    int obj_y;
    public:
    virtual item () {}
    virtual void use (){}
};

class weapons : public item{   
};

class potion :public item{
    int life_gain=10;                  //le gain (ou la perte) de vie quand on boit la potion avec 'd'
    potion():life_gain(10){};          //le constructeur 
};


class bag{
    int size_max = 20 ;                 //le nombre maximal d'objets que le héros peut porter dans son sac à dos 
    int size;                           //le nombre d'objets que notre héros à dans son sac
    std::vector<item*>items;
    public: 
    bag (): size(0),items(std::vector<item*>){}; //le constructeur 
    void add(item* pi){                 //l'adresse de l'item est passée par copie, on fait attention à ne pas passer 
        if (size<size_max){             //l'item par copie ce qui pourrait avoir de mauavaises conséquences 
            items.push_back(& i);       //on ajoute l'objet au sac à dos
            size ++;                    //on augmente le nombre d'item dans le sac 
        }
        else{
            std::cout<<" le sac est plein"<<std::endl;
        }
    }
    void drop(const_iterator pos )
    {
        items.erase(pos);
    }   
};