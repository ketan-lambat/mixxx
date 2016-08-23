#ifndef WVERTICALSCROLLAREA_H
#define WVERTICALSCROLLAREA_H

#include <QScrollArea>

class WVerticalScrollArea : public QScrollArea
{
  public:
    WVerticalScrollArea(QWidget* parent = nullptr);

    void setWidget(QWidget* widget);

  protected:
    bool eventFilter(QObject* o, QEvent* e) override;
    void resizeEvent(QResizeEvent* e) override;
    
  private:
    void calcSize();
};

#endif // WVERTICALSCROLLAREA_H