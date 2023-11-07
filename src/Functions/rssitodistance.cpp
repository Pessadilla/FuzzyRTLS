#include "rssitodistance.h"

RSSItoDistance::RSSItoDistance()
{

}

Diziler RSSItoDistance::ConvertRSSI(double rssi1, double rssi2, double rssi3){
    Diziler distances;
    int i1 = 0, i2 = 0, i3 = 0;

    if(rssi1>(-51)&&rssi1<=(-47)){
        distances.distance1.push_back(1);
        i1++;
    }
    if(rssi1>(-53)&&rssi1<=(-51)){
        distances.distance1.push_back(3);
        i1++;
    }
    if(rssi1>(-55)&&rssi1<=(-53)){
        distances.distance1.push_back(5.5);
        i1++;
    }
    if(rssi1>(-58)&&rssi1<=(-56)){
        distances.distance1.push_back(6.5);
        i1++;
    }
    if(rssi1>(-62)&&rssi1<=(-59)){
        distances.distance1.push_back(7.5);
        i1++;
    }
    if(rssi1>(-63)&&rssi1<=(-61)){
        distances.distance1.push_back(11);
        i1++;
    }
    if(rssi1>(-65)&&rssi1<=(-63)){
        distances.distance1.push_back(13);
        i1++;
    }
    if(rssi1>=(-71)&&rssi1<=(-65)){
        distances.distance1.push_back(9);
        i1++;
    }


    if(rssi2>(-42)&&rssi2<(-35)){
        distances.distance2.push_back(1);
        i2++;
    }
    if(rssi2>(-54)&&rssi2<(-50)){
        distances.distance2.push_back(3);
        i2++;
    }
    if(rssi2>(-58)&&rssi2<(-54)){
        distances.distance2.push_back(4);
        i2++;
    }
    if(rssi2>(-60)&&rssi2<(-58)){
        distances.distance2.push_back(5);
        i2++;
    }
    if(rssi2>(-63)&&rssi2<(-59)){
        distances.distance2.push_back(7);
        i2++;
    }
    if(rssi2>(-67)&&rssi2<(-63)){
        distances.distance2.push_back(8);
        i2++;
    }

    if(rssi3>(-47)&&rssi3<(-35)){
        distances.distance3.push_back(1);
        i3++;
    }
    if(rssi3>(-52)&&rssi3<(-47)){
        distances.distance3.push_back(3);
        i3++;
    }
    if(rssi3>(-56)&&rssi3<(-52)){
        distances.distance3.push_back(5.5);
        i3++;
    }
    if(rssi3>(-60)&&rssi3<(-56)){
        distances.distance3.push_back(7.5);
        i3++;
    }
    if(rssi3<=(-60)){
        distances.distance3.push_back(9);
        i3++;
    }

    return distances;

}
