#include "українська.з"
#include ввпотоки
#include вектори
використовувати простірімен стандартний;
ціле n=випадковість()%30+10;
структура предмет{точна маса; точна ціна;};
вектор <предмет> набір;
вектор <ціле> оптимальний;
предмет окремий;
ціла основна() 
{
  насіння(час(0));
  для(ціле i=0; i<n; i++)  
  {
    окремий.маса=випадковість()%10+0.1;
    окремий.ціна=випадковість()%50000+50;
    набір.дописати_кінець(окремий);
  }
  для(ціле i=0; i<набір.розмір(); i++)
  {
    ціле індекс=i;
    для(ціле j=i+1; j<набір.розмір(); j++)
    {
      якщо(набір [індекс].ціна < набір [j].ціна)
      індекс=j;
    }
    обмін(набір[i],набір[індекс]);
  }
  точна sum_p=0.0;
  точна sum_m=0.0;
  для(ціле i=0; i<n; i++)
  {
    якщо((sum_m+набір[i].маса)<=50)
    {
      sum_m+=набір[i].маса;
      sum_p+=набір[i].ціна;
      оптимальний.дописати_кінець(i);
    }
  }
  вивести<<"Весь набір: "<<"\n";
  для(ціле i=0; i<n; i++)
  {
    вивести<<"Предмет: "<<i<<" ";
    вивести<<"Ціна: "<<набір[i].ціна<<" ";
    вивести<<"Маса: "<<набір[i].маса<<"\n";
  }
  вивести<<"Набір оптимальний: "<<"\n";
  для(ціле i=0; i<оптимальний.розмір(); i++)
  {
    вивести<<"Предмет: "<<оптимальний[i]<<" ";
    вивести<<"Ціна: "<<набір[оптимальний[i]].ціна<<" ";
    вивести<<"Маса: "<<набір[оптимальний[i]].маса<<"\n";
  }
  вивести<<"Ціна загальна: "<<sum_p<<"\n";
  вивести<<"Маса загальна: "<<sum_m<<"\n";
}