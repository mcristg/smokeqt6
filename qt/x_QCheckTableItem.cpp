//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qpalette.h>
#include <qstring.h>
#include <qpixmap.h>
#include <qrect.h>
#include <qsize.h>
#include <qtable.h>

class x_QCheckTableItem : public QCheckTableItem {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_class = (void*)new int(QCheckTableItem::RTTI);
    }
    static void x_1(Smoke::Stack x) {
	// QCheckTableItem(QTable*, const QString&)
	x_QCheckTableItem* xret = new x_QCheckTableItem((QTable*)x[1].s_class,*(const QString *)x[2].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QCheckTableItem(QTable* x1, const QString& x2) : QCheckTableItem(x1, x2) {
    }
    void x_2(Smoke::Stack x) const {
	// createEditor()
	QWidget* xret = this->QCheckTableItem::createEditor();
	x[0].s_class = (void*)xret;
    }
    void x_3(Smoke::Stack x) {
	// setContentFromEditor(QWidget*)
	this->QCheckTableItem::setContentFromEditor((QWidget*)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_4(Smoke::Stack x) {
	// paint(QPainter*, const QColorGroup&, const QRect&, bool)
	this->QCheckTableItem::paint((QPainter*)x[1].s_class,*(const QColorGroup *)x[2].s_class,*(const QRect *)x[3].s_class,(bool)x[4].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_5(Smoke::Stack x) {
	// setChecked(bool)
	this->QCheckTableItem::setChecked((bool)x[1].s_bool);
	(void)x; // noop (for compiler warning)
    }
    void x_6(Smoke::Stack x) const {
	// isChecked()
	bool xret = this->QCheckTableItem::isChecked();
	x[0].s_bool = xret;
    }
    void x_7(Smoke::Stack x) const {
	// rtti()
	int xret = this->QCheckTableItem::rtti();
	x[0].s_int = xret;
    }
    void x_8(Smoke::Stack x) const {
	// sizeHint()
	QSize xret = this->QCheckTableItem::sizeHint();
	x[0].s_class = (void*)new QSize(xret);
    }
    static void x_9(Smoke::Stack x) {
	// QCheckTableItem(const QCheckTableItem&)
	x_QCheckTableItem* xret = new x_QCheckTableItem(*(const QCheckTableItem *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QCheckTableItem(const QCheckTableItem& x1) : QCheckTableItem(x1) {
    }
    virtual int alignment() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(10458, (void*)this, x)) return (int)x[0].s_int;
	return this->QTableItem::alignment();
    }
    virtual QWidget* createEditor() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(1123, (void*)this, x)) return (QWidget*)x[0].s_class;
	return this->QCheckTableItem::createEditor();
    }
    virtual QString key() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(10466, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTableItem::key();
    }
    virtual void paint(QPainter* x1, const QColorGroup& x2, const QRect& x3, bool x4) {
	Smoke::StackItem x[5];
	x[1].s_class = (void*)x1;
	x[2].s_class = (void*)&x2;
	x[3].s_class = (void*)&x3;
	x[4].s_bool = x4;
	if(qt_Smoke->binding->callMethod(1125, (void*)this, x)) return;
	this->QCheckTableItem::paint(x1, x2, x3, x4);
    }
    virtual QPixmap pixmap() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(10453, (void*)this, x)) {
	    QPixmap *xptr = (QPixmap *)x[0].s_class;
	    QPixmap xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTableItem::pixmap();
    }
    virtual int rtti() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(1128, (void*)this, x)) return (int)x[0].s_int;
	return this->QCheckTableItem::rtti();
    }
    virtual void setChecked(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(1126, (void*)this, x)) return;
	this->QCheckTableItem::setChecked(x1);
    }
    virtual void setCol(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(10472, (void*)this, x)) return;
	this->QTableItem::setCol(x1);
    }
    virtual void setContentFromEditor(QWidget* x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)x1;
	if(qt_Smoke->binding->callMethod(1124, (void*)this, x)) return;
	this->QCheckTableItem::setContentFromEditor(x1);
    }
    virtual void setEnabled(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(10477, (void*)this, x)) return;
	this->QTableItem::setEnabled(x1);
    }
    virtual void setPixmap(const QPixmap& x1) {
	Smoke::StackItem x[2];
	x[1].s_class = (void*)&x1;
	if(qt_Smoke->binding->callMethod(10455, (void*)this, x)) return;
	this->QTableItem::setPixmap(x1);
    }
    virtual void setReplaceable(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(10464, (void*)this, x)) return;
	this->QTableItem::setReplaceable(x1);
    }
    virtual void setRow(int x1) {
	Smoke::StackItem x[2];
	x[1].s_int = x1;
	if(qt_Smoke->binding->callMethod(10471, (void*)this, x)) return;
	this->QTableItem::setRow(x1);
    }
    virtual void setSpan(int x1, int x2) {
	Smoke::StackItem x[3];
	x[1].s_int = x1;
	x[2].s_int = x2;
	if(qt_Smoke->binding->callMethod(10468, (void*)this, x)) return;
	this->QTableItem::setSpan(x1, x2);
    }
    virtual void setText(const QString& x1) {
	Smoke::StackItem x[2];
	x[1].s_voidp = (void*)&x1;
	if(qt_Smoke->binding->callMethod(10456, (void*)this, x)) return;
	this->QTableItem::setText(x1);
    }
    virtual void setWordWrap(bool x1) {
	Smoke::StackItem x[2];
	x[1].s_bool = x1;
	if(qt_Smoke->binding->callMethod(10459, (void*)this, x)) return;
	this->QTableItem::setWordWrap(x1);
    }
    virtual QSize sizeHint() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(1129, (void*)this, x)) {
	    QSize *xptr = (QSize *)x[0].s_class;
	    QSize xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QCheckTableItem::sizeHint();
    }
    virtual QString text() const {
	Smoke::StackItem x[1];
	if(qt_Smoke->binding->callMethod(10454, (void*)this, x)) {
	    QString *xptr = (QString *)x[0].s_class;
	    QString xret(*xptr);
	    delete xptr;
	    return xret;
	}
	return this->QTableItem::text();
    }
    ~x_QCheckTableItem() { qt_Smoke->binding->deleted(38, (void*)this); }
};
void xcall_QCheckTableItem(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QCheckTableItem *xself = (x_QCheckTableItem*)obj;
    switch(xi) {
	case 0: x_QCheckTableItem::x_0(args);	break;
	case 1: x_QCheckTableItem::x_1(args);	break;
	case 2: xself->x_2(args);	break;
	case 3: xself->x_3(args);	break;
	case 4: xself->x_4(args);	break;
	case 5: xself->x_5(args);	break;
	case 6: xself->x_6(args);	break;
	case 7: xself->x_7(args);	break;
	case 8: xself->x_8(args);	break;
	case 9: x_QCheckTableItem::x_9(args);	break;
	case 10: delete (QCheckTableItem*)xself;	break;
    }
}
