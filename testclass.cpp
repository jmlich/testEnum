#include "testclass.h"

TestClass::TestClass(QObject* parent) : QObject(parent) {
    qDebug() << Q_FUNC_INFO;
}

TestClass::~TestClass() {}