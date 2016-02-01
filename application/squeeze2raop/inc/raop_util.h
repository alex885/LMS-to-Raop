/*
 *  Squeeze2upnp - LMS to uPNP gateway
 *
 *  Squeezelite : (c) Adrian Smith 2012-2014, triode1@btinternet.com
 *  Additions & gateway : (c) Philippe 2014, philippe_44@outlook.com
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef __RAOP_UTIL_H
#define __RAOP_UTIL_H

#include "util_common.h"

struct sq_metadata_s;
struct sMRConfig;
struct sRaopCtx;

void  	RaopInit(log_level level);
void 	RaopStop(struct sRaopCtx *Ctx);
void	RaopUnPause(struct sRaopCtx *Ctx);
void	RaopPause(struct sRaopCtx *Ctx);
void 	RaopTick(struct sRaopCtx *Ctx);
bool	RaopConnect(struct sRaopCtx *Ctx, raop_codec_t Codec, struct sq_metadata_s *MetaData);
void 	RaopDisconnect(struct sRaopCtx *Ctx);
void 	RaopSetVolume(struct sRaopCtx *Ctx, u8_t Volume);
void 	RaopSetDeviceVolume(struct sRaopCtx *Ctx, u8_t Volume);

#endif
