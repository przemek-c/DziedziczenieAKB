﻿// DziedziczenieAKB.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Figure.h"
#include "Rectangle.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"


int main()
{
  Rectangle R1("R1", 2.0, 3.0);
  Rectangle R2("R2", 3.0, 4.0);
  Rectangle R3;
  Square S1("S1", 5.0);
  Triangle T1("T1", 3.0);
  Circle C1("C1", 5.0);


  R1.Info();
  std::cout << std::endl;
  R2.Info();
  std::cout << std::endl;
  R3.Info();
  std::cout << std::endl;
  S1.Info();
  std::cout << std::endl;
  T1.Info();
  std::cout << std::endl;
  C1.Info();

  std::cout << "Wykorzystanie wskaźnika" << std::endl;
  Figure* pointer_s = &S1;
  Figure* pointer_r = &R1;
  std::cout << std::endl;
  pointer_s->Info();
  std::cout << std::endl;
  pointer_r->Info();

  std::cout << "Wykorzystanie referencji" << std::endl;
  Figure& ref_s = S1;
  Figure& ref_r = R1;
  std::cout << std::endl;
  ref_s.Info();
  std::cout << std::endl;
  ref_r.Info();

}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
