#include <iostream>

using namespace std;

/* Implementar un programa de consola, en el lenguaje C++, que a partir de una fecha introducida por teclado en el formato numérico de día, mes y año muestre la fecha del día siguiente.
*/

int main(int argc, char** argv)  

{

setlocale(LC_ALL,"spanish");

int dia, mes, anno, dds, mms, aas;

{

 cout<<"             ==================== "<<endl;

 cout<<"             | Ingrese una fecha|"<<endl;

 cout<<"             ===================="<<endl;

 cout<<""<<endl;

 cout<<"    Día: ";

    cin>>dia;

     cout<<"    Mes: ";

    cin>> mes;

    cout<<"    Año: ";

    cin>>anno;

    cout<<""<<endl;

     cout<<"    _"<<dia;

  cout<<"_/_"<<mes;

  cout<<"_/_"<<anno;

  cout<<"_"<<endl;

  cout<<""<<endl;

       if(anno>=2000)

       {

      switch(mes)

     {

      case 1:

      case 3:

      case 5:

      case 7:

      case 8:

      case 10:

      case 12:

       if(dia>= 1&& dia<= 31)

       {

        cout<<"La fecha introducida es correcta"<<endl;

       }

       else

       {

        cout<<"El dia ingresado no es correcto"<< endl;

          }

       break;

      case 4:

      case 6:

      case 9:

      case 11:

       if (dia >= 1 && dia <=30)

       {

        cout<<"La fecha ingresada es correcta."<< endl;

       }

       else

       {

        cout<<"El dia ingresado no es valido"<<endl;

       }

       break;

      case 2:

       if(dia>=1 && dia<=28)

       {

        cout<<"La fecha ingresada es correcta"<<endl;

       }

       else

       {

        cout<<"El dia ingresado no es el correcto"<<endl;    

       }

       break;

      default:

          cout<<"El mes ingresado no es valido"<< endl;  

     }

    }

    else

    {

     cout<<"Debe ingresar un año perteneciente al siglo XXI."<<endl;

    }

    cout<<"\n\n\n";

    cout<<"         =============================="<<endl;

    cout<<"         | LA FECHA DEL SIGUIENTE DIA |"<<endl;

    cout<<"         =============================="<<endl;

    //utiliza una linea if and else

 

 }

 

     if ((dia == 30 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) || (dia == 29 && mes == 2) || (dia == 28 && mes == 2 && ((anno % 4 != 0) || (anno % 100) == 0) && (anno % 400) != 0) || dia == 31)

           {

               mms = mes + 1;

               dds = 1;

           }

           else

           {

               dds = dia + 1;

               mms = mes;

           }

           if (dds == 1 && mms == 13)

           {

               mms = 1;

               aas = anno + 1;

           }

           else

  {

   aas = anno;

     }

     cout<<"    Año: "<<aas<<endl;

     cout<<"    Mes: "<<mms<<endl;

     cout<<"    Día: "<<dds<<endl;

     cout<<""<<endl;

     cout<<"    =================="<<endl;

     cout<<"    |_"<<dds;

  cout<<"_/_"<<mms;

  cout<<"_/_"<<aas;

  cout<<"_|"<<endl;

  cout<<""<<endl;

 system("pause");

 

 return 0;  

   }
