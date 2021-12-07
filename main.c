#include <iostream.h>
main()
{

    const int MAX = 10;
    const int NOMBRE = 61;
    int essai = 1;
    int proposition = 0;

    cout << "Le nombre caché!!!\n";
    cout << "Vous avez " << MAX << " essais pour trouver le nombre caché.\n";

    for(essai = 1; essai <= MAX; essai++)
    {

        cout << "Essai n° " << essai << ". Votre proposition : ";
        cin >> proposition;
        if(proposition < NOMBRE) cout << "Plus!!!\n";
        if(proposition > NOMBRE) cout << "Moins!!!\n";
        if(proposition == NOMBRE) break;

    }

    if(essai > MAX)

        cout << "Perdu!\n";

    else

        cout << "Gagné!\n";

}
