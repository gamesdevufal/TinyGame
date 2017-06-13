#include "Db.h"

namespace fcdbwgp {

class DbArango : public Db {
    public:
        bool initialize();
        void destroy();
        bool query(std::string s);
        std::string getResult();
};

}

