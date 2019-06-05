#include <stdio.h>
#define MAX_TITLE_LENGTH  100
#define MAX_ARTIST_LENGTH 50
#define MAX_CDS 3

int main()
{
  char title[MAX_TITLE_LENGTH], artist[MAX_ARTIST_LENGTH];
  char album_or_single, another_cd = 'x';
  int num_tracks, is_album;
  int num_cds = 1;
  float price;

  printf("Welcome to your CD Database.\n\n");

  while (another_cd != 'n' && another_cd != 'N') {
    printf("Please enter your CD details below.\n");

    printf("Type in the title of your CD: ");
    scanf("%[^\n]", title);
    getchar();

    printf("Type in the artist of your CD: ");
    scanf("%[^\n]", artist);
    getchar();

    printf("Type in the number of tracks on your CD: ");
    scanf("%d", &num_tracks);
    getchar();

    while (album_or_single != 'A' && album_or_single != 'S')
    {
      printf("If your CD is an album, type 'A'. Otherwise, type 'S'. ");
      scanf("%c", &album_or_single);
      getchar();
      if (album_or_single != 'A' && album_or_single != 'S')
        printf("Please type a valid response.\n");
    }

    printf("Type in the price of your CD: ");
    scanf("%f", &price);
    getchar();

    printf("\nCD Details:\n============================\nTitle: %s\nArtist: %s\nNumber of Tracks: %d\n", title, artist, num_tracks);

    is_album = album_or_single == 'a' || album_or_single == 'A';
    (is_album) ? printf("Type: Album\nPrice: %.2f\n============================\n", price) : printf("Type: Single\nPrice: %.2f\n============================\n", price);

    getchar();

    printf("Would you like to provide the details for another CD? (y/n) ");
    scanf("%c", &another_cd);
    getchar();

    if (another_cd != 'n' && another_cd != 'N') 
      (num_cds < MAX_CDS) ? ++num_cds : printf("You have already entered details for %d CDs.\n", MAX_CDS);
    
  }

  printf("Goodbye!\n");

}