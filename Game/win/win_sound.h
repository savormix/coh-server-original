#ifndef _WIN_SOUND_H
#define _WIN_SOUND_H

#define AUDIO_DIR "audio"

// Generated by mkproto
void X_RewindSound(int channel,void *sound_data);
void X_UpdateSound(int channel,int volume,int pan);
void X_PlaySound(int channel,void *sound_data,int volume,int pan,int loop,char *name);
void X_StopSound(int channel);
int X_SoundPlaying(int channel,float time);
void X_StopAllSounds(int except_me);
void X_UpdateAudio();
void X_InitAudio();
void PlayCDTrack(int track);
void X_ExitAudio();
void *X_LoadAudioFile(char *fname);
int X_AudioBytes(void *sound_data);
void X_FreeAudioFile(void *sound_data);

// End mkproto
#endif