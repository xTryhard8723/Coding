#include <iostream>
#include <windows.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
  // Pomocí jednièky znaèíme že se nìkde nachází loï
  bool lode[4][4] = {
    { 0, 1, 1, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 1, 0 },
    { 0, 0, 1, 0 }
  };
  string mapa[4][4] = {
  { " 0 "," 0 "," 0 "," 0"},
  { " 0 "," 0 "," 0 "," 0"},
  { " 0 "," 0 "," 0 "," 0"},
  { " 0 "," 0 "," 0 "," 0"}
  };

  // Do techto promenných zapisujeme pocet tahu a zásahu
  int zasahy = 0;
  int tahy = 0;
  int radkymapy = 4;
  int sloupcemapy = 4;
  // Dokud nebude pocet zasahu odpovidat poctu zasahu 1 v poli program pobìží
  while (zasahy < 4) {
        system("cls");
    int radek, sloupec;

    cout << "Zvolte misto strely\n";
    cout << " 0  1  2  3  Sloupec" <<"\n";
    cout << "--------------------" << "\n";
for (int a = 0; a < radkymapy; ++a)
    {
        for (int j = 0; j < sloupcemapy; ++j)
        {
        cout << mapa[a][j];
        }
        cout << "\n";
    }

    // Volba radku
    cout << "Vyberte pozici na radku mezi 0 az 3: ";
    cin >> radek;

    // Volba sloupce
    cout << "Vyberte pozici na sloupci mezi 0 az 3: ";
    cin >> sloupec;

    // Kontrola zda na souøadnici je loï
    if (lode[radek][sloupec]) {
      // Pokud dojde k zasahu zmenime 1 na 0
      lode[radek][sloupec] = 0;
      mapa[radek][sloupec] = " X ";

      // Pøidáme zásah
      zasahy++;

      // Oznámíme zásah a kolik 1 zbývá.
      cout << "Zasah! "  << " zbyva" << (4-zasahy) << "\n\n";
      Sleep(1000);
    } else {
      // Oznameni ze nebylo nic zasazeno
      cout << "Voda\n\n";
      mapa [radek][sloupec] = " V ";
      Sleep(1000);
    }

    // Pricteme tah
    tahy++;
  }

  cout << "Vitezstvi!\n";
  cout << "Vyhrali jste za " << tahy << " tahu";

  return 0;
}
