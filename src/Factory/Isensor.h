#ifndef __ISENSOR__H__
#define __ISENSOR__H__



    class ISensor
    {
        public:
        virtual ~ISensor() = default;
        virtual float getValue()  = 0;


    };


#endif  //!__ISENSOR__H__