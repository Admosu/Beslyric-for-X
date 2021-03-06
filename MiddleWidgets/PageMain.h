﻿#ifndef PAGEMAIN_H
#define PAGEMAIN_H

#include <QWidget>
#include "SubPageMaking.h"
#include "SubPageDownloadSong.h"
#include "SubPageDownloadLyric.h"
#include "BoxPageLyricList.h"
#include "BoxPagePreviewLyric.h"
#include <QStackedLayout>
#include "BesButton.h"

class PageMain : public QWidget
{
    Q_OBJECT

public:
    PageMain(QWidget *parent = 0);
    ~PageMain();

    void initEntity();
    void initLayout();
    void initConnection();

public slots:
    void onAutoSelectRawLyric(const QString& RawlyricPath);
    void onAutoSelectMusic(const QString& musicPath);
    void onLoadLyricGuess(QString strSong, QString strArtist);
    void onLoadNcmGuess(QString strSong, QString strArtist);

public:
    void setFinalSkinName(QString);                     //设置最终使用的皮肤名

public:
    QWidget*                leftBoardMainPage;

    BesButton*              btnMakingLyric;
    BesButton*              btnDownloadSong;
    BesButton*              btnDownloadLyric;

    BoxPageLyricList*       boxPageLyricList;
    BoxPagePreviewLyric*    boxPagePreviewLyric;

    QWidget*                subPageContainer;
    QStackedLayout*         subpageStackedLayout;
    SubPageMaking*          subPageMaking;
    SubPageDownloadSong*    subPageDownloadSong;
    SubPageDownloadLyric*   subPageDownloadLyric;
};

#endif // PAGEMAIN_H
