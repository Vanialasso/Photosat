/*
 * emu_tc_programming.cpp
 *
 *  Created on: Jan 13, 2017
 *
 *  Created on: Oct 26, 2024
 *      Author: Oscar Rodriguez Polo
 */

/****************************************************************************
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public License
 *   as published by the Free Software Foundation; either version 2
 *   of the License, or (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307,USA.
 *
 *
 ****************************************************************************/

#include <public/emu_hw_timecode_drv_v1.h>
#include <public/emu_sc_channel_drv_v1.h>
#include <public/emu_gss_v1.h>

//TODO Complete FT_UAH_PHOTSAT_SERV_129_0010

#define  FT_UAH_PHOTSAT_SERV_129_0010

#ifdef FT_UAH_PHOTSAT_SERV_129_0010



EmuGSS_TCProgram3_5 prog_FT_UAH_PHOTSAT_SERV_129_0010_step0 (OBT_AFTER_POWER_ON,
		"FT_UAH_PHOTSAT_SERV_129_0010_Step0, Habilita SID 20 ", 20 );

EmuGSS_TCProgram129_2 prog_FT_UAH_PHOTSAT_SERV_129_0010_step1 (OBT_AFTER_POWER_ON+5,
		"FT_UAH_PHOTSAT_SERV_129_FDIR_0020_Step1,valores Ks",0.1,0.2,0.3);
EmuGSS_TCProgram129_1 prog_FT_UAH_PHOTSAT_SERV_129_0010_step2 (OBT_AFTER_POWER_ON+10,
		"FT_UAH_PHOTSAT_SERV_129_FDIR_0020_Step2,observacion",300,600,4);
EmuGSS_TCProgram128_1 prog_FT_UAH_PHOTSAT_SERV_129_0010_step3(OBT_AFTER_POWER_ON+150,
"END FUNCTIONAL TESTS");

#endif

//TODO Complete FT_UAH_PHOTSAT_SERV_129_FDIR_0020

//#define  FT_UAH_PHOTSAT_SERV_129_FDIR_0020

#ifdef FT_UAH_PHOTSAT_SERV_129_FDIR_0020




EmuGSS_TCProgram12_5_Value_UINT8 prog_FT_UAH_PHOTSAT_SERV_129_FDIR_0020_step0 (
		OBT_AFTER_POWER_ON,"FT_UAH_PHOTSAT_SERV_129_FDIR_0020_Step0,"
				" Define PMONID 1 para monitorizar el PID 13", 1, 13, 10,2 , 0xFF,
0x00,0x4003);
EmuGSS_TCProgram12_5_Value_UINT8 prog_FT_UAH_PHOTSAT_SERV_129_FDIR_0020_step1 (
		OBT_AFTER_POWER_ON + 5,"FT_UAH_PHOTSAT_SERV_129_FDIR_0020_Step1,"
				" Define PMONID 2 para monitorizar el PID 14", 2, 14, 10,2 , 0xFF,
0x00,0x4003);

EmuGSS_TCProgram19_1_Action_129_3 prog_FT_UAH_PHOTSAT_SERV_129_FDIR_0020_step2(OBT_AFTER_POWER_ON+10,
		"FT_UAH_PHOTSAT_SERV_129_FDIR_0020_Step2,reset a la actitud",0x4003);

EmuGSS_TCProgram5_5 prog_FT_UAH_PHOTSAT_SERV_129_FDIR_0020_step3(OBT_AFTER_POWER_ON + 15
,"FT_UAH_PHOTSAT_SERV_129_FDIR_0020 Step3, Habilita EvID 0x4003",0x4003);


EmuGSS_TCProgram12_1 prog_FT_UAH_PHOTSAT_SERV_129_FDIR_0020_step4 (OBT_AFTER_POWER_ON+ 20
,"FT_UAH_PHOTSAT_SERV_129_FDIR_0020_Step4, Habilita PMONID 1 ", 1);

EmuGSS_TCProgram12_1 prog_FT_UAH_PHOTSAT_SERV_129_FDIR_0020_step5 (OBT_AFTER_POWER_ON+ 25
,"FT_UAH_PHOTSAT_SERV_129_FDIR_0020_Step5, Habilita PMONID 2 ", 2);


EmuGSS_TCProgram19_4 prog_FT_UAH_PHOTSAT_SERV_129_FDIR_0020_step6(OBT_AFTER_POWER_ON+30,
"FT_UAH_PHOTSAT_SERV_129_FDIR_0020_Step6, Enable Event Action", 0x4003);

EmuGSS_TCProgram129_2 prog_FT_UAH_PHOTSAT_SERV_129_FDIR_0020_step7 (OBT_AFTER_POWER_ON+35,
		"FT_UAH_PHOTSAT_SERV_129_FDIR_0020_Step6,valores Ks",0.5,0.5,0.5);
EmuGSS_TCProgram129_1 prog_FT_UAH_PHOTSAT_SERV_129_0010_step8 (OBT_AFTER_POWER_ON+40,
		"FT_UAH_PHOTSAT_SERV_129_FDIR_0020_Step8,observacion",300,600,4);
EmuGSS_TCProgram128_1 prog_FT_UAH_PHOTSAT_SERV_129_FDIR_0020_step9(OBT_AFTER_POWER_ON+150,
"END FUNCTIONAL TESTS");
#endif



