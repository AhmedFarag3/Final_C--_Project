#ifndef __RADARSENSOR__H__
#define __RADARSENSOR__H__

namespace Sensors
{
    class RadarSensor
    {
        private:
        bool m_RadarState;
        public:
        RadarSensor(bool RadarState);
        void setValue(bool NewRadarState);
        bool getValue() const;
    };
}

#endif  //!__RADARSENSOR__H__