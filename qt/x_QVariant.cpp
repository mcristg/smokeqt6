//Auto-generated by kalyptus. DO NOT EDIT.
#include <smoke.h>
#include <qt_smoke.h>
#include <qimage.h>
#include <qkeysequence.h>
#include <qcursor.h>
#include <qiconset.h>
#include <qcolor.h>
#include <qbitarray.h>
#include <qstring.h>
#include <qpointarray.h>
#include <qsize.h>
#include <qvariant.h>
#include <qregion.h>
#include <qpen.h>
#include <qdatastream.h>
#include <qbrush.h>
#include <qstringlist.h>
#include <qpoint.h>
#include <qcstring.h>
#include <qfont.h>
#include <qbitmap.h>
#include <qsizepolicy.h>
#include <qpalette.h>
#include <qdatetime.h>
#include <qpixmap.h>
#include <qrect.h>

class x_QVariant : public QVariant {
public:
    static void x_0(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::Invalid;
    }
    static void x_1(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::Map;
    }
    static void x_2(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::List;
    }
    static void x_3(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::String;
    }
    static void x_4(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::StringList;
    }
    static void x_5(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::Font;
    }
    static void x_6(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::Pixmap;
    }
    static void x_7(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::Brush;
    }
    static void x_8(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::Rect;
    }
    static void x_9(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::Size;
    }
    static void x_10(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::Color;
    }
    static void x_11(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::Palette;
    }
    static void x_12(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::ColorGroup;
    }
    static void x_13(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::IconSet;
    }
    static void x_14(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::Point;
    }
    static void x_15(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::Image;
    }
    static void x_16(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::Int;
    }
    static void x_17(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::UInt;
    }
    static void x_18(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::Bool;
    }
    static void x_19(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::Double;
    }
    static void x_20(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::CString;
    }
    static void x_21(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::PointArray;
    }
    static void x_22(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::Region;
    }
    static void x_23(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::Bitmap;
    }
    static void x_24(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::Cursor;
    }
    static void x_25(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::SizePolicy;
    }
    static void x_26(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::Date;
    }
    static void x_27(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::Time;
    }
    static void x_28(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::DateTime;
    }
    static void x_29(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::ByteArray;
    }
    static void x_30(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::BitArray;
    }
    static void x_31(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::KeySequence;
    }
    static void x_32(Smoke::Stack x) {
	x[0].s_enum = (long)QVariant::Pen;
    }
    static void x_33(Smoke::Stack x) {
	// QVariant()
	x_QVariant* xret = new x_QVariant();
	x[0].s_class = (void*)xret;
    }
    x_QVariant() : QVariant() {
    }
    static void x_34(Smoke::Stack x) {
	// QVariant(const QVariant&)
	x_QVariant* xret = new x_QVariant(*(const QVariant *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QVariant& x1) : QVariant(x1) {
    }
    static void x_35(Smoke::Stack x) {
	// QVariant(QDataStream&)
	x_QVariant* xret = new x_QVariant(*(QDataStream *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(QDataStream& x1) : QVariant(x1) {
    }
    static void x_36(Smoke::Stack x) {
	// QVariant(const QString&)
	x_QVariant* xret = new x_QVariant(*(const QString *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QString& x1) : QVariant(x1) {
    }
    static void x_37(Smoke::Stack x) {
	// QVariant(const QCString&)
	x_QVariant* xret = new x_QVariant(*(const QCString *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QCString& x1) : QVariant(x1) {
    }
    static void x_38(Smoke::Stack x) {
	// QVariant(const char*)
	x_QVariant* xret = new x_QVariant((const char*)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const char* x1) : QVariant(x1) {
    }
    static void x_39(Smoke::Stack x) {
	// QVariant(const QStringList&)
	x_QVariant* xret = new x_QVariant(*(const QStringList *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QStringList& x1) : QVariant(x1) {
    }
    static void x_40(Smoke::Stack x) {
	// QVariant(const QFont&)
	x_QVariant* xret = new x_QVariant(*(const QFont *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QFont& x1) : QVariant(x1) {
    }
    static void x_41(Smoke::Stack x) {
	// QVariant(const QPixmap&)
	x_QVariant* xret = new x_QVariant(*(const QPixmap *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QPixmap& x1) : QVariant(x1) {
    }
    static void x_42(Smoke::Stack x) {
	// QVariant(const QImage&)
	x_QVariant* xret = new x_QVariant(*(const QImage *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QImage& x1) : QVariant(x1) {
    }
    static void x_43(Smoke::Stack x) {
	// QVariant(const QBrush&)
	x_QVariant* xret = new x_QVariant(*(const QBrush *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QBrush& x1) : QVariant(x1) {
    }
    static void x_44(Smoke::Stack x) {
	// QVariant(const QPoint&)
	x_QVariant* xret = new x_QVariant(*(const QPoint *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QPoint& x1) : QVariant(x1) {
    }
    static void x_45(Smoke::Stack x) {
	// QVariant(const QRect&)
	x_QVariant* xret = new x_QVariant(*(const QRect *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QRect& x1) : QVariant(x1) {
    }
    static void x_46(Smoke::Stack x) {
	// QVariant(const QSize&)
	x_QVariant* xret = new x_QVariant(*(const QSize *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QSize& x1) : QVariant(x1) {
    }
    static void x_47(Smoke::Stack x) {
	// QVariant(const QColor&)
	x_QVariant* xret = new x_QVariant(*(const QColor *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QColor& x1) : QVariant(x1) {
    }
    static void x_48(Smoke::Stack x) {
	// QVariant(const QPalette&)
	x_QVariant* xret = new x_QVariant(*(const QPalette *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QPalette& x1) : QVariant(x1) {
    }
    static void x_49(Smoke::Stack x) {
	// QVariant(const QColorGroup&)
	x_QVariant* xret = new x_QVariant(*(const QColorGroup *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QColorGroup& x1) : QVariant(x1) {
    }
    static void x_50(Smoke::Stack x) {
	// QVariant(const QIconSet&)
	x_QVariant* xret = new x_QVariant(*(const QIconSet *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QIconSet& x1) : QVariant(x1) {
    }
    static void x_51(Smoke::Stack x) {
	// QVariant(const QPointArray&)
	x_QVariant* xret = new x_QVariant(*(const QPointArray *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QPointArray& x1) : QVariant(x1) {
    }
    static void x_52(Smoke::Stack x) {
	// QVariant(const QRegion&)
	x_QVariant* xret = new x_QVariant(*(const QRegion *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QRegion& x1) : QVariant(x1) {
    }
    static void x_53(Smoke::Stack x) {
	// QVariant(const QBitmap&)
	x_QVariant* xret = new x_QVariant(*(const QBitmap *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QBitmap& x1) : QVariant(x1) {
    }
    static void x_54(Smoke::Stack x) {
	// QVariant(const QCursor&)
	x_QVariant* xret = new x_QVariant(*(const QCursor *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QCursor& x1) : QVariant(x1) {
    }
    static void x_55(Smoke::Stack x) {
	// QVariant(const QDate&)
	x_QVariant* xret = new x_QVariant(*(const QDate *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QDate& x1) : QVariant(x1) {
    }
    static void x_56(Smoke::Stack x) {
	// QVariant(const QTime&)
	x_QVariant* xret = new x_QVariant(*(const QTime *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QTime& x1) : QVariant(x1) {
    }
    static void x_57(Smoke::Stack x) {
	// QVariant(const QDateTime&)
	x_QVariant* xret = new x_QVariant(*(const QDateTime *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QDateTime& x1) : QVariant(x1) {
    }
    static void x_58(Smoke::Stack x) {
	// QVariant(const QByteArray&)
	x_QVariant* xret = new x_QVariant(*(const QByteArray *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QByteArray& x1) : QVariant(x1) {
    }
    static void x_59(Smoke::Stack x) {
	// QVariant(const QBitArray&)
	x_QVariant* xret = new x_QVariant(*(const QBitArray *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QBitArray& x1) : QVariant(x1) {
    }
    static void x_60(Smoke::Stack x) {
	// QVariant(const QKeySequence&)
	x_QVariant* xret = new x_QVariant(*(const QKeySequence *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QKeySequence& x1) : QVariant(x1) {
    }
    static void x_61(Smoke::Stack x) {
	// QVariant(const QPen&)
	x_QVariant* xret = new x_QVariant(*(const QPen *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QPen& x1) : QVariant(x1) {
    }
    static void x_62(Smoke::Stack x) {
	// QVariant(const QValueList<QVariant>&)
	x_QVariant* xret = new x_QVariant(*(const QValueList<QVariant> *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QValueList<QVariant>& x1) : QVariant(x1) {
    }
    static void x_63(Smoke::Stack x) {
	// QVariant(const QMap<QString, QVariant>&)
	x_QVariant* xret = new x_QVariant(*(const QMap<QString, QVariant> *)x[1].s_voidp);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(const QMap<QString, QVariant>& x1) : QVariant(x1) {
    }
    static void x_64(Smoke::Stack x) {
	// QVariant(int)
	x_QVariant* xret = new x_QVariant((int)x[1].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(int x1) : QVariant(x1) {
    }
    static void x_65(Smoke::Stack x) {
	// QVariant(uint)
	x_QVariant* xret = new x_QVariant((uint)x[1].s_uint);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(uint x1) : QVariant(x1) {
    }
    static void x_66(Smoke::Stack x) {
	// QVariant(bool, int)
	x_QVariant* xret = new x_QVariant((bool)x[1].s_bool,(int)x[2].s_int);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(bool x1, int x2) : QVariant(x1, x2) {
    }
    static void x_67(Smoke::Stack x) {
	// QVariant(double)
	x_QVariant* xret = new x_QVariant((double)x[1].s_double);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(double x1) : QVariant(x1) {
    }
    static void x_68(Smoke::Stack x) {
	// QVariant(QSizePolicy)
	x_QVariant* xret = new x_QVariant(*(QSizePolicy *)x[1].s_class);
	x[0].s_class = (void*)xret;
    }
    x_QVariant(QSizePolicy x1) : QVariant(x1) {
    }
    void x_69(Smoke::Stack x) {
	// operator=(const QVariant&)
	QVariant& xret = this->QVariant::operator=(*(const QVariant *)x[1].s_class);
	x[0].s_class = (void*)&xret;
    }
    void x_70(Smoke::Stack x) const {
	// operator==(const QVariant&)
	bool xret = this->QVariant::operator==(*(const QVariant *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_71(Smoke::Stack x) const {
	// operator!=(const QVariant&)
	bool xret = this->QVariant::operator!=(*(const QVariant *)x[1].s_class);
	x[0].s_bool = xret;
    }
    void x_72(Smoke::Stack x) const {
	// type()
	QVariant::Type xret = this->QVariant::type();
	x[0].s_enum = xret;
    }
    void x_73(Smoke::Stack x) const {
	// typeName()
	const char* xret = this->QVariant::typeName();
	x[0].s_voidp = (void*)xret;
    }
    void x_74(Smoke::Stack x) const {
	// canCast(QVariant::Type)
	bool xret = this->QVariant::canCast((QVariant::Type)x[1].s_enum);
	x[0].s_bool = xret;
    }
    void x_75(Smoke::Stack x) {
	// cast(QVariant::Type)
	bool xret = this->QVariant::cast((QVariant::Type)x[1].s_enum);
	x[0].s_bool = xret;
    }
    void x_76(Smoke::Stack x) const {
	// isValid()
	bool xret = this->QVariant::isValid();
	x[0].s_bool = xret;
    }
    void x_77(Smoke::Stack x) const {
	// isNull()
	bool xret = this->QVariant::isNull();
	x[0].s_bool = xret;
    }
    void x_78(Smoke::Stack x) {
	// clear()
	this->QVariant::clear();
	(void)x; // noop (for compiler warning)
    }
    void x_79(Smoke::Stack x) const {
	// toString()
	const QString xret = this->QVariant::toString();
	x[0].s_voidp = (void*)new QString(xret);
    }
    void x_80(Smoke::Stack x) const {
	// toCString()
	const QCString xret = this->QVariant::toCString();
	x[0].s_voidp = (void*)new QCString(xret);
    }
    void x_81(Smoke::Stack x) const {
	// toStringList()
	const QStringList xret = this->QVariant::toStringList();
	x[0].s_voidp = (void*)new QStringList(xret);
    }
    void x_82(Smoke::Stack x) const {
	// toFont()
	const QFont xret = this->QVariant::toFont();
	x[0].s_class = (void*)new QFont(xret);
    }
    void x_83(Smoke::Stack x) const {
	// toPixmap()
	const QPixmap xret = this->QVariant::toPixmap();
	x[0].s_class = (void*)new QPixmap(xret);
    }
    void x_84(Smoke::Stack x) const {
	// toImage()
	const QImage xret = this->QVariant::toImage();
	x[0].s_class = (void*)new QImage(xret);
    }
    void x_85(Smoke::Stack x) const {
	// toBrush()
	const QBrush xret = this->QVariant::toBrush();
	x[0].s_class = (void*)new QBrush(xret);
    }
    void x_86(Smoke::Stack x) const {
	// toPoint()
	const QPoint xret = this->QVariant::toPoint();
	x[0].s_class = (void*)new QPoint(xret);
    }
    void x_87(Smoke::Stack x) const {
	// toRect()
	const QRect xret = this->QVariant::toRect();
	x[0].s_class = (void*)new QRect(xret);
    }
    void x_88(Smoke::Stack x) const {
	// toSize()
	const QSize xret = this->QVariant::toSize();
	x[0].s_class = (void*)new QSize(xret);
    }
    void x_89(Smoke::Stack x) const {
	// toColor()
	const QColor xret = this->QVariant::toColor();
	x[0].s_class = (void*)new QColor(xret);
    }
    void x_90(Smoke::Stack x) const {
	// toPalette()
	const QPalette xret = this->QVariant::toPalette();
	x[0].s_class = (void*)new QPalette(xret);
    }
    void x_91(Smoke::Stack x) const {
	// toColorGroup()
	const QColorGroup xret = this->QVariant::toColorGroup();
	x[0].s_class = (void*)new QColorGroup(xret);
    }
    void x_92(Smoke::Stack x) const {
	// toIconSet()
	const QIconSet xret = this->QVariant::toIconSet();
	x[0].s_class = (void*)new QIconSet(xret);
    }
    void x_93(Smoke::Stack x) const {
	// toPointArray()
	const QPointArray xret = this->QVariant::toPointArray();
	x[0].s_class = (void*)new QPointArray(xret);
    }
    void x_94(Smoke::Stack x) const {
	// toBitmap()
	const QBitmap xret = this->QVariant::toBitmap();
	x[0].s_class = (void*)new QBitmap(xret);
    }
    void x_95(Smoke::Stack x) const {
	// toRegion()
	const QRegion xret = this->QVariant::toRegion();
	x[0].s_class = (void*)new QRegion(xret);
    }
    void x_96(Smoke::Stack x) const {
	// toCursor()
	const QCursor xret = this->QVariant::toCursor();
	x[0].s_class = (void*)new QCursor(xret);
    }
    void x_97(Smoke::Stack x) const {
	// toDate()
	const QDate xret = this->QVariant::toDate();
	x[0].s_class = (void*)new QDate(xret);
    }
    void x_98(Smoke::Stack x) const {
	// toTime()
	const QTime xret = this->QVariant::toTime();
	x[0].s_class = (void*)new QTime(xret);
    }
    void x_99(Smoke::Stack x) const {
	// toDateTime()
	const QDateTime xret = this->QVariant::toDateTime();
	x[0].s_class = (void*)new QDateTime(xret);
    }
    void x_100(Smoke::Stack x) const {
	// toByteArray()
	const QByteArray xret = this->QVariant::toByteArray();
	x[0].s_voidp = (void*)new QByteArray(xret);
    }
    void x_101(Smoke::Stack x) const {
	// toBitArray()
	const QBitArray xret = this->QVariant::toBitArray();
	x[0].s_voidp = (void*)new QBitArray(xret);
    }
    void x_102(Smoke::Stack x) const {
	// toKeySequence()
	const QKeySequence xret = this->QVariant::toKeySequence();
	x[0].s_class = (void*)new QKeySequence(xret);
    }
    void x_103(Smoke::Stack x) const {
	// toPen()
	const QPen xret = this->QVariant::toPen();
	x[0].s_class = (void*)new QPen(xret);
    }
    void x_104(Smoke::Stack x) const {
	// toInt(bool*)
	int xret = this->QVariant::toInt((bool*)x[1].s_voidp);
	x[0].s_int = xret;
    }
    void x_105(Smoke::Stack x) const {
	// toInt()
	int xret = this->QVariant::toInt();
	x[0].s_int = xret;
    }
    void x_106(Smoke::Stack x) const {
	// toUInt(bool*)
	uint xret = this->QVariant::toUInt((bool*)x[1].s_voidp);
	x[0].s_uint = xret;
    }
    void x_107(Smoke::Stack x) const {
	// toUInt()
	uint xret = this->QVariant::toUInt();
	x[0].s_uint = xret;
    }
    void x_108(Smoke::Stack x) const {
	// toBool()
	bool xret = this->QVariant::toBool();
	x[0].s_bool = xret;
    }
    void x_109(Smoke::Stack x) const {
	// toDouble(bool*)
	double xret = this->QVariant::toDouble((bool*)x[1].s_voidp);
	x[0].s_double = xret;
    }
    void x_110(Smoke::Stack x) const {
	// toDouble()
	double xret = this->QVariant::toDouble();
	x[0].s_double = xret;
    }
    void x_111(Smoke::Stack x) const {
	// toList()
	const QValueList<QVariant> xret = this->QVariant::toList();
	x[0].s_voidp = (void*)new QValueList<QVariant>(xret);
    }
    void x_112(Smoke::Stack x) const {
	// toMap()
	const QMap<QString,QVariant> xret = this->QVariant::toMap();
	x[0].s_voidp = (void*)new QMap<QString,QVariant>(xret);
    }
    void x_113(Smoke::Stack x) const {
	// toSizePolicy()
	QSizePolicy xret = this->QVariant::toSizePolicy();
	x[0].s_class = (void*)new QSizePolicy(xret);
    }
    void x_114(Smoke::Stack x) const {
	// stringListBegin()
	QValueListConstIterator<QString> xret = this->QVariant::stringListBegin();
	x[0].s_voidp = (void*)new QValueListConstIterator<QString>(xret);
    }
    void x_115(Smoke::Stack x) const {
	// stringListEnd()
	QValueListConstIterator<QString> xret = this->QVariant::stringListEnd();
	x[0].s_voidp = (void*)new QValueListConstIterator<QString>(xret);
    }
    void x_116(Smoke::Stack x) const {
	// listBegin()
	QValueListConstIterator<QVariant> xret = this->QVariant::listBegin();
	x[0].s_voidp = (void*)new QValueListConstIterator<QVariant>(xret);
    }
    void x_117(Smoke::Stack x) const {
	// listEnd()
	QValueListConstIterator<QVariant> xret = this->QVariant::listEnd();
	x[0].s_voidp = (void*)new QValueListConstIterator<QVariant>(xret);
    }
    void x_118(Smoke::Stack x) const {
	// mapBegin()
	QMapConstIterator<QString,QVariant> xret = this->QVariant::mapBegin();
	x[0].s_voidp = (void*)new QMapConstIterator<QString,QVariant>(xret);
    }
    void x_119(Smoke::Stack x) const {
	// mapEnd()
	QMapConstIterator<QString,QVariant> xret = this->QVariant::mapEnd();
	x[0].s_voidp = (void*)new QMapConstIterator<QString,QVariant>(xret);
    }
    void x_120(Smoke::Stack x) const {
	// mapFind(const QString&)
	QMapConstIterator<QString,QVariant> xret = this->QVariant::mapFind(*(const QString *)x[1].s_voidp);
	x[0].s_voidp = (void*)new QMapConstIterator<QString,QVariant>(xret);
    }
    void x_121(Smoke::Stack x) {
	// asString()
	QString& xret = this->QVariant::asString();
	x[0].s_voidp = (void*)&xret;
    }
    void x_122(Smoke::Stack x) {
	// asCString()
	QCString& xret = this->QVariant::asCString();
	x[0].s_voidp = (void*)&xret;
    }
    void x_123(Smoke::Stack x) {
	// asStringList()
	QStringList& xret = this->QVariant::asStringList();
	x[0].s_voidp = (void*)&xret;
    }
    void x_124(Smoke::Stack x) {
	// asFont()
	QFont& xret = this->QVariant::asFont();
	x[0].s_class = (void*)&xret;
    }
    void x_125(Smoke::Stack x) {
	// asPixmap()
	QPixmap& xret = this->QVariant::asPixmap();
	x[0].s_class = (void*)&xret;
    }
    void x_126(Smoke::Stack x) {
	// asImage()
	QImage& xret = this->QVariant::asImage();
	x[0].s_class = (void*)&xret;
    }
    void x_127(Smoke::Stack x) {
	// asBrush()
	QBrush& xret = this->QVariant::asBrush();
	x[0].s_class = (void*)&xret;
    }
    void x_128(Smoke::Stack x) {
	// asPoint()
	QPoint& xret = this->QVariant::asPoint();
	x[0].s_class = (void*)&xret;
    }
    void x_129(Smoke::Stack x) {
	// asRect()
	QRect& xret = this->QVariant::asRect();
	x[0].s_class = (void*)&xret;
    }
    void x_130(Smoke::Stack x) {
	// asSize()
	QSize& xret = this->QVariant::asSize();
	x[0].s_class = (void*)&xret;
    }
    void x_131(Smoke::Stack x) {
	// asColor()
	QColor& xret = this->QVariant::asColor();
	x[0].s_class = (void*)&xret;
    }
    void x_132(Smoke::Stack x) {
	// asPalette()
	QPalette& xret = this->QVariant::asPalette();
	x[0].s_class = (void*)&xret;
    }
    void x_133(Smoke::Stack x) {
	// asColorGroup()
	QColorGroup& xret = this->QVariant::asColorGroup();
	x[0].s_class = (void*)&xret;
    }
    void x_134(Smoke::Stack x) {
	// asIconSet()
	QIconSet& xret = this->QVariant::asIconSet();
	x[0].s_class = (void*)&xret;
    }
    void x_135(Smoke::Stack x) {
	// asPointArray()
	QPointArray& xret = this->QVariant::asPointArray();
	x[0].s_class = (void*)&xret;
    }
    void x_136(Smoke::Stack x) {
	// asBitmap()
	QBitmap& xret = this->QVariant::asBitmap();
	x[0].s_class = (void*)&xret;
    }
    void x_137(Smoke::Stack x) {
	// asRegion()
	QRegion& xret = this->QVariant::asRegion();
	x[0].s_class = (void*)&xret;
    }
    void x_138(Smoke::Stack x) {
	// asCursor()
	QCursor& xret = this->QVariant::asCursor();
	x[0].s_class = (void*)&xret;
    }
    void x_139(Smoke::Stack x) {
	// asDate()
	QDate& xret = this->QVariant::asDate();
	x[0].s_class = (void*)&xret;
    }
    void x_140(Smoke::Stack x) {
	// asTime()
	QTime& xret = this->QVariant::asTime();
	x[0].s_class = (void*)&xret;
    }
    void x_141(Smoke::Stack x) {
	// asDateTime()
	QDateTime& xret = this->QVariant::asDateTime();
	x[0].s_class = (void*)&xret;
    }
    void x_142(Smoke::Stack x) {
	// asByteArray()
	QByteArray& xret = this->QVariant::asByteArray();
	x[0].s_voidp = (void*)&xret;
    }
    void x_143(Smoke::Stack x) {
	// asBitArray()
	QBitArray& xret = this->QVariant::asBitArray();
	x[0].s_voidp = (void*)&xret;
    }
    void x_144(Smoke::Stack x) {
	// asKeySequence()
	QKeySequence& xret = this->QVariant::asKeySequence();
	x[0].s_class = (void*)&xret;
    }
    void x_145(Smoke::Stack x) {
	// asPen()
	QPen& xret = this->QVariant::asPen();
	x[0].s_class = (void*)&xret;
    }
    void x_146(Smoke::Stack x) {
	// asInt()
	int& xret = this->QVariant::asInt();
	x[0].s_voidp = (void*)&xret;
    }
    void x_147(Smoke::Stack x) {
	// asUInt()
	uint& xret = this->QVariant::asUInt();
	x[0].s_voidp = (void*)&xret;
    }
    void x_148(Smoke::Stack x) {
	// asBool()
	bool& xret = this->QVariant::asBool();
	x[0].s_voidp = (void*)&xret;
    }
    void x_149(Smoke::Stack x) {
	// asDouble()
	double& xret = this->QVariant::asDouble();
	x[0].s_voidp = (void*)&xret;
    }
    void x_150(Smoke::Stack x) {
	// asList()
	QValueList<QVariant>& xret = this->QVariant::asList();
	x[0].s_voidp = (void*)&xret;
    }
    void x_151(Smoke::Stack x) {
	// asMap()
	QMap<QString,QVariant>& xret = this->QVariant::asMap();
	x[0].s_voidp = (void*)&xret;
    }
    void x_152(Smoke::Stack x) {
	// asSizePolicy()
	QSizePolicy& xret = this->QVariant::asSizePolicy();
	x[0].s_class = (void*)&xret;
    }
    void x_153(Smoke::Stack x) {
	// load(QDataStream&)
	this->QVariant::load(*(QDataStream *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_154(Smoke::Stack x) const {
	// save(QDataStream&)
	this->QVariant::save(*(QDataStream *)x[1].s_class);
	(void)x; // noop (for compiler warning)
    }
    void x_155(Smoke::Stack x) {
	// rawAccess(void*, QVariant::Type, bool)
	void* xret = this->QVariant::rawAccess((void*)x[1].s_voidp,(QVariant::Type)x[2].s_enum,(bool)x[3].s_bool);
	x[0].s_voidp = (void*)xret;
    }
    void x_156(Smoke::Stack x) {
	// rawAccess(void*, QVariant::Type)
	void* xret = this->QVariant::rawAccess((void*)x[1].s_voidp,(QVariant::Type)x[2].s_enum);
	x[0].s_voidp = (void*)xret;
    }
    void x_157(Smoke::Stack x) {
	// rawAccess(void*)
	void* xret = this->QVariant::rawAccess((void*)x[1].s_voidp);
	x[0].s_voidp = (void*)xret;
    }
    void x_158(Smoke::Stack x) {
	// rawAccess()
	void* xret = this->QVariant::rawAccess();
	x[0].s_voidp = (void*)xret;
    }
    static void x_159(Smoke::Stack x) {
	// typeToName(QVariant::Type)
	const char* xret = QVariant::typeToName((QVariant::Type)x[1].s_enum);
	x[0].s_voidp = (void*)xret;
    }
    static void x_160(Smoke::Stack x) {
	// nameToType(const char*)
	QVariant::Type xret = QVariant::nameToType((const char*)x[1].s_voidp);
	x[0].s_enum = xret;
    }
    static void xenum_operation(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
	switch(xtype) {
	  case 739: //QVariant::Type
	    switch(xop) {
	      case Smoke::EnumNew:
		xdata = (void*)new QVariant::Type;
		break;
	      case Smoke::EnumDelete:
		delete (QVariant::Type*)xdata;
		break;
	      case Smoke::EnumFromLong:
		*(QVariant::Type*)xdata = (QVariant::Type)xvalue;
		break;
	      case Smoke::EnumToLong:
		xvalue = (long)*(QVariant::Type*)xdata;
		break;
	    }
	    break;
	}
    }
    ~x_QVariant() { qt_Smoke->binding->deleted(360, (void*)this); }
};
void xenum_QVariant(Smoke::EnumOperation xop, Smoke::Index xtype, void *&xdata, long &xvalue) {
    x_QVariant::xenum_operation(xop, xtype, xdata, xvalue);
}
void xcall_QVariant(Smoke::Index xi, void *obj, Smoke::Stack args) {
    x_QVariant *xself = (x_QVariant*)obj;
    switch(xi) {
	case 0: x_QVariant::x_0(args);	break;
	case 1: x_QVariant::x_1(args);	break;
	case 2: x_QVariant::x_2(args);	break;
	case 3: x_QVariant::x_3(args);	break;
	case 4: x_QVariant::x_4(args);	break;
	case 5: x_QVariant::x_5(args);	break;
	case 6: x_QVariant::x_6(args);	break;
	case 7: x_QVariant::x_7(args);	break;
	case 8: x_QVariant::x_8(args);	break;
	case 9: x_QVariant::x_9(args);	break;
	case 10: x_QVariant::x_10(args);	break;
	case 11: x_QVariant::x_11(args);	break;
	case 12: x_QVariant::x_12(args);	break;
	case 13: x_QVariant::x_13(args);	break;
	case 14: x_QVariant::x_14(args);	break;
	case 15: x_QVariant::x_15(args);	break;
	case 16: x_QVariant::x_16(args);	break;
	case 17: x_QVariant::x_17(args);	break;
	case 18: x_QVariant::x_18(args);	break;
	case 19: x_QVariant::x_19(args);	break;
	case 20: x_QVariant::x_20(args);	break;
	case 21: x_QVariant::x_21(args);	break;
	case 22: x_QVariant::x_22(args);	break;
	case 23: x_QVariant::x_23(args);	break;
	case 24: x_QVariant::x_24(args);	break;
	case 25: x_QVariant::x_25(args);	break;
	case 26: x_QVariant::x_26(args);	break;
	case 27: x_QVariant::x_27(args);	break;
	case 28: x_QVariant::x_28(args);	break;
	case 29: x_QVariant::x_29(args);	break;
	case 30: x_QVariant::x_30(args);	break;
	case 31: x_QVariant::x_31(args);	break;
	case 32: x_QVariant::x_32(args);	break;
	case 33: x_QVariant::x_33(args);	break;
	case 34: x_QVariant::x_34(args);	break;
	case 35: x_QVariant::x_35(args);	break;
	case 36: x_QVariant::x_36(args);	break;
	case 37: x_QVariant::x_37(args);	break;
	case 38: x_QVariant::x_38(args);	break;
	case 39: x_QVariant::x_39(args);	break;
	case 40: x_QVariant::x_40(args);	break;
	case 41: x_QVariant::x_41(args);	break;
	case 42: x_QVariant::x_42(args);	break;
	case 43: x_QVariant::x_43(args);	break;
	case 44: x_QVariant::x_44(args);	break;
	case 45: x_QVariant::x_45(args);	break;
	case 46: x_QVariant::x_46(args);	break;
	case 47: x_QVariant::x_47(args);	break;
	case 48: x_QVariant::x_48(args);	break;
	case 49: x_QVariant::x_49(args);	break;
	case 50: x_QVariant::x_50(args);	break;
	case 51: x_QVariant::x_51(args);	break;
	case 52: x_QVariant::x_52(args);	break;
	case 53: x_QVariant::x_53(args);	break;
	case 54: x_QVariant::x_54(args);	break;
	case 55: x_QVariant::x_55(args);	break;
	case 56: x_QVariant::x_56(args);	break;
	case 57: x_QVariant::x_57(args);	break;
	case 58: x_QVariant::x_58(args);	break;
	case 59: x_QVariant::x_59(args);	break;
	case 60: x_QVariant::x_60(args);	break;
	case 61: x_QVariant::x_61(args);	break;
	case 62: x_QVariant::x_62(args);	break;
	case 63: x_QVariant::x_63(args);	break;
	case 64: x_QVariant::x_64(args);	break;
	case 65: x_QVariant::x_65(args);	break;
	case 66: x_QVariant::x_66(args);	break;
	case 67: x_QVariant::x_67(args);	break;
	case 68: x_QVariant::x_68(args);	break;
	case 69: xself->x_69(args);	break;
	case 70: xself->x_70(args);	break;
	case 71: xself->x_71(args);	break;
	case 72: xself->x_72(args);	break;
	case 73: xself->x_73(args);	break;
	case 74: xself->x_74(args);	break;
	case 75: xself->x_75(args);	break;
	case 76: xself->x_76(args);	break;
	case 77: xself->x_77(args);	break;
	case 78: xself->x_78(args);	break;
	case 79: xself->x_79(args);	break;
	case 80: xself->x_80(args);	break;
	case 81: xself->x_81(args);	break;
	case 82: xself->x_82(args);	break;
	case 83: xself->x_83(args);	break;
	case 84: xself->x_84(args);	break;
	case 85: xself->x_85(args);	break;
	case 86: xself->x_86(args);	break;
	case 87: xself->x_87(args);	break;
	case 88: xself->x_88(args);	break;
	case 89: xself->x_89(args);	break;
	case 90: xself->x_90(args);	break;
	case 91: xself->x_91(args);	break;
	case 92: xself->x_92(args);	break;
	case 93: xself->x_93(args);	break;
	case 94: xself->x_94(args);	break;
	case 95: xself->x_95(args);	break;
	case 96: xself->x_96(args);	break;
	case 97: xself->x_97(args);	break;
	case 98: xself->x_98(args);	break;
	case 99: xself->x_99(args);	break;
	case 100: xself->x_100(args);	break;
	case 101: xself->x_101(args);	break;
	case 102: xself->x_102(args);	break;
	case 103: xself->x_103(args);	break;
	case 104: xself->x_104(args);	break;
	case 105: xself->x_105(args);	break;
	case 106: xself->x_106(args);	break;
	case 107: xself->x_107(args);	break;
	case 108: xself->x_108(args);	break;
	case 109: xself->x_109(args);	break;
	case 110: xself->x_110(args);	break;
	case 111: xself->x_111(args);	break;
	case 112: xself->x_112(args);	break;
	case 113: xself->x_113(args);	break;
	case 114: xself->x_114(args);	break;
	case 115: xself->x_115(args);	break;
	case 116: xself->x_116(args);	break;
	case 117: xself->x_117(args);	break;
	case 118: xself->x_118(args);	break;
	case 119: xself->x_119(args);	break;
	case 120: xself->x_120(args);	break;
	case 121: xself->x_121(args);	break;
	case 122: xself->x_122(args);	break;
	case 123: xself->x_123(args);	break;
	case 124: xself->x_124(args);	break;
	case 125: xself->x_125(args);	break;
	case 126: xself->x_126(args);	break;
	case 127: xself->x_127(args);	break;
	case 128: xself->x_128(args);	break;
	case 129: xself->x_129(args);	break;
	case 130: xself->x_130(args);	break;
	case 131: xself->x_131(args);	break;
	case 132: xself->x_132(args);	break;
	case 133: xself->x_133(args);	break;
	case 134: xself->x_134(args);	break;
	case 135: xself->x_135(args);	break;
	case 136: xself->x_136(args);	break;
	case 137: xself->x_137(args);	break;
	case 138: xself->x_138(args);	break;
	case 139: xself->x_139(args);	break;
	case 140: xself->x_140(args);	break;
	case 141: xself->x_141(args);	break;
	case 142: xself->x_142(args);	break;
	case 143: xself->x_143(args);	break;
	case 144: xself->x_144(args);	break;
	case 145: xself->x_145(args);	break;
	case 146: xself->x_146(args);	break;
	case 147: xself->x_147(args);	break;
	case 148: xself->x_148(args);	break;
	case 149: xself->x_149(args);	break;
	case 150: xself->x_150(args);	break;
	case 151: xself->x_151(args);	break;
	case 152: xself->x_152(args);	break;
	case 153: xself->x_153(args);	break;
	case 154: xself->x_154(args);	break;
	case 155: xself->x_155(args);	break;
	case 156: xself->x_156(args);	break;
	case 157: xself->x_157(args);	break;
	case 158: xself->x_158(args);	break;
	case 159: x_QVariant::x_159(args);	break;
	case 160: x_QVariant::x_160(args);	break;
	case 161: delete (QVariant*)xself;	break;
    }
}
