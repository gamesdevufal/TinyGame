#include "fuerte.h"
#include "fuerte/arangocxx.h"
#include "DbArango.h"

namespace fcdbwgp {

bool DbArango::initialize() {
    auto conn = ConnectionBuilder().host("http://localhost:8529")
                                   .async(true)
                                   .user("hund")
                                   .password("arfarf")
                                   .connect();

    auto coll = conn->getDatabase("fopples")->getCollection("plastic");
    coll->insert("coca cola standard fopple");


    return false;
}

void DbArango::destroy() {


}


bool DbArango::query(std::string s) {

    return false;
}

std::string DbArango::getResult(){

    std::string s;

    return s;
}

}
