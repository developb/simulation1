#ifndef EVENT_THREAD_H
#define EVENT_THREAD_H

#include <QThread>

class event_thread : public QThread
{
    Q_OBJECT
    //int event_num=0;
    int clickedfloor,clickedcell;
    public:
    explicit event_thread(QObject *parent=0);
    void handle_floorevent();
    void handle_cellevent();
    void run();

    virtual ~event_thread();
    public slots:
    void set_event(int,int);
    void set_event(int);

};

#endif

// EVENT_THREAD_H
