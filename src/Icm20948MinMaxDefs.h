/*
* ________________________________________________________________________________________________________
* Copyright © 2014-2015 InvenSense Inc. Portions Copyright © 2014-2015 Movea. All rights reserved.
* This software, related documentation and any modifications thereto (collectively “Software”) is subject
* to InvenSense and its licensors' intellectual property rights under U.S. and international copyright and
* other intellectual property rights laws.
* InvenSense and its licensors retain all intellectual property and proprietary rights in and to the Software
* and any use, reproduction, disclosure or distribution of the Software without an express license
* agreement from InvenSense is strictly prohibited.
* ________________________________________________________________________________________________________
*/

#ifndef _INV_ICM20948_MIN_MAX_DEFINES_H_
#define _INV_ICM20948_MIN_MAX_DEFINES_H_

#ifdef __cplusplus
extern "C" {
#endif

#ifndef min
#define min(x,y)    (((x)<(y))?(x):(y))
#endif

#ifndef max
#define max(x,y)    (((x)>(y))?(x):(y))
#endif

#ifdef __cplusplus
}
#endif

#endif  /* #ifndef _INV_ICM20948_MIN_MAX_DEFINES_H_ */

