#include <stdio.h>
#define MAX_TITLE_LENGTH 100
#define MAX_ARTIST_LENGTH 50
#define MAX_CDS 3
#define NO_CDS 100

struct cd_type
{
  char title[MAX_TITLE_LENGTH];
#ifndef NOARTIST
  char artist[MAX_ARTIST_LENGTH];
#endif
  int num_tracks;
  char album_or_single;
  float price;
};

typedef struct cd_type cd_t;

void enter(char prompt[]);
int read_int(char prompt[]);
cd_t read_cd();
void print_cd(cd_t cd);

void print_cd(cd_t cd)
{
  printf("\nCD Details:\n============================\nTitle: %s\nArtist: %s\nNumber of Tracks: %d\n", cd.title, cd.artist, cd.num_tracks);
  (cd.album_or_single == 'a' || cd.album_or_single == 'A') ? printf("Type: Album\nPrice: %.2f\n============================\n", cd.price) : printf("Type: Single\nPrice: %.2f\n============================\n", cd.price);
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

cd_t read_cd()
{
  cd_t cd;
  printf("Please enter your CD details below.\n");

  printf("Type in the title of your CD: ");
  scanf("%[^\n]", cd.title);
  getchar();

  printf("Type in the artist of your CD: ");
  scanf("%[^\n]", cd.artist);
  getchar();

  printf("Type in the number of tracks on your CD: ");
  scanf("%d", &cd.num_tracks);
  getchar();

  printf("Type in the price of your CD: ");
  scanf("%f", &cd.price);
  getchar();

  return cd;
}

int main()
{

  char album_or_single, another_cd = 'x';
  cd_t cds[NO_CDS];
  int num_cds = 0;

  printf("Welcome to your CD Database.\n\n");

  while (another_cd != 'n' && another_cd != 'N')
  {
    read_cd();
    album_or_single = yesno("If your CD is an album, type 'A'. Otherwise, type 'S'.", 'A', 'S');
    cds[num_cds] = read_cd();
    getchar();

    another_cd = yesno("Would you like to provide the details for another CD? (y/n) ", 'y', 'n');
    getchar();

    if (another_cd == 'y')
      (num_cds < MAX_CDS) ? ++num_cds : printf("You have already entered details for %d CDs.\n", MAX_CDS);
  }

  for (int i = 0; i < num_cds; i++)
  {
    printf("The details of CD #%d\n are: \n", i + 1);
    print_cd(cds[i]);
  }

  say_goodbye();
}
