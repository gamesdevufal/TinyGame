#ifndef DB_FCDBW
#define DB_FCDBW

#include <string>

namespace fcdbwgp {

class Db {
    std::string resultSring;
    public:
        virtual bool initialize() = 0;
        virtual void destroy() = 0;
        virtual bool query(std::string s) = 0;
        virtual std::string getResult() = 0;
};

}

#endif


