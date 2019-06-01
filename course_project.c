#include <stdio.h>

int main()
{
  char title[100], artist[50];
  char album_or_single = 'x';
  int num_tracks, is_album;
  float price;

  printf("Welcome to your CD Database.\n\n");
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
  if (is_album)
    printf("Type: Album\nPrice: %.2f\n============================\n", price);
  else
    printf("Type: Single\nPrice: %.2f\n============================\n", price);

  getchar();
}