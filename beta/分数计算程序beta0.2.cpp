#include<bits/stdc++.h>
using namespace std;
int main(){
    int o0;//选项0
    int total=0,end,e_o,b_3f,a_c,t_r,d_m;
    while(true){
        cout<<"\033[2J\033[1;1H";
        cout<<"首页\n1.关卡结局\n2.紧急作战\n3.第三层首领\n4.附加内容\n5.临时招募\n6.扣分项目\n7.计算总分\n8.初始化数据\n9.退出程序\n当前分数：\n"<<total<<"操作：";
        cin>>o0;
        switch(o0){
            case 1:{
                cout<<"\033[2J\033[1;1H";
                char o1;//选项1
                int e_t=0,au=0,s_au=0,h_c=0,t_l=0,n_a_f=0;
                while(true){
                    cout<<"\033[2J\033[1;1H";
                    cout<<"首页/关卡结局\n（0.返回上一级）\nA.紧急授课（+50）\nB.朝谒（+100）\nC.灵魂朝谒（+200）\nD.圣城（+150）\nE.受法（+100）\nF.不容拒绝\n选项：";
                    cin>>o1;
                    char o11,o12,o13,o14,o151,o152,o153;//选项1子选项
                    switch(o1){
                        //紧急授课
                        case 'A':{
                            cout<<"\033[2J\033[1;1H";
                            e_t=100;
                            cout<<"首页/关卡结局/紧急授课\n是否“思维混乱”（+10）？\nY.是 N.否\n(0.返回上一级）\n选项：";
                            cin>>o11;
                            switch(o11){
                                case 'Y':{
                                    e_t+=10;
                                    break;
                                }  
                                case 'N':
                                case '0':{
                                    break;
                                }
                            }
                            break;
                        }
                        //朝谒
                        case 'B':{
                            cout<<"\033[2J\033[1;1H";
                            au=150;
                            cout<<"首页/关卡结局/朝谒\n是否“思维混乱”（+10）？\nY.是 N.否\n(0.返回上一级）\n选项：";
                            cin>>o12;
                            switch(o12){
                                case 'Y':{
                                    au+=10;
                                    break;
                                }  
                                case 'N':
                                case '0':{
                                    break;
                                }
                            }
                            break;
                        }
                        //灵魂朝谒
                        case 'C':{
                            cout<<"\033[2J\033[1;1H";
                            s_au=200;
                            cout<<"首页/关卡结局/灵魂朝谒\n是否“思维混乱”（+20）？\nY.是 N.否\n(0.返回上一级）\n选项：";
                            cin>>o13;
                            switch(o13){
                                case 'Y':{
                                    s_au+=20;
                                    break;
                                }  
                                case 'N':
                                case '0':{
                                    break;
                                }
                            }
                            break;
                        }
                        //圣城
                        case 'D':{
                            cout<<"\033[2J\033[1;1H";
                            h_c=150;
                            cout<<"首页/关卡结局/圣城是否“思维混乱”（+15）？\nY.是 N.否\n(0.返回上一级）\n选项：";
                            cin>>o14;
                            switch(o14){
                                case 'Y':{
                                    h_c+=15;
                                    break;
                                }  
                                case 'N':
                                case '0':{
                                    break;
                                }
                            }
                            break;
                        }
                        //受法
                        case 'E':{
                            t_l=100;
                            while(true){
                                cout<<"\033[2J\033[1;1H";
                                cout<<"首页/关卡结局/受法\n是否携带“滚动先祖“（+40）？\nY.是 N.否\n（0.返回上一级）\n选项：";
                                cin>>o151;
                                switch(o151){
                                    case 'Y':{
                                        t_l+40;
                                        while(true){
                                            cout<<"\033[2J\033[1;1H";
                                            cout<<"首页/关卡结局/受法\n是否“思维混乱”（+20）？\nY.是 N.否\n（0.返回上一级）\n选项：";
                                            cin>>o152;
                                            cout<<"\033[2J\033[1;1H";
                                            switch(o152){
                                                case 'Y':{
                                                    t_l+=20;
                                                    cout<<"首页/关卡结局/受法\n是否击败“奎龙”（+200）？\nY.是 N.否\n（0.返回上一级）\n选项：";
                                                    cin>>o153;
                                                    switch(o153){
                                                        case 'Y':{
                                                            t_l+=200;
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
                                                    cout<<"首页/关卡结局/受法\n是否击败“奎龙”（+200）？\nY.是 N.否\n（0.返回上一级）\n选项：";
                                                    cin>>o153;
                                                    switch(o153){
                                                        case 'Y':{
                                                            t_l+=200;
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
                                            cout<<"\033[2J\033[1;1H";
                                            cout<<"首页/关卡结局/受法\n是否“思维混乱”（+30）？\nY.是 N.否\n（0.返回上一级）\n选项：";
                                            cin>>o152;
                                            cout<<"\033[2J\033[1;1H";
                                            switch(o152){
                                                case 'Y':{
                                                    t_l+=30;
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
                                                    break;
                                                }  
                                                case 'N':{
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
                        }
                    }
                    if(o11=='0'||o12=='0'||o13=='0'||o14=='0'||o151=='0') continue;
                    else{
                        end=e_t+au+s_au+h_c+t_l+n_a_f;
                        break;
                    }
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