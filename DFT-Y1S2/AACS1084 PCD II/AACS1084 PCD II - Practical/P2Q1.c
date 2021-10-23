#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)

typedef struct
{
	char performerName[20], songName[20];
	int yearReleased, playingTime,playTime;
}Songs;

void main()
{
	int playTime = 0,playTime1=0, min, sec, songLT2015 = 0, countSong=0,range1,range2,min1,sec1;
	char search[20];
	Songs songList[10];
	for (int i = 0; i < 10; i++)
	{
		printf("Performer Name[%d] :", i+1);
		rewind(stdin);
		scanf("%[^\n]", &songList[i].performerName);
		printf("Song's Name[%d] :", i+1);
		rewind(stdin);
		scanf("%[^\n]", &songList[i].songName);
		printf("Year Released[%d] :", i+1);
		scanf("%d", &songList[i].yearReleased);
		printf("Playing Time[%d] :", i+1);
		scanf("%d", &songList[i].playingTime);
		if (songList[i].yearReleased <= 2015)
			songLT2015++;
	}

	printf("\n\nMY COLLECTION OF SONGS\n");
	printf("______________________\n");
	printf("        Performer     Song        Year released      Playing Time\n");
	printf("-----------------------------------------------------------\n");
	
	for (int i = 0; i < 10; i++)
	{
		printf("%15s%15s%15d%18d\n", songList[i].performerName, songList[i].songName, songList[i].yearReleased, songList[i].playingTime);
		playTime+= songList[i].playingTime;
	}
	printf("-----------------------------------------------------\n");
	min = playTime / 60;
	sec = playTime % 60;
	printf("Total Playing Time = %d seconds (%d min %d sec)\n", playTime, min, sec);
	printf("\n--------------------------------\n");
	printf("List of songs - 2015 and earlier\n");
	printf("%d song(s) listed\n", songLT2015);
	printf("\n-------------------------------\n\n");

		printf("1. Performer's Name to search > ");
		rewind(stdin);
		scanf("%[^\n]", &search);
		printf("2. Playing Time Range - From > ");
		scanf("%d", &range1);
		printf("                        To   > ");
		scanf("%d", &range2);
		printf("        Performer     Song        Year released      Playing Time\n");
		printf("-----------------------------------------------------------------\n");
		for (int i = 0;i < 10;i++)
		{
			if (strcmp(search, songList[i].performerName) == 0 && songList[i].playingTime>range1 && songList[i].playingTime<range2)
			{
				printf("%10s%15s%15d%15d\n",songList[i].performerName, songList[i].songName, songList[i].yearReleased, songList[i].playingTime);
				countSong++;
				playTime1 += songList[i].playingTime;
			}
		}
		printf("---------------------------------------------------------------\n");
		printf("%d record(s) for Performer's Name = %s\n", countSong, search);
		min1 = playTime1 / 60;
		sec1 = playTime1 % 60;
		printf("   Total Playing Time = %d (= %d min %d sec) \n", playTime1, min1, sec1);

	system("pause");

}