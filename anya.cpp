int main ()
{
    int a;
    cout <<"Якщо ви зареєстровані ведіть 1, якщо ви не зареєстровані введіть 2" <<endl;
    cin >>a;
    if(a==1){
        string login, passwd;
        cout <<"Введіть Логін" <<endl;
        cin >>login;
        cout <<"Введіть Пароль" <<endl;
        cin >>passwd;
        read(login,passwd);
        bool flag = true;
        for(int i=0; i<100; i++){
            if(login==users[i].login && passwd==users[i].passwd){
                int ab,ac,bc,l,sboc,sosn,s,p,pi;

                odch(ab,ac,bc,l,sboc,sosn,s,p,pi);
                flag=false;
                break;
            }
            if(flag==true){
                cout <<"Пароль либо логин введены неверно!"<<endl;
            }
        }


    }
    if(a==2)
    {
        int ab,ac,bc,l,sboc,sosn,s,p,pi;
        odch(ab,ac,bc,l,sboc,sosn,s,p,pi);
    }
}
