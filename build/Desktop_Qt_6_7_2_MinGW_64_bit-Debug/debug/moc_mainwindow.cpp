/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "durationChanged",
    "",
    "duration",
    "positionChanged",
    "progress",
    "on_play_button_clicked",
    "on_stop_button_clicked",
    "on_actionOpen_Files_triggered",
    "on_volume_slider_valueChanged",
    "value",
    "on_repeat_button_clicked",
    "on_backward_button_clicked",
    "on_forward_button_clicked",
    "on_mute_button_clicked",
    "on_song_progress_slider_valueChanged",
    "on_song_progress_slider_sliderMoved",
    "position"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x08,    1 /* Private */,
       4,    1,   89,    2, 0x08,    3 /* Private */,
       6,    0,   92,    2, 0x08,    5 /* Private */,
       7,    0,   93,    2, 0x08,    6 /* Private */,
       8,    0,   94,    2, 0x08,    7 /* Private */,
       9,    1,   95,    2, 0x08,    8 /* Private */,
      11,    0,   98,    2, 0x08,   10 /* Private */,
      12,    0,   99,    2, 0x08,   11 /* Private */,
      13,    0,  100,    2, 0x08,   12 /* Private */,
      14,    0,  101,    2, 0x08,   13 /* Private */,
      15,    1,  102,    2, 0x08,   14 /* Private */,
      16,    1,  105,    2, 0x08,   16 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   17,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'durationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'positionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'on_play_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stop_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionOpen_Files_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_volume_slider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_repeat_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backward_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_forward_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_mute_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_song_progress_slider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_song_progress_slider_sliderMoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->durationChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 1: _t->positionChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 2: _t->on_play_button_clicked(); break;
        case 3: _t->on_stop_button_clicked(); break;
        case 4: _t->on_actionOpen_Files_triggered(); break;
        case 5: _t->on_volume_slider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_repeat_button_clicked(); break;
        case 7: _t->on_backward_button_clicked(); break;
        case 8: _t->on_forward_button_clicked(); break;
        case 9: _t->on_mute_button_clicked(); break;
        case 10: _t->on_song_progress_slider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->on_song_progress_slider_sliderMoved((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
