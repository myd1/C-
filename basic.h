#ifndef BASIC_H_INCLUDED
#define BASIC_H_INCLUDED

#include "graphics.h"
#include "code.h"
#include "data_definition.h"

#define OUT_FRAME_X1 5          /**< ����߿����ϽǺ����� */
#define OUT_FRAME_Y1 5          /**< ����߿����Ͻ������� */
#define OUT_FRAME_X2 955        /**< ����߿����½Ǻ����� */
#define OUT_FRAME_Y2 715        /**< ����߿����½������� */
#define HIDELINE_X (OUT_FRAME_X1+45)  /**< �������ֺ����� */
#define HIDELINE_Y (OUT_FRAME_Y1+ 5)  /**< �������������� */
#define HIDELINE_FRAME_Y 30     /**< ���������� */
#define MID_FRAME_LINE_X 550    /**< �м�ָ��ߺ�����     */
#define OUTPUT_FRAME_Y 580      /**< ������������ */
#define OUTPUT_VALUE_X (OUT_FRAME_X1+5)             /**< ������ֵ�ĺ�����   */
#define OUTPUT_VALUE_Y1 (OUTPUT_FRAME_Y + 25)       /**< ��������һ�������� */
#define OUTPUT_VALUE_Y2 (OUTPUT_FRAME_Y + 45)       /**< �������ڶ��������� */
#define OUTPUT_VALUE_Y3 (OUTPUT_FRAME_Y + 65)       /**< ������������������ */
#define OUTPUT_VALUE_Y4 (OUTPUT_FRAME_Y + 85)       /**< ������������������ */
#define OUTPUT_VALUE_Y5 (OUTPUT_FRAME_Y + 105)      /**< ������������������ */
#define CODE_X (MID_FRAME_LINE_X + 50)  /**< ������ʾ�������� */
#define CODE_Y (HIDELINE_FRAME_Y + 40)  /**< ������ʾ�������� */
#define SHOW_TIME 300           /**< ʱ���� */

/**< ����ȴ����� */
void wait_for_key(void);

/**< ��ʼ�˵� */
void menu(void);

/**< �������Ӵ��� */
void start(void);

/**< �رտ��Ӵ��� */
void close(void);

/**< ������ʾ��� */
void show_frame(void);

/**< ������ֱˮƽ��ͷ */
void link_ptr (int x1, int y1, int x2, int y2);

/**< ��������ǰ�ļ�ͷ */
void show_code_pointer (int x, int y);

/**< �رմ���ǰ�ļ�ͷ */
void hide_code_pointer (int x, int y);

/**< �ж�һ���Ƿ�������֮�䣬m��ȡΪ���ĺ������������ */
int between (int m, int x, int y);

#endif // BASIC_H_INCLUDED
