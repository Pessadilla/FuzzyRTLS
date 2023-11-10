#ifndef RTLSMODULE_H
#define RTLSMODULE_H


class RTLSModule
{
public:
    RTLSModule();
    static double RTLS1(double rssi1,double rssi2,double rssi3);
    static double RTLS2(double rssi1,double rssi2,double rssi3);

};

#endif // RTLSMODULE_H
