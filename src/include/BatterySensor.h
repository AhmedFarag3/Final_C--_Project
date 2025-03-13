#ifndef __BATTERYSENSOR__H__
#define __BATTERYSENSOR__H__

#include "../Factory/Isensor.h"

namespace Sensors
{   
    class BatterySensor : public ISensor {

            public:
            float getValue() override;

    };

}

#endif  //!__BATTERYSENSOR__H__
