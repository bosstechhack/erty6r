for(int p=0;p<c;p++){
        for(int m=0,n=1;m<r;m++,n++){
        if(a[m][p]>a[n][p]){
            temp=a[m][p];
            a[m][p]=a[n][p];
            a[n][p]=temp;
        }
       }
      
    }
