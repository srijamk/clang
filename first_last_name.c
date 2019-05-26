int main()
{
  char first_name[20];
  char last_name[30];
  char full_name[50];

  printf("Enter your first name: ");
  scanf("%s", first_name);

  getchar();

  printf("Enter your last name: ");
  scanf("%s", last_name);

  strcat(first_name, " ");
  strcat(first_name, last_name);
  strcpy(full_name, first_name);

  printf("Your full name is %s, and its length is %d.\n", full_name, strlen(full_name));
}