#ifndef BASIC_H_INCLUDED
#define BASIC_H_INCLUDED

#include "graphics.h"
#include "code.h"
#include "data_definition.h"

#define OUT_FRAME_X1 5          /**< 最外边框左上角横坐标 */
#define OUT_FRAME_Y1 5          /**< 最外边框左上角纵坐标 */
#define OUT_FRAME_X2 955        /**< 最外边框右下角横坐标 */
#define OUT_FRAME_Y2 715        /**< 最外边框右下角纵坐标 */
#define HIDELINE_X (OUT_FRAME_X1+45)  /**< 标题文字横坐标 */
#define HIDELINE_Y (OUT_FRAME_Y1+ 5)  /**< 标题文字纵坐标 */
#define HIDELINE_FRAME_Y 30     /**< 标题纵坐标 */
#define MID_FRAME_LINE_X 550    /**< 中间分隔线横坐标     */
#define OUTPUT_FRAME_Y 580      /**< 交互区纵坐标 */
#define OUTPUT_VALUE_X (OUT_FRAME_X1+5)             /**< 交互区值的横坐标   */
#define OUTPUT_VALUE_Y1 (OUTPUT_FRAME_Y + 25)       /**< 交互区第一行纵坐标 */
#define OUTPUT_VALUE_Y2 (OUTPUT_FRAME_Y + 45)       /**< 交互区第二行纵坐标 */
#define OUTPUT_VALUE_Y3 (OUTPUT_FRAME_Y + 65)       /**< 交互区第三行纵坐标 */
#define OUTPUT_VALUE_Y4 (OUTPUT_FRAME_Y + 85)       /**< 交互区第四行纵坐标 */
#define OUTPUT_VALUE_Y5 (OUTPUT_FRAME_Y + 105)      /**< 交互区第五行纵坐标 */
#define CODE_X (MID_FRAME_LINE_X + 50)  /**< 代码显示区横坐标 */
#define CODE_Y (HIDELINE_FRAME_Y + 40)  /**< 代码显示区纵坐标 */
#define SHOW_TIME 300           /**< 时间间隔 */

/**< 处理等待按键 */
void wait_for_key(void);

/**< 开始菜单 */
void menu(void);

/**< 创建可视窗口 */
void start(void);

/**< 关闭可视窗口 */
void close(void);

/**< 创建演示框架 */
void show_frame(void);

/**< 创建垂直水平箭头 */
void link_ptr (int x1, int y1, int x2, int y2);

/**< 创建代码前的箭头 */
void show_code_pointer (int x, int y);

/**< 关闭代码前的箭头 */
void hide_code_pointer (int x, int y);

/**< 判断一点是否在两点之间，m可取为鼠标的横坐标或纵坐标 */
int between (int m, int x, int y);

#endif // BASIC_H_INCLUDED
