//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qstring.h>
#include <qxml.h>

class x_QXmlDeclHandler : public QXmlDeclHandler {
public:
    static void x_0(Smoke::Stack x) {
	// QXmlDeclHandler()
	x_QXmlDeclHandler* xret = new x_QXmlDeclHandler();
	x[0].s_class = (void*)xret;
    }
    x_QXmlDeclHandler() : QXmlDeclHandler() {
    }
    static void x_1(Smoke::Stack x) {
	// QXmlDeclHandler(const QXmlDeclHandler&)
	x_QXmlDeclHandler* xret = new x_QXmlDeclHandler(*(const QXmlDeclHandler *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QXmlDeclHandler(const QXmlDeclHandler& x1) : QXmlDeclHandler(x1) {
    }
    virtual bool attributeDecl(const QString& x1, const QString& x2, const QString& x3, const QString& x4, const QString& x5) {
	Smoke::StackItem x[6];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	x[3].s_voidp = (void*)&x3;
	x[4].s_voidp = (void*)&x4;
	x[5].s_voidp = (void*)&x5;
	qt_Smoke->binding->callMethod(12425, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual QString errorString() {
	Smoke::StackItem x[1];
	qt_Smoke->binding->callMethod(12428, (void*)this, x, true /*pure virtual*/);
	QString *xptr = (QString *)x[0].s_class;
	QString xret(*xptr);
	delete xptr;
	return xret;
	// ABSTRACT
    }
    virtual bool externalEntityDecl(const QString& x1, const QString& x2, const QString& x3) {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	x[3].s_voidp = (void*)&x3;
	qt_Smoke->binding->callMethod(12427, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    virtual bool internalEntityDecl(const QString& x1, const QString& x2) {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	qt_Smoke->binding->callMethod(12426, (void*)this, x, true /*pure virtual*/);
	return (bool)x[0].s_bool;
	// ABSTRACT
    }
    ~x_QXmlDeclHandler() { qt_Smoke->binding->deleted(379, (void*)this); }
};
void xcall_QXmlDeclHandler(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QXmlDeclHandler *xself = (x_QXmlDeclHandler*)obj;
    switch(xi) {
	case 0: x_QXmlDeclHandler::x_0(args);	break;
	case 1: x_QXmlDeclHandler::x_1(args);	break;
	case 2: delete (QXmlDeclHandler*)xself;	break;
    }
}
