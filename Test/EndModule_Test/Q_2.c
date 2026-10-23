#include<stdio.h>

typedef struct Song {
	int id;
	char name[30];
	char artist[30];
	float duration;
} Song;

void addSong(Song* ptr);
void display(Song* ptr);
void searchById(Song* ptr);

void main() {
	Song arr[3];

	addSong(arr);
	display(arr);
	searchById(arr);
}
void addSong(Song* ptr) {
	int i;

	for( i=0; i<3; i++) {
		printf("\nEnter Song Id: ");
		scanf("%d", &ptr[i].id);

		printf("Enter Song Name: ");
		scanf(" %[^\n]", ptr[i].name);

		printf("Enter Artist Name: ");
		scanf(" %[^\n]", ptr[i].artist);

		printf("Enter Duration: ");
		scanf("%1f", &ptr[i].duration);
	}
	printf("\nSong Added Succesfully.\n");
}
void display(Song* ptr) {
	int i;

	printf("\n\n------Music Library------");

	for(i = 0; i < 3; i++) {
		printf("\nSong Id = %d", ptr[i].id);
		printf("\nSong Name = %s", ptr[i].name);
		printf("\nArtist = %s", ptr[i].artist);
		printf("\nDuration = %f\n", ptr[i].duration);
	}
}
void searchById(Song* ptr) {
	int i, id, found=0;

	printf("\nEnter Search Song Id: ");
	scanf("%d", &id);

	for(i=0; i<3; i++)
		if(ptr[i].id == id) {
			printf("\nSong Found.");
			printf("\nSong Id = %d", ptr[i].id);
			printf("\nSong Name = %s", ptr[i].name);
			printf("\nArtist = %s", ptr[i].artist);
			printf("\nDuration = %1f\n", ptr[i].duration);

			found = 1;
			break;
		}
	if(!found) {
		printf("\nSong not found.");
	}
}
