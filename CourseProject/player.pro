TEMPLATE = app
TARGET = MusicPlayer

QT += multimedia \
      multimediawidgets \
      widgets

HEADERS = \
    player.h \
    playercontrols.h \
    playlistmodel.h \
    
SOURCES = main.cpp \
    player.cpp \
    playercontrols.cpp \
    playlistmodel.cpp \
