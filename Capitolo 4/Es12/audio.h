/* Author: Matteo Gianferrari
 * Data: 19/03/2022
 */
#ifndef __AUDIO_H__
#define __AUDIO_H__

#define N_CHANNELS 2

struct audio {
	size_t samples;
	int16_t *left;
	int16_t *right;
};

int audio_read(const char *filename, struct audio *a);

#endif
