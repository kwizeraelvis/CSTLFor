#include "user.h"

User::User(QObject *parent) : QObject(parent), id(0), gender('M')
{

}

void User::setId(int value){
    id = value;
}

int User::getId() const {
    return id;
}

void User::setName(const QString &value){
    name = value;
}

QString User::getName() const {
    return name;
}

void User::setAddress(const QString &value){
    address = value;
}

QString User::getAddress()const{
    return address;
}

void User::setGender(char value){
    gender = value;
}

char User::getGender()const{
    return gender;
}
