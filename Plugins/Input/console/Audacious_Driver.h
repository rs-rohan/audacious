/*
 * Audacious: Cross platform media player
 * Copyright (c) 2005  Audacious team
 *
 * Header for the Audacious plugin.
 */

#ifndef AUDACIOUS_DRIVER_H
#define AUDACIOUS_DRIVER_H

#include <glib.h>

#include "Blip_Buffer.h"
#include "Blip_Synth.h"
#include "Classic_Emu.h"
#include "Effects_Buffer.h"
#include "Fir_Resampler.h"
#include "Gb_Apu.h"
#include "Gb_Cpu.h"
#include "Gb_Oscs.h"
#include "Gbs_Emu.h"
#include "Gym_Emu.h"
#include "Multi_Buffer.h"
#include "Music_Emu.h"
#include "Nes_Apu.h"
#include "Nes_Cpu.h"
#include "Nes_Namco.h"
#include "Nes_Oscs.h"
#include "Nes_Vrc6.h"
#include "Nsf_Emu.h"
#include "Panning_Buffer.h"
#include "Sms_Apu.h"
#include "Sms_Oscs.h"
#include "Snes_Spc.h"
#include "Spc_Cpu.h"
#include "Spc_Dsp.h"
#include "Spc_Emu.h"
#include "Tagged_Data.h"
#include "Vgm_Emu.h"
#include "abstract_file.h"
#include "blargg_common.h"
#include "blargg_endian.h"
#include "blargg_source.h"
#include "ym2612.h"

struct AudaciousConsoleConfig {
	gint loop_length;	// length to loop in seconds
	gboolean resample;	// whether or not to resample
	gint resample_rate;	// rate to resample at
};

#define PLAY_TYPE_NONE		0
#define PLAY_TYPE_SPC		1
#define PLAY_TYPE_NSF		2
#define PLAY_TYPE_VGM		3
#define PLAY_TIME_GBS		4
#define PLAY_TYPE_GYM		5

#endif
