#include <stdio.h>
#include "basic.h"

void menu_logo (void);

void menu (void)
{
    cleardevice();

    /**< ����˵�����Ϣ */
    menu_bar menu_bar[4][10]={
    {
        {20, 120, menu_bar[0][0].x1+215, menu_bar[0][0].y1+40, menu_bar[0][0].x1+15, menu_bar[0][0].y1+15, "1.ָ����һά����" },
        {menu_bar[0][0].x1, menu_bar[0][0].y2+20, menu_bar[0][1].x1+215, menu_bar[0][1].y1+40, menu_bar[0][1].x1+15, menu_bar[0][1].y1+15, "1_1�������롢�����ͳ��" },
        {menu_bar[0][0].x1, menu_bar[0][1].y2+20, menu_bar[0][2].x1+215, menu_bar[0][2].y1+40, menu_bar[0][2].x1+15, menu_bar[0][2].y1+15, "1_2����ѭ����λ" },
        {menu_bar[0][0].x1, menu_bar[0][2].y2+20, menu_bar[0][3].x1+215, menu_bar[0][3].y1+40, menu_bar[0][3].x1+15, menu_bar[0][3].y1+15, "1_3��ֲ��ҷ�" },
        {menu_bar[0][0].x1, menu_bar[0][3].y2+20, menu_bar[0][4].x1+215, menu_bar[0][4].y1+40, menu_bar[0][4].x1+15, menu_bar[0][4].y1+15, "1_4ѡ������" },
        {menu_bar[0][0].x1, menu_bar[0][4].y2+20, menu_bar[0][5].x1+215, menu_bar[0][5].y1+40, menu_bar[0][5].x1+15, menu_bar[0][5].y1+15, "1_5�������������" },
        {menu_bar[0][0].x1, menu_bar[0][5].y2+20, menu_bar[0][6].x1+215, menu_bar[0][6].y1+40, menu_bar[0][6].x1+15, menu_bar[0][6].y1+15, "1_6ɾ���������ظ��ַ�" },
        {menu_bar[0][0].x1, menu_bar[0][6].y2+20, menu_bar[0][7].x1+215, menu_bar[0][7].y1+40, menu_bar[0][7].x1+15, menu_bar[0][7].y1+15, "" },
        {menu_bar[0][0].x1, menu_bar[0][7].y2+20, menu_bar[0][8].x1+215, menu_bar[0][8].y1+40, menu_bar[0][8].x1+15, menu_bar[0][8].y1+15, "" },
        {menu_bar[0][0].x1, menu_bar[0][8].y2+20, menu_bar[0][9].x1+215, menu_bar[0][9].y1+40, menu_bar[0][9].x1+15, menu_bar[0][9].y1+15, "" },
    },
    {
        {menu_bar[0][0].x2+20, menu_bar[0][0].y1, menu_bar[1][0].x1+215, menu_bar[0][0].y1+40, menu_bar[1][0].x1+15, menu_bar[1][0].y1+15, "2.ָ�����ά����" },
        {menu_bar[0][0].x2+20, menu_bar[0][1].y1, menu_bar[1][0].x1+215, menu_bar[0][1].y1+40, menu_bar[1][1].x1+15, menu_bar[1][1].y1+15, "2_1������Сֵ���±�" },
        {menu_bar[0][0].x2+20, menu_bar[0][2].y1, menu_bar[1][0].x1+215, menu_bar[0][2].y1+40, menu_bar[1][2].x1+15, menu_bar[1][2].y1+15, "2_2������5x6����ĺ�" },
        {menu_bar[0][0].x2+20, menu_bar[0][3].y1, menu_bar[1][0].x1+215, menu_bar[0][3].y1+40, menu_bar[1][3].x1+15, menu_bar[1][3].y1+15, "2_3�����Ǿ�����ж�" },
        {menu_bar[0][0].x2+20, menu_bar[0][4].y1, menu_bar[1][0].x1+215, menu_bar[0][4].y1+40, menu_bar[1][4].x1+15, menu_bar[1][4].y1+15, "" },
        {menu_bar[0][0].x2+20, menu_bar[0][5].y1, menu_bar[1][0].x1+215, menu_bar[0][5].y1+40, menu_bar[1][5].x1+15, menu_bar[1][5].y1+15, "2_5���ά�������ƽ��ֵ" },
        {menu_bar[0][0].x2+20, menu_bar[0][6].y1, menu_bar[1][0].x1+215, menu_bar[0][6].y1+40, menu_bar[1][6].x1+15, menu_bar[1][6].y1+15, "2_6�������" },
        {menu_bar[0][0].x2+20, menu_bar[0][7].y1, menu_bar[1][0].x1+215, menu_bar[0][7].y1+40, menu_bar[1][7].x1+15, menu_bar[1][7].y1+15, "" },
        {menu_bar[0][0].x2+20, menu_bar[0][8].y1, menu_bar[1][0].x1+215, menu_bar[0][8].y1+40, menu_bar[1][8].x1+15, menu_bar[1][8].y1+15, "" },
        {menu_bar[0][0].x2+20, menu_bar[0][9].y1, menu_bar[1][0].x1+215, menu_bar[0][9].y1+40, menu_bar[1][9].x1+15, menu_bar[1][9].y1+15, "" },
    },
    {
        {menu_bar[1][0].x2+20, menu_bar[0][0].y1, menu_bar[2][0].x1+215, menu_bar[0][0].y1+40, menu_bar[2][0].x1+15, menu_bar[1][0].y1+15, "3.ָ�����ַ���" },
        {menu_bar[1][0].x2+20, menu_bar[0][1].y1, menu_bar[2][0].x1+215, menu_bar[0][1].y1+40, menu_bar[2][1].x1+15, menu_bar[1][1].y1+15, "3_1��������ַ���" },
        {menu_bar[1][0].x2+20, menu_bar[0][2].y1, menu_bar[2][0].x1+215, menu_bar[0][2].y1+40, menu_bar[2][2].x1+15, menu_bar[1][2].y1+15, "" },
        {menu_bar[1][0].x2+20, menu_bar[0][3].y1, menu_bar[2][0].x1+215, menu_bar[0][3].y1+40, menu_bar[2][3].x1+15, menu_bar[1][3].y1+15, "3_3�ַ�������" },
        {menu_bar[1][0].x2+20, menu_bar[0][4].y1, menu_bar[2][0].x1+215, menu_bar[0][4].y1+40, menu_bar[2][4].x1+15, menu_bar[1][4].y1+15, "3_4�ж��Ƿ�Ϊ����" },
        {menu_bar[1][0].x2+20, menu_bar[0][5].y1, menu_bar[2][0].x1+215, menu_bar[0][5].y1+40, menu_bar[2][5].x1+15, menu_bar[1][5].y1+15, "3_5�ַ����ľֲ�����" },
        {menu_bar[1][0].x2+20, menu_bar[0][6].y1, menu_bar[2][0].x1+215, menu_bar[0][6].y1+40, menu_bar[2][6].x1+15, menu_bar[1][6].y1+15, "3_6ɾ������c�ַ�" },
        {menu_bar[1][0].x2+20, menu_bar[0][7].y1, menu_bar[2][0].x1+215, menu_bar[0][7].y1+40, menu_bar[2][7].x1+15, menu_bar[1][7].y1+15, "3_7�ַ����Ĳ���" },
        {menu_bar[1][0].x2+20, menu_bar[0][8].y1, menu_bar[2][0].x1+215, menu_bar[0][8].y1+40, menu_bar[2][8].x1+15, menu_bar[1][8].y1+15, "3_8ʵ���ַ����ıȽ�" },
        {menu_bar[1][0].x2+20, menu_bar[0][9].y1, menu_bar[2][0].x1+215, menu_bar[0][9].y1+40, menu_bar[2][9].x1+15, menu_bar[1][9].y1+15, "" }
    },
    {
        {menu_bar[2][0].x2+20, menu_bar[0][0].y1, menu_bar[3][0].x1+215, menu_bar[0][0].y1+40, menu_bar[3][0].x1+15, menu_bar[1][0].y1+15, "4.ָ��������" },
        {menu_bar[2][0].x2+20, menu_bar[0][1].y1, menu_bar[3][0].x1+215, menu_bar[0][1].y1+40, menu_bar[3][1].x1+15, menu_bar[1][1].y1+15, "4_1�����Ĵ���" },
        {menu_bar[2][0].x2+20, menu_bar[0][2].y1, menu_bar[3][0].x1+215, menu_bar[0][2].y1+40, menu_bar[3][2].x1+15, menu_bar[1][2].y1+15, "4_2�����Ĳ���" },
        {menu_bar[2][0].x2+20, menu_bar[0][3].y1, menu_bar[3][0].x1+215, menu_bar[0][3].y1+40, menu_bar[3][3].x1+15, menu_bar[1][3].y1+15, "4_3����Ԫ�ص����" },
        {menu_bar[2][0].x2+20, menu_bar[0][4].y1, menu_bar[3][0].x1+215, menu_bar[0][4].y1+40, menu_bar[3][4].x1+15, menu_bar[1][4].y1+15, "" },
        {menu_bar[2][0].x2+20, menu_bar[0][5].y1, menu_bar[3][0].x1+215, menu_bar[0][5].y1+40, menu_bar[3][5].x1+15, menu_bar[1][5].y1+15, "4_5�����İ������" },
        {menu_bar[2][0].x2+20, menu_bar[0][6].y1, menu_bar[3][0].x1+215, menu_bar[0][6].y1+40, menu_bar[3][6].x1+15, menu_bar[1][6].y1+15, "4_6������ɾ��ĳ���ڵ�" },
        {menu_bar[2][0].x2+20, menu_bar[0][7].y1, menu_bar[3][0].x1+215, menu_bar[0][7].y1+40, menu_bar[3][7].x1+15, menu_bar[1][7].y1+15, "4_7Լɪ������" },
        {menu_bar[2][0].x2+20, menu_bar[0][8].y1, menu_bar[3][0].x1+215, menu_bar[0][8].y1+40, menu_bar[3][8].x1+15, menu_bar[1][8].y1+15, "" },
        {menu_bar[2][0].x2+20, menu_bar[0][9].y1, menu_bar[3][0].x1+215, menu_bar[0][9].y1+40, menu_bar[3][9].x1+15, menu_bar[1][9].y1+15, "" }
    }
    };

    menu_logo();
/*
    PIMAGE logo = newimage();
    getimage(logo,"logo.png");
    putimage(150,40,logo);
    delimage(logo);
*/
    /**< ������ť */
    setfillcolor(BLUE);
    setcolor(BLUE);
    bar(menu_bar[0][0].x1, menu_bar[0][0].y1, menu_bar[0][0].x2, menu_bar[0][0].y2);
    bar(menu_bar[0][1].x1, menu_bar[0][1].y1, menu_bar[0][1].x2, menu_bar[0][1].y2);
    bar(menu_bar[0][2].x1, menu_bar[0][2].y1, menu_bar[0][2].x2, menu_bar[0][2].y2);
    bar(menu_bar[0][3].x1, menu_bar[0][3].y1, menu_bar[0][3].x2, menu_bar[0][3].y2);
    bar(menu_bar[0][4].x1, menu_bar[0][4].y1, menu_bar[0][4].x2, menu_bar[0][4].y2);
    bar(menu_bar[0][5].x1, menu_bar[0][5].y1, menu_bar[0][5].x2, menu_bar[0][5].y2);
    bar(menu_bar[0][6].x1, menu_bar[0][6].y1, menu_bar[0][6].x2, menu_bar[0][6].y2);
    //bar(menu_bar[0][7].x1, menu_bar[0][7].y1, menu_bar[0][7].x2, menu_bar[0][7].y2);
    //bar(menu_bar[0][8].x1, menu_bar[0][8].y1, menu_bar[0][8].x2, menu_bar[0][8].y2);
    //bar(menu_bar[0][9].x1, menu_bar[0][9].y1, menu_bar[0][9].x2, menu_bar[0][9].y2);

    setfillcolor(GREEN);
    bar(menu_bar[1][0].x1, menu_bar[1][0].y1, menu_bar[1][0].x2, menu_bar[1][0].y2);
    bar(menu_bar[1][1].x1, menu_bar[1][1].y1, menu_bar[1][1].x2, menu_bar[1][1].y2);
    bar(menu_bar[1][2].x1, menu_bar[1][2].y1, menu_bar[1][2].x2, menu_bar[1][2].y2);
    bar(menu_bar[1][3].x1, menu_bar[1][3].y1, menu_bar[1][3].x2, menu_bar[1][3].y2);
    bar(menu_bar[1][4].x1, menu_bar[1][4].y1, menu_bar[1][4].x2, menu_bar[1][4].y2);
    bar(menu_bar[1][5].x1, menu_bar[1][5].y1, menu_bar[1][5].x2, menu_bar[1][5].y2);
    bar(menu_bar[1][6].x1, menu_bar[1][6].y1, menu_bar[1][6].x2, menu_bar[1][6].y2);
    //bar(menu_bar[1][7].x1, menu_bar[1][7].y1, menu_bar[1][7].x2, menu_bar[1][7].y2);
    //bar(menu_bar[1][8].x1, menu_bar[1][8].y1, menu_bar[1][8].x2, menu_bar[1][8].y2);
    //bar(menu_bar[1][9].x1, menu_bar[1][9].y1, menu_bar[1][9].x2, menu_bar[1][9].y2);

    setfillcolor(EGERGB(214,50,0));
    bar(menu_bar[2][0].x1, menu_bar[2][0].y1, menu_bar[2][0].x2, menu_bar[2][0].y2);
    bar(menu_bar[2][1].x1, menu_bar[2][1].y1, menu_bar[2][1].x2, menu_bar[2][1].y2);
    bar(menu_bar[2][2].x1, menu_bar[2][2].y1, menu_bar[2][2].x2, menu_bar[2][2].y2);
    bar(menu_bar[2][3].x1, menu_bar[2][3].y1, menu_bar[2][3].x2, menu_bar[2][3].y2);
    bar(menu_bar[2][4].x1, menu_bar[2][4].y1, menu_bar[2][4].x2, menu_bar[2][4].y2);
    bar(menu_bar[2][5].x1, menu_bar[2][5].y1, menu_bar[2][5].x2, menu_bar[2][5].y2);
    bar(menu_bar[2][6].x1, menu_bar[2][6].y1, menu_bar[2][6].x2, menu_bar[2][6].y2);
    bar(menu_bar[2][7].x1, menu_bar[2][7].y1, menu_bar[2][7].x2, menu_bar[2][7].y2);
    bar(menu_bar[2][8].x1, menu_bar[2][8].y1, menu_bar[2][8].x2, menu_bar[2][8].y2);
    bar(menu_bar[2][9].x1, menu_bar[2][9].y1, menu_bar[2][9].x2, menu_bar[2][9].y2);

    setfillcolor(MAGENTA);
    bar(menu_bar[3][0].x1, menu_bar[3][0].y1, menu_bar[3][0].x2, menu_bar[3][0].y2);
    bar(menu_bar[3][1].x1, menu_bar[3][1].y1, menu_bar[3][1].x2, menu_bar[3][1].y2);
    bar(menu_bar[3][2].x1, menu_bar[3][2].y1, menu_bar[3][2].x2, menu_bar[3][2].y2);
    bar(menu_bar[3][3].x1, menu_bar[3][3].y1, menu_bar[3][3].x2, menu_bar[3][3].y2);
    bar(menu_bar[3][4].x1, menu_bar[3][4].y1, menu_bar[3][4].x2, menu_bar[3][4].y2);
    bar(menu_bar[3][5].x1, menu_bar[3][5].y1, menu_bar[3][5].x2, menu_bar[3][5].y2);
    bar(menu_bar[3][6].x1, menu_bar[3][6].y1, menu_bar[3][6].x2, menu_bar[3][6].y2);
    bar(menu_bar[3][7].x1, menu_bar[3][7].y1, menu_bar[3][7].x2, menu_bar[3][7].y2);
    //bar(menu_bar[3][8].x1, menu_bar[3][8].y1, menu_bar[3][8].x2, menu_bar[3][8].y2);
    //bar(menu_bar[3][9].x1, menu_bar[3][9].y1, menu_bar[3][9].x2, menu_bar[3][9].y2);


    /**< �����ť���� */
    setbkmode(TRANSPARENT);
    setcolor(WHITE);
    outtextxy (menu_bar[0][0].value_x, menu_bar[0][0].value_y, menu_bar[0][0].value);
    outtextxy (menu_bar[0][1].value_x, menu_bar[0][1].value_y, menu_bar[0][1].value);
    outtextxy (menu_bar[0][2].value_x, menu_bar[0][2].value_y, menu_bar[0][2].value);
    outtextxy (menu_bar[0][3].value_x, menu_bar[0][3].value_y, menu_bar[0][3].value);
    outtextxy (menu_bar[0][4].value_x, menu_bar[0][4].value_y, menu_bar[0][4].value);
    outtextxy (menu_bar[0][5].value_x, menu_bar[0][5].value_y, menu_bar[0][5].value);
    outtextxy (menu_bar[0][6].value_x, menu_bar[0][6].value_y, menu_bar[0][6].value);
    outtextxy (menu_bar[0][7].value_x, menu_bar[0][7].value_y, menu_bar[0][7].value);
    outtextxy (menu_bar[0][8].value_x, menu_bar[0][8].value_y, menu_bar[0][8].value);
    outtextxy (menu_bar[0][9].value_x, menu_bar[0][9].value_y, menu_bar[0][9].value);

    outtextxy (menu_bar[1][0].value_x, menu_bar[1][0].value_y, menu_bar[1][0].value);
    outtextxy (menu_bar[1][1].value_x, menu_bar[1][1].value_y, menu_bar[1][1].value);
    outtextxy (menu_bar[1][2].value_x, menu_bar[1][2].value_y, menu_bar[1][2].value);
    outtextxy (menu_bar[1][3].value_x, menu_bar[1][3].value_y, menu_bar[1][3].value);
    outtextxy (menu_bar[1][4].value_x, menu_bar[1][4].value_y, menu_bar[1][4].value);
    outtextxy (menu_bar[1][5].value_x, menu_bar[1][5].value_y, menu_bar[1][5].value);
    outtextxy (menu_bar[1][6].value_x, menu_bar[1][6].value_y, menu_bar[1][6].value);
    outtextxy (menu_bar[1][7].value_x, menu_bar[1][7].value_y, menu_bar[1][7].value);
    outtextxy (menu_bar[1][8].value_x, menu_bar[1][8].value_y, menu_bar[1][8].value);
    outtextxy (menu_bar[1][9].value_x, menu_bar[1][9].value_y, menu_bar[1][9].value);

    outtextxy (menu_bar[2][0].value_x, menu_bar[2][0].value_y, menu_bar[2][0].value);
    outtextxy (menu_bar[2][1].value_x, menu_bar[2][1].value_y, menu_bar[2][1].value);
    outtextxy (menu_bar[2][2].value_x, menu_bar[2][2].value_y, menu_bar[2][2].value);
    outtextxy (menu_bar[2][3].value_x, menu_bar[2][3].value_y, menu_bar[2][3].value);
    outtextxy (menu_bar[2][4].value_x, menu_bar[2][4].value_y, menu_bar[2][4].value);
    outtextxy (menu_bar[2][5].value_x, menu_bar[2][5].value_y, menu_bar[2][5].value);
    outtextxy (menu_bar[2][6].value_x, menu_bar[2][6].value_y, menu_bar[2][6].value);
    outtextxy (menu_bar[2][7].value_x, menu_bar[2][7].value_y, menu_bar[2][7].value);
    outtextxy (menu_bar[2][8].value_x, menu_bar[2][8].value_y, menu_bar[2][8].value);
    outtextxy (menu_bar[2][9].value_x, menu_bar[2][9].value_y, menu_bar[2][9].value);

    outtextxy (menu_bar[3][0].value_x, menu_bar[3][0].value_y, menu_bar[3][0].value);
    outtextxy (menu_bar[3][1].value_x, menu_bar[3][1].value_y, menu_bar[3][1].value);
    outtextxy (menu_bar[3][2].value_x, menu_bar[3][2].value_y, menu_bar[3][2].value);
    outtextxy (menu_bar[3][3].value_x, menu_bar[3][3].value_y, menu_bar[3][3].value);
    outtextxy (menu_bar[3][4].value_x, menu_bar[3][4].value_y, menu_bar[3][4].value);
    outtextxy (menu_bar[3][5].value_x, menu_bar[3][5].value_y, menu_bar[3][5].value);
    outtextxy (menu_bar[3][6].value_x, menu_bar[3][6].value_y, menu_bar[3][6].value);
    outtextxy (menu_bar[3][7].value_x, menu_bar[3][7].value_y, menu_bar[3][7].value);
    outtextxy (menu_bar[3][8].value_x, menu_bar[3][8].value_y, menu_bar[3][8].value);
    outtextxy (menu_bar[3][9].value_x, menu_bar[3][9].value_y, menu_bar[3][9].value);

    setbkmode(OPAQUE);

    /**< �˵�ѡ�� */
    mouse_msg msg = {0};

    for (;1;)
    {
        msg  = getmouse();
        if (msg.is_down())
        {
            if(between(msg.x,menu_bar[0][0].x1, menu_bar[0][0].x2))
            {
                if(between(msg.y, menu_bar[0][1].y1, menu_bar[0][1].y2)){cleardevice();open_1_1();break;}
                if(between(msg.y, menu_bar[0][2].y1, menu_bar[0][2].y2)){cleardevice();open_1_2();break;}
                if(between(msg.y, menu_bar[0][3].y1, menu_bar[0][3].y2)){cleardevice();open_1_3();break;}
                if(between(msg.y, menu_bar[0][4].y1, menu_bar[0][4].y2)){cleardevice();open_1_4();break;}
                if(between(msg.y, menu_bar[0][5].y1, menu_bar[0][5].y2)){cleardevice();open_1_5();break;}
                if(between(msg.y, menu_bar[0][6].y1, menu_bar[0][6].y2)){cleardevice();open_1_6();break;}
                if(between(msg.y, menu_bar[0][7].y1, menu_bar[0][7].y2)){cleardevice();break;}
                if(between(msg.y, menu_bar[0][8].y1, menu_bar[0][8].y2)){cleardevice();break;}
                if(between(msg.y, menu_bar[0][9].y1, menu_bar[0][9].y2)){cleardevice();break;}
            }
            if(between(msg.x,menu_bar[1][0].x1, menu_bar[1][0].x2))
            {
                if(between(msg.y, menu_bar[1][1].y1, menu_bar[1][1].y2)){cleardevice();open_2_1();break;}
                if(between(msg.y, menu_bar[1][2].y1, menu_bar[1][2].y2)){cleardevice();open_2_2();break;}
                if(between(msg.y, menu_bar[1][3].y1, menu_bar[1][3].y2)){cleardevice();open_2_3();break;}
                if(between(msg.y, menu_bar[1][4].y1, menu_bar[1][4].y2)){cleardevice();break;}
                if(between(msg.y, menu_bar[1][5].y1, menu_bar[1][5].y2)){cleardevice();open_2_5();break;}
                if(between(msg.y, menu_bar[1][6].y1, menu_bar[1][6].y2)){cleardevice();open_2_6();break;}
                if(between(msg.y, menu_bar[1][7].y1, menu_bar[1][7].y2)){cleardevice();break;}
                if(between(msg.y, menu_bar[1][8].y1, menu_bar[1][8].y2)){cleardevice();break;}
                if(between(msg.y, menu_bar[1][9].y1, menu_bar[1][9].y2)){cleardevice();break;}
            }
            if(between(msg.x,menu_bar[2][0].x1, menu_bar[2][0].x2))
            {
                if(between(msg.y, menu_bar[2][1].y1, menu_bar[2][1].y2)){cleardevice();open_3_1();break;}
                if(between(msg.y, menu_bar[2][2].y1, menu_bar[2][2].y2)){cleardevice();break;}
                if(between(msg.y, menu_bar[2][3].y1, menu_bar[2][3].y2)){cleardevice();open_3_3();break;}
                if(between(msg.y, menu_bar[2][4].y1, menu_bar[2][4].y2)){cleardevice();open_3_4();break;}
                if(between(msg.y, menu_bar[2][5].y1, menu_bar[2][5].y2)){cleardevice();open_3_5();break;}
                if(between(msg.y, menu_bar[2][6].y1, menu_bar[2][6].y2)){cleardevice();open_3_6();break;}
                if(between(msg.y, menu_bar[2][7].y1, menu_bar[2][7].y2)){cleardevice();open_3_7();break;}
                if(between(msg.y, menu_bar[2][8].y1, menu_bar[2][8].y2)){cleardevice();open_3_8();break;}
                if(between(msg.y, menu_bar[2][9].y1, menu_bar[2][9].y2)){cleardevice();break;}
            }
            if(between(msg.x,menu_bar[3][0].x1, menu_bar[3][0].x2))
            {
                if(between(msg.y, menu_bar[3][1].y1, menu_bar[3][1].y2)){cleardevice();open_4_1();break;}
                if(between(msg.y, menu_bar[3][2].y1, menu_bar[3][2].y2)){cleardevice();open_4_2();break;}
                if(between(msg.y, menu_bar[3][3].y1, menu_bar[3][3].y2)){cleardevice();open_4_3();break;}
                if(between(msg.y, menu_bar[3][4].y1, menu_bar[3][4].y2)){cleardevice();break;}
                if(between(msg.y, menu_bar[3][5].y1, menu_bar[3][5].y2)){cleardevice();open_4_5();break;}
                if(between(msg.y, menu_bar[3][6].y1, menu_bar[3][6].y2)){cleardevice();open_4_6();break;}
                if(between(msg.y, menu_bar[3][7].y1, menu_bar[3][7].y2)){cleardevice();open_4_7();break;}
                if(between(msg.y, menu_bar[3][8].y1, menu_bar[3][8].y2)){cleardevice();break;}
                if(between(msg.y, menu_bar[3][9].y1, menu_bar[3][9].y2)){cleardevice();break;}
            }
        }
    }
}

void menu_logo(void)
{
    /**< ����logo */
    setcaption("Cָ����������̬��ʾѧϰ����");
    setcolor(YELLOW);
    setfont(60,0,"���Ĳ���");
    outtextxy(80,30,"Cָ����������̬��ʾѧϰ����");
    setfont(16,0,"����");
    setcolor(WHITE);
}