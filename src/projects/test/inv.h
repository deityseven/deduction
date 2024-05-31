#pragma once

#include <QObject>
#include <qdebug.h>

class Inv : public QObject
{
	Q_OBJECT

	Q_PROPERTY(int age READ age WRITE setAge)
public:
	Q_INVOKABLE Inv(QObject *parent = nullptr);
	Q_INVOKABLE Inv(const Inv& other);
	Q_INVOKABLE ~Inv();
	
	Q_INVOKABLE void test() {
		qDebug() << "test";
	}

	int age() { return this->_age; }
	void setAge(int age) { this->_age = age; }

private:
	int _age;
};

Q_DECLARE_METATYPE(Inv)