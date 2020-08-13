// conert temp from fahrenheit to centigrate 
int main() {
    float f , c ;
    printf(" fahrenheit temp : ");
    scanf(" %f" ,&f);
    c=((5*f)-160)/9;
    printf(" centigrate temp = %f ",c);
    return 0;
}