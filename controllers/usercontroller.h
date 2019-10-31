#ifndef USERCONTROLLER_H
#define USERCONTROLLER_H


#include"cwf/controller.h"
#include "cwf/request.h"
#include "cwf/response.h"
#include "cwf/qlistobject.h"
#include "model/user.h"

class UserController : public CWF::Controller
{
public:
    void doGet(CWF::Request &request, CWF::Response &response) const override;
};

#endif // USERCONTROLLER_H
