#ifndef USER_H
#define USER_H

#include <QObject>



class User : public QObject
{
    Q_OBJECT
private:
    int id;
    QString name;
    QString address;
    char gender;

public:
    explicit User(QObject *parent=nullptr);

public slots:
    void setId(int value) ;
    int getId() const;
    void setName(const QString &value);
    QString getName() const;
    void setAddress(const QString &value);
    QString getAddress() const;
    void setGender(char value);
    char getGender() const;
};

#endif // USER_H
