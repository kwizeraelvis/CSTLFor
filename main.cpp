#include "cwf/cppwebapplication.h"
#include "controllers/usercontroller.h"


int main(int argc, char *argv[]){
    CWF::CppWebApplication server(argc, argv, "/home/elvis/personal/projects/cpp-projects/CSTL/server/");
    server.addController<UserController>("/user");
    return server.start();
}
