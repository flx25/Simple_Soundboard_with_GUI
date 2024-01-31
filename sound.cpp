#include "sound.h"

Sound::Sound() {
player = new QMediaPlayer;

    for (int i = 0; i < 11; i++)
    Soundfiles[i] = "";

    audioOutput = new QAudioOutput;
    player->setAudioOutput(audioOutput);

}


Sound::~Sound() {
    delete player;
    delete audioOutput;
}

void Sound::Playsound(std::string button){

}
