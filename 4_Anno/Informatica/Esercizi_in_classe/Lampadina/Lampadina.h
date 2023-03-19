#ifndef __LAMPADINA_H_
#define __LAMPADINA_H_

#include <iostream>
using namespace std;

class Lampadina{
    private:
        bool accesa;
        bool rotta;
        int maxClick;
        int numClick;

    public:
        Lampadina();
        Lampadina(bool work, bool broke, int mc, int nc);

        ~Lampadina();

        void setMaxClick(int mc);
        void toString();
        void click();
        bool isWorking();
        void mostra();

};

#endif