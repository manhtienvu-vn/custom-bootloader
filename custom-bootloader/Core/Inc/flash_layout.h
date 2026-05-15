/*
 * flash_layout.h
 *
 *  Created on: May 12, 2026
 *      Author: ADMIN
 */

#ifndef INC_FLASH_LAYOUT_H_
#define INC_FLASH_LAYOUT_H_

#define BL_START_ADDR			0x08000000  //16KB
#define APP_HEADER_ADDR			0x08004000  //1KB
#define APP_START_ADDR  		0x08004400  //47KB
#define APP_MAX_SIZE            47*1024     //47KB

#endif /* INC_FLASH_LAYOUT_H_ */
