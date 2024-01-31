#ifndef SOUND_H
#define SOUND_H

#include <QToolButton>
#include <QMediaPlayer>
#include <string>
#include <QAudioOutput>

class Sound
{
public:
    static void Playsound(std::string button);
    static void LoadSound(std::string button);
    Sound();
    ~Sound();

    QString Soundfiles[11];
    QMediaPlayer *player;
    QAudioOutput *audioOutput;
private:



};

#endif // SOUND_H
