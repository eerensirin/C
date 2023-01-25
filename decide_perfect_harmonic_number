void decide_perfect_harmonic_number(){
    int sayi;
    int bolenlerdizi[20];
    int flag;
    int r;
    char str[20];
    flag = 0;
    r=0;
    while(!flag)
    {
        
        while(!r){
        int toplam= 0;
        printf("Sayiyi giriniz : ");
        scanf("%s",&str);
        if(str[0] == 42 ) {
            flag=1;
            r=1;
            break;}
        else{
            sayi = atoi(str);
            if(sayi >= 0)
            {
                r=0;
            }
            else
            {
                sayi = atoi(str);
                printf("sayi dogal olmalidir. islem yapilacaktir fakat sonuc 0 cikacaktir. Lutfen pozitif bir deger giriniz. \n");
                printf("islemin yapilma sebebi perfect number ve harmonic number lerin pozitif sayilar icin oldugunu gostermektir.\n");
                
            }
        
        int j,i,m;
        sayi = atoi(str);
        int sayac = 0;
        for(j=1; j<=sayi; j++)
        {
            if(sayi % j == 0)
            {
                toplam = toplam + j;
                bolenlerdizi[sayac]=j;
                if(j!=sayi)
                    {
                     printf("%d ",j);
                    }
                sayac ++;
            }
        }
        toplam-=sayi;
        printf("%d \n",sayi);
    
    
        int bolentoplam=0;
        printf("Kendi disinda bolenleri toplami ");
        for(m=0; m<sayac-1; m++)
        {
            if(m<sayac-2)
            {
                printf("%d + ",bolenlerdizi[m]);
                bolentoplam=bolentoplam+bolenlerdizi[m];
            }
            if(m==sayac-2)
            {
                printf("%d ",bolenlerdizi[m]);
                bolentoplam=bolentoplam+bolenlerdizi[m];
            }
        }
        printf("= %d \n",bolentoplam);
    
        if(toplam == sayi)
            printf("Mukemmel sayidir ! \n");
        else
            printf("Mukemmel sayi degildir\n");
        
        float s=0.0;
        printf("Harmonic degeri  %d/(",sayac);
        for(i=0; i<sayac; i++)
        {
            if(i<sayac-1)
            {
                printf("1/%d + ",bolenlerdizi[i]);
                s=s+1/(float)bolenlerdizi[i];
            }
            if(i==sayac-1)
            {
                printf("1/%d) ",bolenlerdizi[i]);
                s=s+1/(float)bolenlerdizi[i];
            }
        }
        printf("= %0.1f \n",s);
        float harmonicdeger=sayac/s;
       if(harmonicdeger-(int)harmonicdeger == 0)
            printf("Harmonic Divisor Number \n");
        else
            printf(" Harmonic Divisor Number degildir. \n");       }}}   
}
