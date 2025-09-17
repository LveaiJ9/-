#include<bits/stdc++.h>
using namespace std;
int main(){
    int o0;//选项0
    int total=0,end=0,e_o=0,b_3f=0,a_c=0,t_r=0,d_m=0;
    while(true){
        int w_m;
        total=end+e_o+b_3f+a_c+t_r-d_m;
        cout<<"\033[2J\033[1;1H";
        cout<<"首页\n1.关卡结局\n2.紧急作战\n3.第三层首领\n4.附加内容\n5.临时招募\n6.扣分项目\n7.计算总分\n8.初始化数据\n9.退出程序\n当前分数："<<total<<"\n操作：";
        cin>>o0;
        switch(o0){
            case 1:{
                cout<<"\033[2J\033[1;1H";
                char o1;//选项1
                int e_t=0,au=0,s_au=0,h_c=0,t_l=0,n_a_f=0,co=0,r_a=0,kl=0;//紧急授课，朝谒，灵魂朝谒，圣城，受法，不容拒绝，思维混乱，滚动先祖，奎龙
                while(true){
                    cout<<"\033[2J\033[1;1H";
                    cout<<"首页/关卡结局\n（0.返回上一级）\nA.紧急授课（+50）\nB.朝谒（+100）\nC.灵魂朝谒（+200）\nD.圣城（+150）\nE.受法（+100）\nF.不容拒绝\n选项：";
                    cin>>o1;
                    char o11,o12,o13,o14,o151,o152,o153,o161,o1621,o1622,o1631,o1632;//选项1子选项
                    switch(o1){
                        //紧急授课
                        case 'A':{
                            co=0;
                            cout<<"\033[2J\033[1;1H";
                            e_t=100;
                            cout<<"首页/关卡结局/紧急授课\n是否“思维混乱”（+10）？\nY.是 N.否\n(0.返回上一级）\n选项：";
                            cin>>o11;
                            switch(o11){
                                case 'Y':{
                                    co=10;
                                    break;
                                }  
                                case 'N':
                                case '0':{
                                    break;
                                }
                            }
                            e_t=e_t+co;
                            break;
                        }
                        //朝谒
                        case 'B':{
                            co=0;
                            cout<<"\033[2J\033[1;1H";
                            au=150;
                            cout<<"首页/关卡结局/朝谒\n是否“思维混乱”（+10）？\nY.是 N.否\n(0.返回上一级）\n选项：";
                            cin>>o12;
                            switch(o12){
                                case 'Y':{
                                    co=10;
                                    break;
                                }  
                                case 'N':
                                case '0':{
                                    break;
                                }
                            }
                            au=au+co;
                            break;
                        }
                        //灵魂朝谒
                        case 'C':{
                            co=0;
                            cout<<"\033[2J\033[1;1H";
                            s_au=200;
                            cout<<"首页/关卡结局/灵魂朝谒\n是否“思维混乱”（+20）？\nY.是 N.否\n(0.返回上一级）\n选项：";
                            cin>>o13;
                            switch(o13){
                                case 'Y':{
                                    co=20;
                                    break;
                                }  
                                case 'N':
                                case '0':{
                                    break;
                                }
                            }
                            s_au=s_au+co;
                            break;
                        }
                        //圣城
                        case 'D':{
                            co=0;
                            cout<<"\033[2J\033[1;1H";
                            h_c=150;
                            cout<<"首页/关卡结局/圣城是否“思维混乱”（+15）？\nY.是 N.否\n(0.返回上一级）\n选项：";
                            cin>>o14;
                            switch(o14){
                                case 'Y':{
                                    co=15;
                                    break;
                                }  
                                case 'N':
                                case '0':{
                                    break;
                                }
                            }
                            h_c=h_c+co;
                            break;
                        }
                        //受法
                        case 'E':{
                            co=0;
                            while(true){
                                r_a=0;
                                t_l=100;
                                cout<<"\033[2J\033[1;1H";
                                cout<<"首页/关卡结局/受法\n是否携带“滚动先祖“（+40）？\nY.是 N.否\n（0.返回上一级）\n选项：";
                                cin>>o151;
                                switch(o151){
                                    case 'Y':{
                                        r_a=40;
                                        while(true){
                                            co=0;
                                            cout<<"\033[2J\033[1;1H";
                                            cout<<"首页/关卡结局/受法\n是否“思维混乱”（+20）？\nY.是 N.否\n（0.返回上一级）\n选项：";
                                            cin>>o152;
                                            cout<<"\033[2J\033[1;1H";
                                            switch(o152){
                                                case 'Y':{
                                                    kl=0;
                                                    co=20;
                                                    cout<<"首页/关卡结局/受法\n是否击败“奎龙”（+200）？\nY.是 N.否\n（0.返回上一级）\n选项：";
                                                    cin>>o153;
                                                    switch(o153){
                                                        case 'Y':{
                                                            kl=200;
                                                            break;
                                                        }
                                                        case 'N':
                                                        case '0':{
                                                            break;
                                                        }
                                                    }
                                                    break;
                                                }  
                                                case 'N':{
                                                    kl=0;
                                                    cout<<"首页/关卡结局/受法\n是否击败“奎龙”（+200）？\nY.是 N.否\n（0.返回上一级）\n选项：";
                                                    cin>>o153;
                                                    switch(o153){
                                                        case 'Y':{
                                                            kl=200;
                                                            break;
                                                        }
                                                        case 'N':
                                                        case '0':{
                                                            break;
                                                        }
                                                    }
                                                }
                                                case '0':{
                                                break;
                                                }
                                            }
                                            if(o153=='0'||o152=='0') continue;
                                            else break;
                                        }
                                    }
                                    case 'N':{
                                        while(true){
                                            co=0;
                                            cout<<"\033[2J\033[1;1H";
                                            cout<<"首页/关卡结局/受法\n是否“思维混乱”（+30）？\nY.是 N.否\n（0.返回上一级）\n选项：";
                                            cin>>o152;
                                            cout<<"\033[2J\033[1;1H";
                                            switch(o152){
                                                case 'Y':{
                                                    kl=0;
                                                    co=30;
                                                    cout<<"首页/关卡结局/受法\n是否击败“奎龙”（+150）？\nY.是 N.否\n（0.返回上一级）\n选项：";
                                                    cin>>o153;
                                                    switch(o153){
                                                        case 'Y':{
                                                            kl=150;
                                                            break;
                                                        }
                                                        case 'N':
                                                        case '0':{
                                                            break;
                                                        }
                                                    }
                                                    break;
                                                }  
                                                case 'N':{
                                                    kl=0;
                                                    cout<<"首页/关卡结局/受法\n是否击败“奎龙”（+150）？\nY.是 N.否\n（0.返回上一级）\n选项：";
                                                    cin>>o153;
                                                    switch(o153){
                                                        case 'Y':{
                                                            t_l+=150;
                                                            break;
                                                        }
                                                        case 'N':
                                                        case '0':{
                                                            break;
                                                        }
                                                    }
                                                }
                                                case '0':{
                                                    break;
                                                }
                                            }
                                            if(o153=='0') continue;
                                            else break;
                                        }
                                    }
                                    case '0':{
                                        break;
                                    }
                                }
                                if(o153=='0'||o152=='0') continue;
                                break;
                            }
                            t_l=t_l+r_a+kl+co;
                            break;
                        }
                        case 'F':{
                            while(true){
                                cout<<"\033[2J\033[1;1H";
                                cout<<"首页/关卡结局/不容拒绝\n携带物品：\nA.骨架（+200）\nB.躯体（+210）\nC.实相（+350）\n（0.返回上一级）\n选项：";
                                cin>>o161;
                                cout<<"\033[2J\033[1;1H";
                                switch(o161){
                                    case 'A':{
                                        n_a_f=200;
                                        break;
                                    }
                                    case 'B':{
                                        n_a_f=210;
                                        break;
                                    }
                                    case 'C':{
                                        n_a_f=350;
                                        break;
                                    }
                                }
                                while(true){
                                    co=0;
                                    cout<<"\033[2J\033[1;1H";
                                    switch(n_a_f){
                                        case 200:
                                        case 210:{
                                            cout<<"首页/关卡结局/不容拒绝\n是否“思维混乱”（+60）\nY.是 N.否\n（0.返回上一级）\n选项：";
                                            cin>>o1621;
                                            switch(o1621){
                                                case 'Y':{
                                                    co=60;
                                                    break;
                                                }
                                                case 'N':
                                                case '0':{
                                                    break;
                                                }
                                            }
                                            break;
                                        }
                                        case 350:{
                                            cout<<"首页/关卡结局/不容拒绝\n是否“思维混乱”（+100）？\nY.是 N.否\n（0.返回上一级）\n选项：";
                                            cin>>o1622;
                                            switch(o1622){
                                                case 'Y':{
                                                    co=100;
                                                    break;
                                                }
                                                case 'N':
                                                case '0':{
                                                    break;
                                                }
                                            }
                                            break;
                                        }
                                    }
                                    if(o1621=='0'||o1622=='0') break;
                                    while(true){
                                        w_m=0;
                                        cout<<"\033[2J\033[1;1H";
                                        switch(n_a_f){
                                            case 200:
                                            case 210:{
                                                cout<<"首页/关卡结局/不容拒绝\n是否“无漏”（+30）？\nY.是 N.否\n（0.返回上一级）\n选项：";
                                                cin>>o1631;
                                                switch(o1631){
                                                    case 'Y':{
                                                        w_m=30;
                                                        break;
                                                    }
                                                    case 'N':
                                                    case '0':{
                                                        break;
                                                    }
                                                }
                                                break;
                                            }
                                            case 350:{
                                                cout<<"首页/关卡结局/不容拒绝\n是否“无漏”（+50）？\nY.是 N.否\n（0.返回上一级）\n选项：";
                                                cin>>o1631;
                                                switch(o1631){
                                                    case 'Y':{
                                                        w_m=50;
                                                        break;
                                                    }
                                                    case 'N':
                                                    case '0':{
                                                        break;
                                                    }
                                                }
                                                break;
                                            }
                                        }
                                        break;
                                    }
                                    if(o1631=='0'||o1632=='0') continue;
                                    else break;
                                }
                                if(o1631=='0'||o1632=='0'||o1621=='0'||o1622=='0') continue;
                                else break;
                            }
                            n_a_f=n_a_f+co+w_m;
                            break;
                        }
                    }
                    if(o1=='0') break;
                    else end=e_t+au+s_au+h_c+t_l+n_a_f;
                    if((e_t!=0||au!=0||s_au!=0)&&t_l!=0&&n_a_f!=0){
                        cout<<"\033[2J\033[1;1H";
                        end=end+200;
                        int o01;
                        cout<<"首页/关卡结局\n达成“结局连打”（+200）\n0.返回上一级\n选项：";
                        cin>>o01;
                        if(o01==0) break;
                    }
                    else break;
                }
            }
            case 2:{
                
                break;
            }
            case 3:{
                break;
            }
            case 4:{
                break;
            }
            case 5:{
                break;
            }
            case 6:{
                break;
            } 
            case 7:{
                break;
            }
            case 8:{
                cout<<"\033[2J\033[1;1H";
                int o8;
                total=end=e_o=b_3f=a_c=t_r=d_m=0;
                cout<<"首页/初始化数据\n初始化已完成\n0.返回上一级\n选项：";
                cin>>o8;
                if(o8==0) break;
            }
            case 9:{
                cout<<"\033[2J\033[1;1H";
                cout<<"运行结束，欢迎下次使用！";
                return 0;
            }       
        }
    }
    return 0;
}