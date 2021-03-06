// Copyright (c) 2014-2018, Loïc Hoguin <essen@ninenines.eu>
//
// Permission to use, copy, modify, and/or distribute this software for any
// purpose with or without fee is hereby granted, provided that the above
// copyright notice and this permission notice appear in all copies.
//
// THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
// WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
// ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
// WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
// ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
// OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.

#include "esdl2.h"

#define KEYMOD_FLAGS(F) \
	F(left_shift, KMOD_LSHIFT) \
	F(right_shift, KMOD_RSHIFT) \
	F(left_ctrl, KMOD_LCTRL) \
	F(right_ctrl, KMOD_RCTRL) \
	F(left_alt, KMOD_LALT) \
	F(right_alt, KMOD_RALT) \
	F(left_gui, KMOD_LGUI) \
	F(right_gui, KMOD_RGUI) \
	F(num, KMOD_NUM) \
	F(caps, KMOD_CAPS) \
	F(mode, KMOD_MODE)

NIF_LIST_TO_FLAGS_FUNCTION(keymod_list_to_flags, Uint16, KEYMOD_FLAGS)
NIF_FLAGS_TO_LIST_FUNCTION(keymod_flags_to_list, Uint16, KEYMOD_FLAGS)
