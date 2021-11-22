#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <unistd.h>

typedef struct { 
    char ChunkID[4]; 
    int ChunkSize; 
    char Format[4]; 
    char SubChunk1ID[4];
    int SubChunk1Size; 
    short AudioFormat; 
    short NumChannels;
    int SampleRate;
    int ByteRate; 
    short BlockAlign;
    short BitsPerSample; 
    char SubChunk2ID[4]; 
    int SubChunk2Size; 
} Head; 

int main(int argc, char const *argv[]) { 
    Head head; 
    int i, nSamples; 
    short sample; 
    FILE * in = fopen (argv[1], "rb"); 
    FILE * out = fopen (argv[2], "wb"); 
    fread (&head, 44, 1, in);
    fwrite (&head, 44, 1, out);
    nSamples = (head.SubChunk2Size / head.BlockAlign);
    for (i = 0; i < nSamples; i ++) {
        fread (&sample, sizeof (short), 1, in);
        sample *= 0.5;
        fwrite (&sample, sizeof (short), 1, out);
    }
    for (i = 0; i < 74; i ++) {
        fread (&sample, sizeof (short), 1, in);
        fwrite (&sample, sizeof (short), 1, out);
    }
    fclose (in);
    fclose (out);
    return 0;
}
