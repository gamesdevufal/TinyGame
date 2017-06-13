#include "Db.h"
#include "libsedna.h"

namespace fcdbwgp {

class DbSedna : public Db {

    struct SednaConnection *conn{nullptr};

    public:
        bool initialize();
        void destroy();
        bool query(std::string s);
        std::string getResult();
};

}

