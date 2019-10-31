#include "usercontroller.h"


void UserController::doGet(CWF::Request &request, CWF::Response &response) const
{
    User userone, usertwo, userthree, userfour;

    userone.setId(1);
    userone.setName("Kwizera Aime Elvis");
    userone.setAddress("Kigali, Rwanda");
    userone.setGender('M');

    usertwo.setId(2);
    usertwo.setName("Rukundo Eric");
    usertwo.setAddress("Kigali, Rwanda");
    usertwo.setGender('M');

    userthree.setId(3);
    userthree.setName("Gihozo Shanelle");
    userthree.setAddress("Ruhango,Rwanda");
    userthree.setGender('F');


    userfour.setId(4);
    userfour.setName("Umutoni Shanitah");
    userfour.setAddress("Gisenyi, Rwanda");
    userfour.setGender('F');


    CWF::QListObject users({&userone, &usertwo, &userthree, &userfour});
    request.addAttribute("users", &users);
    request.getRequestDispatcher("/pages/users.view").forward(request, response);
}
