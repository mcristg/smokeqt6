//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qtranslator.h>
#include <qdatastream.h>
#include <qstring.h>

class x_QTranslatorMessage : public QTranslatorMessage {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QTranslatorMessage::NoPrefix;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QTranslatorMessage::Hash;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QTranslatorMessage::HashContext;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QTranslatorMessage::HashContextSourceText;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_enum = (long)QTranslatorMessage::HashContextSourceTextComment;
    }
    static void x_5(Smoke::Stack x) {
	// QTranslatorMessage()
	x_QTranslatorMessage* xret = new x_QTranslatorMessage();
	x[0].s_class = (void*)xret;
    }
    x_QTranslatorMessage() : QTranslatorMessage() {
    }
    static void x_6(Smoke::Stack x) {
	// QTranslatorMessage(const char*, const char*, const char*, const QString&)
	x_QTranslatorMessage* xret = new x_QTranslatorMessage((const char*)x[1].s_voidp,(const char*)x[2].s_voidp,(const char*)x[3].s_voidp,*(const QString *)x[4].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QTranslatorMessage(const char* x1, const char* x2, const char* x3, const QString& x4) : QTranslatorMessage(x1, x2, x3, x4) {
    }
    static void x_7(Smoke::Stack x) {
	// QTranslatorMessage(const char*, const char*, const char*)
	x_QTranslatorMessage* xret = new x_QTranslatorMessage((const char*)x[1].s_voidp,(const char*)x[2].s_voidp,(const char*)x[3].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QTranslatorMessage(const char* x1, const char* x2, const char* x3) : QTranslatorMessage(x1, x2, x3) {
    }
    static void x_8(Smoke::Stack x) {
	// QTranslatorMessage(QDataStream&)
	x_QTranslatorMessage* xret = new x_QTranslatorMessage(*(QDataStream *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QTranslatorMessage(QDataStream& x1) : QTranslatorMessage(x1) {
    }
    static void x_9(Smoke::Stack x) {
	// QTranslatorMessage(const QTranslatorMessage&)
	x_QTranslatorMessage* xret = new x_QTranslatorMessage(*(const QTranslatorMessage *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QTranslatorMessage(const QTranslatorMessage& x1) : QTranslatorMessage(x1) {
    }
    void x_10(Smoke::Stack x) {
	// operator=(const QTranslatorMessage&)
	QTranslatorMessage& xret = this->QTranslatorMessage::operator=(*(const QTranslatorMessage *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_11(Smoke::Stack x) const {
	// hash()
	uint xret = this->QTranslatorMessage::hash();
	x[0].s_uint = xret;
    }
    void x_12(Smoke::Stack x) const {
	// context()
	const char* xret = this->QTranslatorMessage::context();
	x[0].s_voidp = (void*)xret;
    }
    void x_13(Smoke::Stack x) const {
	// sourceText()
	const char* xret = this->QTranslatorMessage::sourceText();
	x[0].s_voidp = (void*)xret;
    }
    void x_14(Smoke::Stack x) const {
	// comment()
	const char* xret = this->QTranslatorMessage::comment();
	x[0].s_voidp = (void*)xret;
    }
    void x_15(Smoke::Stack x) {
	// setTranslation(const QString&)
	this->QTranslatorMessage::setTranslation(*(const QString *)x[1].s_voidp);
	(void)x; // noop (for compiler warning)
    }
    void x_16(Smoke::Stack x) const {
	// translation()
	QString xret = this->QTranslatorMessage::translation();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_17(Smoke::Stack x) const {
	// write(QDataStream&, bool, QTranslatorMessage::Prefix)
	this->QTranslatorMessage::write(*(QDataStream *)x[1].s_class,(bool)x[2].s_bool,(QTranslatorMessage::Prefix)x[3].s_enum);
	(void)x; // noop (for compiler warning)
    }
    void x_18(Smoke::Stack x) const {
	// write(QDataStream&, bool)
	this->QTranslatorMessage::write(*(QDataStream *)x[1].s_class,(bool)x[2].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_19(Smoke::Stack x) const {
	// write(QDataStream&)
	this->QTranslatorMessage::write(*(QDataStream *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_20(Smoke::Stack x) const {
	// commonPrefix(const QTranslatorMessage&)
	QTranslatorMessage::Prefix xret = this->QTranslatorMessage::commonPrefix(*(const QTranslatorMessage *)x[1].s_class);
	x[0].s_enum = xret;
    }
    void x_21(Smoke::Stack x) const {
	// operator==(const QTranslatorMessage&)
	bool xret = this->QTranslatorMessage::operator==(*(const QTranslatorMessage *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_22(Smoke::Stack x) const {
	// operator!=(const QTranslatorMessage&)
	bool xret = this->QTranslatorMessage::operator!=(*(const QTranslatorMessage *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_23(Smoke::Stack x) const {
	// operator<(const QTranslatorMessage&)
	bool xret = this->QTranslatorMessage::operator<(*(const QTranslatorMessage *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_24(Smoke::Stack x) const {
	// operator<=(const QTranslatorMessage&)
	bool xret = this->QTranslatorMessage::operator<=(*(const QTranslatorMessage *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_25(Smoke::Stack x) const {
	// operator>(const QTranslatorMessage&)
	bool xret = this->QTranslatorMessage::operator>(*(const QTranslatorMessage *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_26(Smoke::Stack x) const {
	// operator>=(const QTranslatorMessage&)
	bool xret = this->QTranslatorMessage::operator>=(*(const QTranslatorMessage *)x[1].s_class);
	x[0].s_bool = xret;
    }
    static void xenum_operation(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
	switch(xtype) {
	  case 702: //QTranslatorMessage::Prefix
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QTranslatorMessage::Prefix;
		break;
	      case Smoke::EnumDelete:
		delete (QTranslatorMessage::Prefix*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QTranslatorMessage::Prefix*)xdata = (QTranslatorMessage::Prefix)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QTranslatorMessage::Prefix*)xdata;
		break;
	    }
	    break;
	}
    }
    ~x_QTranslatorMessage() { qt_Smoke->binding->deleted(344, (void*)this); }
};
void xenum_QTranslatorMessage(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
    x_QTranslatorMessage::xenum_operation(xop, xtype, xdata, xvalue);
}
void xcall_QTranslatorMessage(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QTranslatorMessage *xself = (x_QTranslatorMessage*)obj;
    switch(xi) {
	case 0: x_QTranslatorMessage::x_0(args);	break;
	case 1: x_QTranslatorMessage::x_1(args);	break;
	case 2: x_QTranslatorMessage::x_2(args);	break;
	case 3: x_QTranslatorMessage::x_3(args);	break;
	case 4: x_QTranslatorMessage::x_4(args);	break;
	case 5: x_QTranslatorMessage::x_5(args);	break;
	case 6: x_QTranslatorMessage::x_6(args);	break;
	case 7: x_QTranslatorMessage::x_7(args);	break;
	case 8: x_QTranslatorMessage::x_8(args);	break;
	case 9: x_QTranslatorMessage::x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: xself->x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: xself->x_16(args);	break;
	case 17: xself->x_17(args);	break;
	case 18: xself->x_18(args);	break;
	case 19: xself->x_19(args);	break;
	case 20: xself->x_20(args);	break;
	case 21: xself->x_21(args);	break;
	case 22: xself->x_22(args);	break;
	case 23: xself->x_23(args);	break;
	case 24: xself->x_24(args);	break;
	case 25: xself->x_25(args);	break;
	case 26: xself->x_26(args);	break;
	case 27: delete (QTranslatorMessage*)xself;	break;
    }
}
