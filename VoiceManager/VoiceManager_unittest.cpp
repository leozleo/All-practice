#include "VoiceManager.h"


#define 	DangerVoiceFile		"/home/leo/leo/voice/danger.wav"


int main(void)
{
	printf("this is a test for voice play\r\n");
	CVoiceManager::GetInstance()->TestSound((char *)DangerVoiceFile);
	return 0;
}