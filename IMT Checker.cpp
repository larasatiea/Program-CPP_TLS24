# include <iostream>
# include <stdio.h>
using namespace std;

int main (){
    double berat, tinggi, imt;

    cout << "masukkan berat badan: "; //dalam kg (penulisan koma dalam titik (.))
    cin>> berat;

    cout << "masukkan tinggi badan: "; //dalam m (penulisan koma dalam titik (.))
    cin >> tinggi;

    imt = berat/(tinggi*tinggi);

    cout << "imt mu adalah ";
    cout << imt;

    if (imt < 17.0){
        cout << " sangat kekurangan berat badan" << endl;
    } else if (imt >= 17.0 && imt <= 18.4){
        cout << " kekurangan berat badan" << endl;
    } else if (imt > 18.4 && imt <= 25.0){
        cout << " normal" << endl;
    } else if (imt > 25.0 && imt <= 27.0){
        cout << " kelebihan berat badan" << endl;
    } else if (imt > 27){
        cout << " sangat kelebihan berat badan" << endl;
    }

    printf ("Jaga kesehatan selalu ya!");

    return 0;
}
