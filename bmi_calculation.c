void bmi_calculation(void){
    double boy;
    int kilo;
    double sonuc;
    printf("Boyunuzu girer misiniz ? (m): ");
    scanf("%lf",&boy);
    printf("Kilonuz kacti acaba ? :(kg) ");
    scanf("%d",&kilo);
    
    sonuc = kilo / (boy * boy) ;
    
    if(sonuc < 16.0){
    	printf("Kategoriniz : \"Severely Underweight\" "); }
    else if (16.0<= sonuc && sonuc<= 18.4){
    	printf("Kategoriniz : \"Underweight\" "); } 
    else if (18.5<= sonuc && sonuc<= 24.9){
    	printf("Kategoriniz : \"Normal\" ");  }
    else if (25.0<= sonuc && sonuc<= 29.9){
    	printf("Kategoriniz : \"Owerweight\" "); }
    else if( sonuc >= 30.0){
    	printf("Kategoriniz : \"Obese\" "); }
    else{
    	printf("Dogru degerler girmediginiz icin hesaplayamadim"); }
}

int main(){
    int assignments_number;
printf("Enter the number of assignments .. \n[1] = write polynomial3 & write polynomial4 \n[2] = calculate fibonacci sequence \n[3] decide perfect harmonic number \n[4] bmi calculation\n");
scanf("%d",&assignments_number);

switch(assignments_number){
    case 1:
    write_polynomial3(1.0,-1.0,3,5.6);
    write_polynomial4(-1.0,1.0,-3.2,5.1,2.0);
    break;

    case 2:
    calculate_fibonacci_sequence();
    break;

    case 3:
    decide_perfect_harmonic_number();
    break;

    case 4: 
    bmi_calculation();
    break;

    default:
    printf("Incorrect number");

}
    
}
