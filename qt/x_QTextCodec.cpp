//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qcstring.h>
#include <qstring.h>
#include <qtextcodec.h>

class x_QTextCodec : public QTextCodec {
public:
    void x_0(Smoke::Stack x) const {
	// mimeName()
	const char* xret = this->QTextCodec::mimeName();
	x[0].s_voidp = (void*)xret;
    }
    void x_1(Smoke::Stack x) const {
	// makeDecoder()
	QTextDecoder* xret = this->QTextCodec::makeDecoder();
	x[0].s_class = (void*)xret;
    }
    void x_2(Smoke::Stack x) const {
	// makeEncoder()
	QTextEncoder* xret = this->QTextCodec::makeEncoder();
	x[0].s_class = (void*)xret;
    }
    void x_3(Smoke::Stack x) const {
	// toUnicode(const char*, int)
	QString xret = this->QTextCodec::toUnicode((const char*)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_4(Smoke::Stack x) const {
	// fromUnicode(const QString&, int&)
	QCString xret = this->QTextCodec::fromUnicode(*(const QString *)x[1].s_voidp,*(int *)x[2].s_voidp);
	x[0].s_voidp = (void*)new QCString(xret);
    }
    void x_5(Smoke::Stack x) const {
	// fromUnicode(const QString&)
	QCString xret = this->QTextCodec::fromUnicode(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QCString(xret);
    }
    void x_6(Smoke::Stack x) const {
	// toUnicode(const QByteArray&, int)
	QString xret = this->QTextCodec::toUnicode(*(const QByteArray *)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_7(Smoke::Stack x) const {
	// toUnicode(const QByteArray&)
	QString xret = this->QTextCodec::toUnicode(*(const QByteArray *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_8(Smoke::Stack x) const {
	// toUnicode(const QCString&, int)
	QString xret = this->QTextCodec::toUnicode(*(const QCString *)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_9(Smoke::Stack x) const {
	// toUnicode(const QCString&)
	QString xret = this->QTextCodec::toUnicode(*(const QCString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_10(Smoke::Stack x) const {
	// toUnicode(const char*)
	QString xret = this->QTextCodec::toUnicode((const char*)x[1].s_voidp);
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_11(Smoke::Stack x) const {
	// canEncode(QChar)
	bool xret = this->QTextCodec::canEncode(*(QChar *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_12(Smoke::Stack x) const {
	// canEncode(const QString&)
	bool xret = this->QTextCodec::canEncode(*(const QString *)x[1].s_voidp);
	x[0].s_bool = xret;
    }
    void x_13(Smoke::Stack x) const {
	// heuristicNameMatch(const char*)
	int xret = this->QTextCodec::heuristicNameMatch((const char*)x[1].s_voidp);
	x[0].s_int = xret;
    }
    void x_14(Smoke::Stack x) const {
	// fromUnicode(const QString&, int, int)
	QByteArray xret = this->QTextCodec::fromUnicode(*(const QString *)x[1].s_voidp,(int)x[2].s_int,(int)x[3].s_int);
	x[0].s_voidp = (void*)new QByteArray(xret);
    }
    void x_15(Smoke::Stack x) const {
	// characterFromUnicode(const QString&, int)
	unsigned short xret = this->QTextCodec::characterFromUnicode(*(const QString *)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_ushort = xret;
    }
    static void x_16(Smoke::Stack x) {
	// QTextCodec(const QTextCodec&)
	x_QTextCodec* xret = new x_QTextCodec(*(const QTextCodec *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QTextCodec(const QTextCodec& x1) : QTextCodec(x1) {
    }
    static void x_17(Smoke::Stack x) {
	// loadCharmap(QIODevice*)
	QTextCodec* xret = QTextCodec::loadCharmap((QIODevice*)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    static void x_18(Smoke::Stack x) {
	// loadCharmapFile(QString)
	QTextCodec* xret = QTextCodec::loadCharmapFile(*(QString *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    static void x_19(Smoke::Stack x) {
	// codecForMib(int)
	QTextCodec* xret = QTextCodec::codecForMib((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    static void x_20(Smoke::Stack x) {
	// codecForName(const char*, int)
	QTextCodec* xret = QTextCodec::codecForName((const char*)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    static void x_21(Smoke::Stack x) {
	// codecForName(const char*)
	QTextCodec* xret = QTextCodec::codecForName((const char*)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    static void x_22(Smoke::Stack x) {
	// codecForContent(const char*, int)
	QTextCodec* xret = QTextCodec::codecForContent((const char*)x[1].s_voidp,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    static void x_23(Smoke::Stack x) {
	// codecForIndex(int)
	QTextCodec* xret = QTextCodec::codecForIndex((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    static void x_24(Smoke::Stack x) {
	// codecForLocale()
	QTextCodec* xret = QTextCodec::codecForLocale();
	x[0].s_class = (void*)xret;
    }
    static void x_25(Smoke::Stack x) {
	// setCodecForLocale(QTextCodec*)
	QTextCodec::setCodecForLocale((QTextCodec*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    static void x_26(Smoke::Stack x) {
	// codecForTr()
	QTextCodec* xret = QTextCodec::codecForTr();
	x[0].s_class = (void*)xret;
    }
    static void x_27(Smoke::Stack x) {
	// setCodecForTr(QTextCodec*)
	QTextCodec::setCodecForTr((QTextCodec*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    static void x_28(Smoke::Stack x) {
	// codecForCStrings()
	QTextCodec* xret = QTextCodec::codecForCStrings();
	x[0].s_class = (void*)xret;
    }
    static void x_29(Smoke::Stack x) {
	// setCodecForCStrings(QTextCodec*)
	QTextCodec::setCodecForCStrings((QTextCodec*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    static void x_30(Smoke::Stack x) {
	// deleteAllCodecs()
	QTextCodec::deleteAllCodecs();
	(void)x; // noop (for compiler warning)
    }
    static void x_31(Smoke::Stack x) {
	// locale()
	const char* xret = QTextCodec::locale();
	x[0].s_voidp = (void*)xret;
    }
    static void x_32(Smoke::Stack x) {
	// QTextCodec()
	x_QTextCodec* xret = new x_QTextCodec();
	x[0].s_class = (void*)xret;
    }
    x_QTextCodec() : QTextCodec() {
    }
    static void x_33(Smoke::Stack x) {
	// simpleHeuristicNameMatch(const char*, const char*)
	int xret = QTextCodec::simpleHeuristicNameMatch((const char*)x[1].s_voidp,(const char*)x[2].s_voidp);
	x[0].s_int = xret;
    }
    virtual bool canEncode(QChar x1) const {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(10564, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QTextCodec::canEncode(x1);
    }
    virtual bool canEncode(const QString& x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(10565, (void*)this, x)) return (bool)x[0].s_bool;
	return this->QTextCodec::canEncode(x1);
    }
    virtual unsigned short characterFromUnicode(const QString& x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(10569, (void*)this, x)) {
	    unsigned short *xptr = (unsigned short *)x[0].s_class;
	    unsigned short xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTextCodec::characterFromUnicode(x1, x2);
    }
    virtual QCString fromUnicode(const QString& x1, int& x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)&x1;
	x[2].s_voidp = (void*)&x2;
	if(qt_Smoke->binding->callMethod(10557, (void*)this, x)) {
	    QCString *xptr = (QCString *)x[0].s_class;
	    QCString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTextCodec::fromUnicode(x1, x2);
    }
    virtual QByteArray fromUnicode(const QString& x1, int x2, int x3) const {
	Smoke::StackItem x[4];
	x[1].s_voidp = (void*)&x1;
	x[2].s_int = x2;
	x[3].s_int = x3;
	if(qt_Smoke->binding->callMethod(10568, (void*)this, x)) {
	    QByteArray *xptr = (QByteArray *)x[0].s_class;
	    QByteArray xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTextCodec::fromUnicode(x1, x2, x3);
    }
    virtual int heuristicContentMatch(const char* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_int = x2;
	qt_Smoke->binding->callMethod(10566, (void*)this, x, true /*pure virtual*/);
	return (int)x[0].s_int;
	// ABSTRACT
    }
    virtual int heuristicNameMatch(const char* x1) const {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)x1;
	if(qt_Smoke->binding->callMethod(10567, (void*)this, x)) return (int)x[0].s_int;
	return this->QTextCodec::heuristicNameMatch(x1);
    }
    virtual QTextDecoder* makeDecoder() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(10554, (void*)this, x)) return (QTextDecoder*)x[0].s_class;
	return this->QTextCodec::makeDecoder();
    }
    virtual QTextEncoder* makeEncoder() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(10555, (void*)this, x)) return (QTextEncoder*)x[0].s_class;
	return this->QTextCodec::makeEncoder();
    }
    virtual int mibEnum() const {
	Smoke::StackItem x[1];
	qt_Smoke->binding->callMethod(10553, (void*)this, x, true /*pure virtual*/);
	return (int)x[0].s_int;
	// ABSTRACT
    }
    virtual const char* mimeName() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(10552, (void*)this, x)) return (const char*)x[0].s_class;
	return this->QTextCodec::mimeName();
    }
    virtual const char* name() const {
	Smoke::StackItem x[1];
	qt_Smoke->binding->callMethod(10551, (void*)this, x, true /*pure virtual*/);
	return (const char*)x[0].s_class;
	// ABSTRACT
    }
    virtual QString toUnicode(const char* x1, int x2) const {
	Smoke::StackItem x[3];
	x[1].s_voidp = (void*)x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(10556, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTextCodec::toUnicode(x1, x2);
    }
    ~x_QTextCodec() { qt_Smoke->binding->deleted(324, (void*)this); }
};
void xcall_QTextCodec(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QTextCodec *xself = (x_QTextCodec*)obj;
    switch(xi) {
	case 0: xself->x_0(args);	break;
	case 1: xself->x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: xself->x_9(args);	break;
	case 10: xself->x_10(args);	break;
	case 11: xself->x_11(args);	break;
	case 12: xself->x_12(args);	break;
	case 13: xself->x_13(args);	break;
	case 14: xself->x_14(args);	break;
	case 15: xself->x_15(args);	break;
	case 16: x_QTextCodec::x_16(args);	break;
	case 17: x_QTextCodec::x_17(args);	break;
	case 18: x_QTextCodec::x_18(args);	break;
	case 19: x_QTextCodec::x_19(args);	break;
	case 20: x_QTextCodec::x_20(args);	break;
	case 21: x_QTextCodec::x_21(args);	break;
	case 22: x_QTextCodec::x_22(args);	break;
	case 23: x_QTextCodec::x_23(args);	break;
	case 24: x_QTextCodec::x_24(args);	break;
	case 25: x_QTextCodec::x_25(args);	break;
	case 26: x_QTextCodec::x_26(args);	break;
	case 27: x_QTextCodec::x_27(args);	break;
	case 28: x_QTextCodec::x_28(args);	break;
	case 29: x_QTextCodec::x_29(args);	break;
	case 30: x_QTextCodec::x_30(args);	break;
	case 31: x_QTextCodec::x_31(args);	break;
	case 32: x_QTextCodec::x_32(args);	break;
	case 33: x_QTextCodec::x_33(args);	break;
	case 34: delete (QTextCodec*)xself;	break;
    }
}
