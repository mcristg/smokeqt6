//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qxml.h>

class x_QXmlEntityResolver : public QXmlEntityResolver {
public:
    static void x_0(Smoke::Stack x) {
	// QXmlEntityResolver()
	x_QXmlEntityResolver* xret = new x_QXmlEntityResolver();
	x[0].s_class = (void*)xret;
    }
    x_QXmlEntityResolver() : QXmlEntityResolver() {
    }
    static void x_1(Smoke::Stack x) {
	// QXmlEntityResolver(const QXmlEntityResolver&)
	x_QXmlEntityResolver* xret = new x_QXmlEntityResolver(*(const QXmlEntityResolver *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QXmlEntityResolver(const QXmlEntityResolver& x1) : QXmlEntityResolver(x1) {
    }
    virtual QString errorString() {
	Smoke::StackItem x[1];
	qt_Smoke->binding->callMethod(12464, (void*)this, x, true /*pure virtual*/);
	QString *xptr = (QString *)x[0].s_class;
	QString xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual bool resolveEntity(const QString& x1, const QString& x2, QXmlInputSource*& x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	x[3].s_voidp = (void*)&x3;
	qt_Smoke->binding->callMethod(12463, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    ~x_QXmlEntityResolver() { qt_Smoke->binding->deleted(381, (void*)this); }
};
void xcall_QXmlEntityResolver(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QXmlEntityResolver *xself = (x_QXmlEntityResolver*)obj;
    switch(xi) {
	case 0: x_QXmlEntityResolver::x_0(args);	break;
	case 1: x_QXmlEntityResolver::x_1(args);	break;
	case 2: delete (QXmlEntityResolver*)xself;	break;
    }
}
