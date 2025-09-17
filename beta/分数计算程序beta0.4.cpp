#include<bits/stdc++.h>
using namespace std;
int main(){
    int o0;//总选项
    char o1,o3,o4,o5,o6,o7;//子选项
    string o2;
    char o11,o12,o13,o14,o151,o152,o153,o161,o1621,o1622,o1631,o1632;//子选项1分类
    int duck=0,dog=0,bear=0,mouse=0,collection=0;//子选项4分类
    int s4=0,s5=0,s6=0;//子选项5分类
    int money=0;//子选项6
    int total=0,end=0,e_o=0,b_3f=0,a_c=0,t_r=0,d_m=0;//总分，关卡结局，紧急作战，第三层首领，附加内容，临时招募，扣分项目
    int e_t=0,au=0,s_au=0,h_c=0,t_l=0,n_a_f=0,co=0,r_a=0,kl=0,w_m=0;//紧急授课，朝谒，灵魂朝谒，圣城，受法，不容拒绝，思维混乱，滚动先祖，奎龙，无漏
    while(true){
        total=end+e_o+b_3f+a_c+t_r-d_m;
        cout<<"\033[2J\033[1;1H";
        cout<<"首页\n1.关卡结局\n2.紧急作战\n3.第三层首领\n4.附加内容\n5.临时招募\n6.银行\n7.计算总分\n8.初始化数据\n9.退出程序\n当前分数："<<total<<"\n操作：";
        cin>>o0;
        switch(o0){
            case 1:{
                cout<<"\033[2J\033[1;1H";
                while(true){
                    cout<<"\033[2J\033[1;1H";
                    cout<<"首页/关卡结局\n选择结局：\n（0.返回上一级）\nA.紧急授课（+50）\nB.朝谒（+100）\nC.灵魂朝谒（+200）\nD.圣城（+150）\nE.受法（+100）\nF.不容拒绝\n选项：";
                    cin>>o1;
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
                break;
            }
            case 2:{
                cout<<"\033[2J\033[1;1H";
                cout << "首页/紧急作战\n请选择已通关的得分最高的选项：\n（0.返回上一级）\nA1.神出鬼没（+40）\nA2.神出鬼没·无漏（+100）\nB1.争议频发（+40）\nB2.争议频发·无漏（+100）\nC1.建制（+80）\nC2.建制·无漏（+160）\nD1.莱茵卫士（+60）\nD2.莱茵卫士·无漏（+140）\nE.混沌（+30）\nF.神圣的渴求（+50）\nG.谋求共识（+50）\nH.“外道”（+70）\nI.洞天福地（+100）\n选项：";
                cin >> o2;
                if (o2 == "E") {
                    e_o = 30;
                } else if (o2 == "A1" || o2 == "B1") {
                    e_o = 40;
                } else if (o2 == "F" || o2 == "G") {
                    e_o = 50;
                } else if (o2 == "D1") {
                    e_o = 60;
                } else if (o2 == "H") {
                    e_o = 70;
                } else if (o2 == "C1") {
                    e_o = 80;
                } else if (o2 == "A2" || o2 == "B2" || o2 == "I") {
                    e_o = 100;
                } else if (o2 == "D2") {
                    e_o = 140;
                } else if (o2 == "C2") {
                    e_o = 160;
                }
                break;
            }
            case 3:{
                cout<<"\033[2J\033[1;1H";
                cout<<"首页/第三层首领\n请选择你击败首领（+40）：\n（0.返回上一级）\n1.离歌的庭院\n2.赴敌者\n3.王冠之下\n选项：";
                cin>>o3;
                if(o3!='0') b_3f=40;
                break;
            }
            case 4:{
                while(true){
                    cout<<"\033[2J\033[1;1H";
                    cout<<"首页/附加内容\n附加内容：\n（0.返回上一级）\n1.隐藏怪\n2.藏品\n选项：";
                    cin>>o4;
                    switch(o4){
                        case '1':{
                            cout<<"\033[2J\033[1;1H";
                            cout<<"首页/附加内容/隐藏怪\n按顺序输入鸭爵、流泪小子、高普尼克、圆仔的击杀数量（使用空格隔开）：\n";
                            cin>>duck>>dog>>bear>>mouse;
                            break;
                        }
                        case '2':{
                            cout<<"\033[2J\033[1;1H";
                            cout<<"首页/附加内容/藏品\n输入结算时藏品的数量：\n";
                            cin>>collection;
                            break;
                        }
                    }
                    a_c=(duck+dog+bear+mouse)*20+collection*5;
                    if(o4=='0') break;
                }
                break;
            }
            case 5:{
                cout<<"\033[2J\033[1;1H";
                cout<<"首页/临时招募\n按顺序输入临时招募的四星、五星和六星干员的数量：\n";
                cin>>s4>>s5>>s6;
                t_r=s4*10+s5*20+s6*50;
                break;
            }
            case 6:{
                cout<<"\033[2J\033[1;1H";
                cout<<"首页/银行\n请输入总金额：\n";
                cin>>money;
                if(money>400) d_m=(money-400)*50;
                else d_m=0;
                break;
            } 
            case 7:{
                cout<<"\033[2J\033[1;1H";
                cout<<"首页/总分计算\n关卡结局：+"<<end;
                cout<<"\n紧急作战：";
                // 总结模块
                if (o2 == "E") {
                    cout << "混沌";
                } else if (o2 == "A1") {
                    cout << "神出鬼没";
                } else if (o2 == "A2") {
                    cout << "神出鬼没·无漏";
                } else if (o2 == "B1") {
                    cout << "争议频发";
                } else if (o2 == "B2") {
                    cout << "争议频发·无漏";
                } else if (o2 == "C1") {
                    cout << "建制";
                } else if (o2 == "C2") {
                    cout << "建制·无漏";
                } else if (o2 == "D1") {
                    cout << "莱茵卫士";
                } else if (o2 == "D2") {
                    cout << "莱茵卫士·无漏";
                } else if (o2 == "F") {
                    cout << "神圣的渴求";
                } else if (o2 == "G") {
                    cout << "谋求共识";
                } else if (o2 == "H") {
                    cout << "“外道”";
                } else if (o2 == "I") {
                    cout << "洞天福地";
                } else {
                    cout << "无" << endl;
                }
                cout<<"+"<<e_o<<"\n第三层首领：";
                if(o3=='1') cout<<"离歌的庭院";
                else if(o3=='2') cout<<"赴敌者";
                else if(o3=='3') cout<<"王冠之下";
                else cout<<"无";
                cout<<"+"<<b_3f<<"\n附加内容：鸭爵+"<<(duck*20)<<" 流泪小子+"<<(dog*20)<<" 高普尼克+"<<(bear*20)<<" 圆仔+"<<(mouse*20)<<" 藏品+"<<(collection*5);
                cout<<"\n临时招募：四星+"<<(s4*10)<<" 五星+"<<(s5*20)<<" 六星+"<<(s6*50);
                cout<<"\n银行：-"<<d_m;
                cout<<"\n总分："<<total;
                cout<<"\n（0.返回上一级）\n选项：";
                cin>>o7;
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