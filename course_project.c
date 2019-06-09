#include <stdio.h>
#define MAX_TITLE_LENGTH 100
#define MAX_ARTIST_LENGTH 50
#define MAX_CDS 3

char title[MAX_TITLE_LENGTH], artist[MAX_ARTIST_LENGTH];
float price;
int num_tracks, is_album;

void output(char title[], char artist[], int num_tracks, char album_or_single, float price)
{
  printf("\nCD Details:\n============================\nTitle: %s\nArtist: %s\nNumber of Tracks: %d\n", title, artist, num_tracks);
  (album_or_single == 'a' || album_or_single == 'A') ? printf("Type: Album\nPrice: %.2f\n============================\n", price) : printf("Type: Single\nPrice: %.2f\n============================\n", price);
  getchar();
}

char yesno(char str[], char c1, char c2)
{
  char c = 'x';
  printf("%s\n", str);
  while (c != c1 && c != c2)
    scanf("%c", &c);
  return c;
}

void say_goodbye()
{
  printf("Goodbye!\n");
}

void input()
{
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

  printf("Type in the price of your CD: ");
  scanf("%f", &price);
  getchar();
}

int main()
{
  char album_or_single, another_cd = 'x';
  int num_cds = 1;

  printf("Welcome to your CD Database.\n\n");

  while (another_cd != 'n' && another_cd != 'N')
  {
    input();
    album_or_single = yesno("If your CD is an album, type 'A'. Otherwise, type 'S'.", 'A', 'S');
    output(title, artist, num_tracks, album_or_single, price);
    another_cd = yesno("Would you like to provide the details for another CD? (y/n) ", 'y', 'n');
    getchar();

    if (another_cd == 'y')
      (num_cds < MAX_CDS) ? ++num_cds : printf("You have already entered details for %d CDs.\n", MAX_CDS);
  }

  say_goodbye();
}