	

    /*
    * operator wyluskania ( skocz pod ten adres i wyciagnij wartosć)
    % operator przypisania wartosci
    y=y+1 (np w int to +4 )
    sam nazwa tablicy jest jednoczesnie wskasnikiem na 1 elemetn tablicy.
    tablice 10 elemetowa od 1 do n ze wskaźnikami
    */
     
     
     
    #include <stdio.h>
    #define N 10
    #define NUMER 4 // numer progamu ktory chcesz odpalic
     
    //własny getch nie potrzbny
    void getch1()
    {int i;
     
        scanf("%d",&i);
           }
           void UzupelnijIwypisInoSynkuTablice(int *t,int roz)
           {int i;
            for (i=0; i<roz; printf("%d ",*(t+i)=++i));
            }
             void  wypisInoSynkuTablice(int *t,int roz)
           {int i;
            for (i=0; i<roz;i++) printf("%d ",*(t+i));
            }
            ZapierdzielTabliceJedynkami(int *t,int roz)
           {int i;
            for (i=0; i<roz; *(t+i++)=1);
            }
     void tablica()
     
    {int tab[N],i;
         
    for (i=0; i<N; printf("%d ",*(tab+i)=++i));
     
    getch();
         
          }
         
         /* pobieramy 2 liczby calkowite funkcja swap
         */
    void sfap(int *a, int *b)
    {int z=*a;
    *a=*b;
    *b=z;
     }
     void sprawdzenieSfap()
     { int a=1, b=2;
          sfap(&a,&b);
     printf("%d %d",a,b);
      }
     
      /* proghram który se jebnie tablice dynamiczna
      malloc(WARTOSC) alokuje opszar pamieci
     
      malloc(sizeof(np. int)*liczba)
     
     
      int *t;
      t=(int*)malloc(sizeof(np. int)*liczba);
     
      porusznie sie t[0] jak po tablicy
     
      *(t+i)
     
     
      */
      void tablicaDynamicna()
      { int roz=20,i;
         int *t;
      t=(int*)malloc(sizeof(int)*roz);
      UzupelnijIwypisInoSynkuTablice(t,roz);
     
     
       }
       void tablicaDynamicnaInoZJedyneczkami()
      { int roz=20,i;
         int *t;
      t=(int*)malloc(sizeof(int)*roz);
      ZapierdzielTabliceJedynkami(t,roz);
       wypisInoSynkuTablice(t,roz);
     
     
       }
     
     
      /*listy
      takie tablice tylko nie potrzeba jednolitetgo bloku pamięci
      powiazane sa w ten sposobik ze kada komorka przechowuje adres nastepnego bloku
     
     
     
      Struktura deklarujemy przed main
     
      stract <osoba>- typ danych  {
             char imie[20];
             char nazwisko[20];
             int wiek;
             char plec;
             }<o1> - nazwa zmiennej; mozna zaininicjowac o1={"jka","cze",18,'M'}
      potem w main
      { struct osoba o2;
      operator -> do dostania sie do wnetrza stuktury
      !!!!!! kopiowanie char przez strcty z biblioteka string
     
      */
     
     
     int main()
      {
            switch(NUMER)//wybieranie programu ktory ma byc odpalony
            {
                         case 1 :tablica(); break;
                          case 2 :sprawdzenieSfap(); break;
                          case 3 :tablicaDynamicna(); break;
                          case 4 :tablicaDynamicnaInoZJedyneczkami(); break;
                         default:return 0;
                         
                         }
           
            getch();
            }
           
    /*
    Domowe
    ***************************************************************************************
    program definiujący zmienną sktukturalną typu samochod prosze samodzielnie okersic jakie pola bedzie maiala pola
    utworzyc dynamiczną n elementową tablice i pozwolic uzupelnic userowy
     
     
     
     
    */

