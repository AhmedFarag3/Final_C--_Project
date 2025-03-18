#ifndef __DIAGNOSTICS__H__
#define __DIAGNOSTICS__H__

#include<string>

// Mediator class 
class Diagnostics
{
    public:
     void DiagnoseData(const std::string& SensorType , double SensorValue) ;

};


#endif  //!__DIAGNOSTICS__H__