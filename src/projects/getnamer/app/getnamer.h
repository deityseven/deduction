#pragma once

#include <qstring.h>
#include <qset.h>
#include <qmap.h>

class GetNamer
{
	struct Name
	{
		QString xing;
		QString zibei;
		QString ming;
		QString biaozi;
	};

public:
	static GetNamer& instance();
	GetNamer(const GetNamer& other) = delete;
	~GetNamer();

	QString get();
	QString get(Name name);

private:
	GetNamer();
	QSet<QString> familyName;                          //姓氏
	QMap<QString, QSet<QString>> familyNameZibei;      //姓氏字辈
};
