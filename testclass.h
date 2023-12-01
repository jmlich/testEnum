#ifndef TESTCLASS_H
#define TESTCLASS_H

#include <QObject>
#include <QDebug>

class TestClass : public QObject {
    Q_OBJECT

public:
    explicit TestClass(QObject* parent = nullptr);
    virtual ~TestClass();

    enum Constants {
        InvalidValue = INT_MAX,
        InvalidValue64 = LLONG_MAX
    };
    Q_ENUM(Constants)
};

#endif // TESTCLASS_H
