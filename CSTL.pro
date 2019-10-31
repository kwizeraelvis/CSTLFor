QT += core network xml

TARGET = CSTL
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    model/user.cpp \
    controllers/usercontroller.cpp

HEADERS += \
    model/user.h \
    controllers/usercontroller.h


QMAKE_CXXFLAGS += -std=c++11

OTHER_FILES += \
    server/config/CPPWeb.ini \
    server/config/log/CPPWebServer.log \
    server/pages/users.view


DISTFILES += \
    server/pages/users.xhtml

unix {
    INCLUDEPATH += /usr/lib
    debug {
        LIBS += -L/usr/lib -lCPPWebFrameworkd
    }
    release {
        LIBS += -L/usr/lib -lCPPWebFramework
    }
}

CONFIG(release, debug|release) {
   QMAKE_CXXFLAGS_RELEASE -= -O1
   QMAKE_CXXFLAGS_RELEASE -= -O2
    QMAKE_CXXFLAGS_RELEASE += -O3
}

#Strongly recommended
LIBS += -ljemalloc
