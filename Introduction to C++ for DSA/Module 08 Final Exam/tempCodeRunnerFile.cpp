Student tempStd;
    int i = 0;
    int j = n -1;
    while(i < j){
        tempStd = a[i];
        a[i].s = a[j].s;
        a[j].s = tempStd.s;
    }
    
    for(int i = 0; i < n; i++){
        cout << a[i].nm  << " " << a[i].cls << " " <<  a[i].s << " " << a[i].id << endl;
    }