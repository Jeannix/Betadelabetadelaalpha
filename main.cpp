#include <iostream>
#include <string>

using namespace std;
class Posicion{
public:
    int x, y;
    Posicion(){
        x=0;
        y=0;
    }
    Posicion(int x1, int y1){
        x=x1;
        y1=y;
    }
    void printP(){
        cout<<x<<y<<endl;
    }
};
class Dama{
private:
    bool comida;
    Posicion pos;
    string color;
public:
    Dama(){
        comida=0;
        color="Negra";
    }
    Dama(bool c1, Posicion p, string c2){
        comida=c1;
        pos=p;
        color=c2;
    }
    void printCol(){
        cout<<color<<endl;
    }
    int getPosx(){return pos.x;}
    int getPosy(){return pos.y;}
};
class Tablero{
private:
    int **mat,N_c,N_f;
    //Dama damas[10][10];
};
int main()
{
    Tablero tab;
    Dama D;
    D.printCol();
    cout << D.getPosx() << endl;
    return 0;
}

/*
<!DOCTYPE html>
<html>
<head>
<title>Page Title</title>
</head>
<body bgcolor="#F6CEE3">

<h1>私はあなたを愛している</h1>
<h1>Je t'aime</h1>
<p>Watashi wa anata o aishite iru</p>
<h1>This is heading 1</h1>
<h2>This is heading 2</h2>
<h3>This is heading 3</h3>
<h4>This is heading 4</h4>
<h5>This is heading 5</h5>
<h6>This is heading 6</h6>

<p><b>Tip:</b> Use h1 to h6 elements only for headings. Do not use them just to make text bold or big. Use other tags for that.</p>
<p>This text is normal.</p>
<p><big>This text is bigger.</big></p>

<p><strong>Note:</strong> The big element is not supported in HTML5.</p>
<frameset cols="25%,*,25%">
  <frame src="frame_a.htm">
  <frame src="frame_b.htm">
  <frame src="frame_c.htm">
</frameset>


</body>
</html>
*/
