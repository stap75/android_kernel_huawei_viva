/*
 * lm8323.h - Configuration for LM8323 keypad driver.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation (version 2 of the License only).
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

  /*==============================================================================

    修订历史

    问题单号          修改人      日期         原因

   ==============================================================================*/

    #ifndef _SII_9244_H
    #define _SII_9244_H

	extern bool is_mhl_initialized(void);

    struct sii9244_platform_data{
        void (*reset) (void);
   };

  #endif

