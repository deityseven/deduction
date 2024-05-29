#include <spdlog/spdlog.h>
#include <util/string_util.h>
#include <qapplication.h>

#include "inv.h"

void RefTest(int argc, char* argv[])
{
	QApplication a(argc, argv);
	qRegisterMetaType<Inv>("Inv");

	auto metaObject = Inv::staticMetaObject;
	auto className = metaObject.className();
	auto superClass = metaObject.superClass();
	auto className1 = superClass->className();
	qDebug() << metaObject.className();

	auto tyep = QMetaType::type("Inv");
	auto object = static_cast<QObject*>(QMetaType::create(tyep));
	object->setProperty("Tee", 80);
	QMetaObject::invokeMethod(object, "test");
	QMetaType::destroy(tyep, object);
}

int main(int argc, char *argv[])
{
#ifdef I_OS_WIN
    system("chcp 65001");
#endif // WIN
    //{
    //    spdlog::info("user info :");
    //    spdlog::info("{}", client.getCurrentUser()->toJson());
    //}

	RefTest(argc, argv);

	return 0;
}