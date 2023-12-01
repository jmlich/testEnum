#include <QtCore>
#include "testclass.h"

int main(int argc, char** argv) {
    QCoreApplication a(argc, argv);

    TestClass testInstance(nullptr);

    return a.exec();
}