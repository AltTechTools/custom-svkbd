#define KEYS 43

static Key keys_lazy_en[KEYS] = {
	{ 0, 0, XK_q, 1 },
	{ 0, 0, XK_w, 1 },
	{ 0, 0, XK_e, 1 },
	{ 0, 0, XK_r, 1 },
	{ 0, 0, XK_t, 1 },
	{ 0, 0, XK_y, 1 },
	{ 0, 0, XK_u, 1 },
	{ 0, 0, XK_i, 1 },
	{ 0, 0, XK_o, 1 },
	{ 0, 0, XK_p, 1 },

	{ 0 },

	{ 0, 0, XK_a, 1 },
	{ 0, 0, XK_s, 1 },
	{ 0, 0, XK_d, 1 },
	{ 0, 0, XK_f, 1 },
	{ 0, 0, XK_g, 1 },
	{ 0, 0, XK_h, 1 },
	{ 0, 0, XK_j, 1 },
	{ 0, 0, XK_k, 1 },
	{ 0, 0, XK_l, 1 },
	{ "'", 0, XK_apostrophe, 1 },

	{ 0 },

	{ "↑", 0, XK_Shift_L, 1 },
	{ 0, 0, XK_z, 1 },
	{ 0, 0, XK_x, 1 },
	{ 0, 0, XK_c, 1 },
	{ 0, 0, XK_v, 1 },
	{ 0, 0, XK_b, 1 },
	{ 0, 0, XK_n, 1 },
	{ 0, 0, XK_m, 1 },
	{ "Tab", 0, XK_Tab, 1 },
	{ "⌫", 0, XK_BackSpace, 1 },

	{ 0 },

	{ "?123", 0, XK_Cancel, 3 },
	{ "-", 0, XK_minus, 2 },
	{ "☺", 0, 0x101f642, 2 },
	{ "Ctl", 0, XK_Control_L, 2 },
	{ "Alt", 0, XK_Alt_L, 2 },
	{ "", 0, XK_space, 4 },
	{ ".", 0, XK_period, 2 },
	{ "↲Enter", 0, XK_Return, 3 }
};

static Key keys_symbols[KEYS] = {
	{ "1", 0, XK_1, 1 },
	{ "2", 0, XK_2, 1 },
	{ "3", 0, XK_3, 1 },
	{ "4", 0, XK_4, 1 },
	{ "5", 0, XK_5, 1 },
	{ "6", 0, XK_6, 1 },
	{ "7", 0, XK_7, 1 },
	{ "8", 0, XK_8, 1 },
	{ "9", 0, XK_9, 1 },
	{ "0", 0, XK_0, 1 },

	{ 0 },

	{ "!", 0, XK_1, 1, XK_Shift_L },
	{ "@", 0, XK_2, 1, XK_Shift_L },
	{ "#", 0, XK_3, 1, XK_Shift_L },
	{ "$", 0, XK_4, 1, XK_Shift_L },
	{ "%", 0, XK_5, 1, XK_Shift_L },
	{ "^", 0, XK_6, 1, XK_Shift_L },
	{ "&", 0, XK_7, 1, XK_Shift_L },
	{ "*", 0, XK_8, 1, XK_Shift_L },
	{ "(", 0, XK_9, 1, XK_Shift_L },
	{ ")", 0, XK_0, 1, XK_Shift_L },

	{ 0 },

	{ "Esc", 0, XK_Escape, 1 },
	{ "~", 0, XK_grave, 1, XK_Shift_L },
	{ "\\", 0, XK_backslash, 1 },
	{ "|", 0, XK_backslash, 1, XK_Shift_L },
	{ "←", 0, XK_Left, 1 },
	{ "↓", 0, XK_Down, 1 },
	{ "↑", 0, XK_Up, 1 },
	{ "→", 0, XK_Right, 1 },
	{ "Tab", 0, XK_Tab, 1 },
	{ "⌫", 0, XK_BackSpace, 1 },

	{ 0 },

	{ "abc", 0, XK_Mode_switch, 3 },
	{ "-", 0, XK_minus, 2 },
	{ "↺", 0, XK_Cancel, 2 },
	{ "Ctl", 0, XK_Control_L, 2 },
	{ "Alt", 0, XK_Alt_L, 2 },
	{ "", 0, XK_space, 4 },
	{ ".", 0, XK_period, 2 },
	{ "↲Enter", 0, XK_Return, 3 }
};

static Key keys_functions[KEYS] = {
	{ "Esc", 0, XK_Escape, 1 },
	{ "F1", 0, XK_F1, 1 },
	{ "F2", 0, XK_F2, 1 },
	{ "F3", 0, XK_F3, 1 },
	{ "F4", 0, XK_F4, 1 },
	{ "F5", 0, XK_F5, 1 },
	{ "F6", 0, XK_F6, 1 },
	{ "F7", 0, XK_F7, 1 },
	{ "F8", 0, XK_F8, 1 },
	{ "F9", 0, XK_F9, 1 },
	{ "F10", 0, XK_F10, 1 },

	{ 0 },

	{ "≅", 0, XK_KP_Insert, 1 },
	{ "▶", 0, XF86XK_AudioPlay, 1 },
	{ "●", 0, XF86XK_AudioRecord, 1 },
	{ "■", 0, XF86XK_AudioStop, 1 },
	{ "◂◂", 0, XF86XK_AudioPrev, 1 },
	{ "▸▸", 0, XF86XK_AudioNext, 1 },
	{ "♫M", 0, XF86XK_AudioMute, 1 },
	{ "♫-", 0, XF86XK_AudioLowerVolume, 1 },
	{ "♫+", 0, XF86XK_AudioRaiseVolume, 1 },
	{ "☀-", 0, XF86XK_MonBrightnessDown, 1 },
	{ "☀+", 0, XF86XK_MonBrightnessUp, 1 },

	{ 0 },

	{ "abc", 0, XK_Mode_switch, 1 },
	{ "Del", 0, XK_Delete, 1 },
	{ "⇤", 0, XK_Home, 1 },
	{ "←", 0, XK_Left, 1 },
	{ "→", 0, XK_Right, 1 },
	{ "⇥", 0, XK_End, 1 },
	{ "⇊", 0, XK_Next, 1 },
	{ "⇈", 0, XK_Prior, 1 },
	{ "Tab", 0, XK_Tab, 1 },
	{ "⌫", 0, XK_BackSpace, 2 },

	{ 0 },

	{ "↺", 0, XK_Cancel, 1},
	{ "Shift", 0, XK_Shift_L, 2 },
	{ "Ctrl", 0, XK_Control_L, 1 },
	{ "Alt", 0, XK_Alt_L, 1 },
	{ "", 0, XK_space, 2 },
	{ "↓", 0, XK_Down, 1 },
	{ "↑", 0, XK_Up, 1 },
	{ "↲ Enter", 0, XK_Return, 2 },
};

#define DIALER_KEYS 27

static Key keys_dialer[DIALER_KEYS] = {
	{ "Esc", 0, XK_Escape, 1 },
	{ "1!", 0, XK_1, 1 },
	{ "2@", 0, XK_2, 1 },
	{ "3#", 0, XK_3, 1 },
	{ "-_", 0, XK_minus, 1 },
	{ ",<", 0, XK_comma, 1 },

	{ 0 },

	{ "Shift", 0, XK_Shift_L, 1 },
	{ "4$", 0, XK_4, 1 },
	{ "5%", 0, XK_5, 1 },
	{ "6^", 0, XK_6, 1 },
	{ "=+", 0, XK_equal, 1 },
	{ "/?", 0, XK_slash, 1 },

	{ 0 },

	{ "abc", 0, XK_Mode_switch, 1 },
	{ "7&", 0, XK_7, 1 },
	{ "8*", 0, XK_8, 1 },
	{ "9(", 0, XK_9, 1 },
	{ "⌫", 0, XK_BackSpace, 2 },

	{ 0 },

	{ "↺", 0, XK_Cancel, 1},
	{ "", 0, XK_space, 1 },
	{ "0)", 0, XK_0, 1 },
	{ ".>", 0, XK_period, 1 },
	{ "↲ Enter", 0, XK_Return, 2},
};

#define OVERLAYS 193

static Key overlay[OVERLAYS] = {
	{ 0, 0, XK_a },
	{ "à", 0, XK_agrave },
	{ "á", 0, XK_aacute },
	{ "â", 0, XK_acircumflex },
	{ "ä", 0, XK_adiaeresis },
	{ "ą", 0, XK_aogonek },
	{ "ã", 0, XK_atilde },
	{ "ā", 0, XK_amacron },
	{ "ă", 0, XK_abreve },
	{ "å", 0, XK_aring },
	{ "æ", 0, XK_ae },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_e },
	{ "è", 0, XK_egrave },
	{ "é", 0, XK_eacute },
	{ "ê", 0, XK_ecircumflex },
	{ "ë", 0, XK_ediaeresis },
	{ "ę", 0, XK_eogonek },
	{ "ē", 0, XK_emacron },
	{ "ė", 0, XK_eabovedot },
	{ "ě", 0, XK_ecaron },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_y },
	{ "ỳ", 0, XK_ygrave },
	{ "ý", 0, XK_yacute },
	{ "ŷ", 0, XK_ycircumflex },
	{ "ÿ", 0, XK_ydiaeresis },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_u },
	{ "ù", 0, XK_ugrave },
	{ "ú", 0, XK_uacute },
	{ "û", 0, XK_ucircumflex },
	{ "ü", 0, XK_udiaeresis },
	{ "ų", 0, XK_uogonek },
	{ "ū", 0, XK_umacron },
	{ "ů", 0, XK_uring},
	{ "ŭ", 0, XK_ubreve},
	{ "ű", 0, XK_udoubleacute },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_i },
	{ "ì", 0, XK_igrave },
	{ "í", 0, XK_iacute },
	{ "î", 0, XK_icircumflex },
	{ "ï", 0, XK_idiaeresis },
	{ "į", 0, XK_iogonek },
	{ "ī", 0, XK_imacron },
	{ "ı", 0, XK_idotless },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_o },
	{ "ò", 0, XK_ograve },
	{ "ó", 0, XK_oacute },
	{ "ô", 0, XK_ocircumflex },
	{ "ö", 0, XK_odiaeresis },
	{ "ǫ", 0, XK_ogonek },
	{ "õ", 0, XK_otilde },
	{ "ō", 0, XK_omacron },
	{ "ø", 0, XK_oslash },
	{ "ő", 0, XK_odoubleacute },
	{ "œ", 0, XK_oe },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_d },
	{ "ď", 0, XK_dcaron },
	{ "ð", 0, XK_eth },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_c },
	{ "ç", 0, XK_ccedilla },
	{ "ĉ", 0, XK_ccircumflex },
	{ "č", 0, XK_ccaron },
	{ "ć", 0, XK_cacute },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_s },
	{ "ş", 0, XK_scedilla },
	{ "ŝ", 0, XK_scircumflex },
	{ "š", 0, XK_scaron },
	{ "ś", 0, XK_sacute },
	{ "ß", 0, XK_ssharp },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_z },
	{ "ž", 0, XK_zcaron },
	{ "ż", 0, XK_zabovedot },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_n },
	{ "ñ", 0, XK_ntilde },
	{ "ń", 0, XK_nacute },
	{ "ň", 0, XK_ncaron },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_t },
	{ "ț", 0, XK_tcedilla },
	{ "ť", 0, XK_tcaron },
	{ "þ", 0, XK_thorn },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_g },
	{ "ĝ", 0, XK_gcircumflex },
	{ "ğ", 0, XK_gbreve },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_h },
	{ "ĥ", 0, XK_hcircumflex },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_j },
	{ "ĵ", 0, XK_jcircumflex },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_l },
	{ "ł", 0, XK_lstroke },
	{ "ľ", 0, XK_lcaron },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_r },
	{ "ř", 0, XK_rcaron },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_Cyrillic_softsign },
	{ "ъ", 0, XK_Cyrillic_hardsign },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_Cyrillic_ie },
	{ "ё", 0, XK_Cyrillic_io },
	{ "э", 0, XK_Cyrillic_e },
	{ "Є", 0, XK_Ukrainian_ie },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_Cyrillic_i },
	{ "і", 0, XK_Ukrainian_i },
	{ "ї", 0, XK_Ukrainian_yi },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_Cyrillic_u },
	{ "ў", 0, XK_Byelorussian_shortu },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_Cyrillic_shorti },
	{ "ј", 0, XK_Cyrillic_je },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_Cyrillic_el },
	{ "љ", 0, XK_Cyrillic_lje },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_Cyrillic_en },
	{ "њ", 0, XK_Cyrillic_nje },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_Cyrillic_tse },
	{ "џ", 0, XK_Cyrillic_dzhe },
	{ 0, 0, XK_Cancel },
	{ 0, 0, XK_Cyrillic_che },
	{ "ћ", 0, XK_Serbian_tshe },
	{ "ђ", 0, XK_Serbian_dje },
	{ 0, 0, XK_Cancel },
	{ "🙂", 0, 0x101f642 },
	{ "😀", 0, 0x101f600 },
	{ "😁", 0, 0x101f601 },
	{ "😂", 0, 0x101f602 },
	{ "😃", 0, 0x101f603 },
	{ "😄", 0, 0x101f604 },
	{ "😅", 0, 0x101f605 },
	{ "😆", 0, 0x101f606 },
	{ "😇", 0, 0x101f607 },
	{ "😈", 0, 0x101f608 },
	{ "😉", 0, 0x101f609 },
	{ "😊", 0, 0x101f60a },
	{ "😋", 0, 0x101f60b },
	{ "😌", 0, 0x101f60c },
	{ "😍", 0, 0x101f60d },
	{ "😎", 0, 0x101f60e },
	{ "😏", 0, 0x101f60f },
	{ "😐", 0, 0x101f610 },
	{ "😒", 0, 0x101f612 },
	{ "😓", 0, 0x101f613 },
	{ "😛", 0, 0x101f61b },
	{ "😮", 0, 0x101f62e },
	{ "😟", 0, 0x101f61f },
	{ "😟", 0, 0x101f620 },
	{ "😢", 0, 0x101f622 },
	{ "😭", 0, 0x101f62d },
	{ "😳", 0, 0x101f633 },
	{ "😴", 0, 0x101f634 },
	{ 0, 0, XK_Cancel },
	{ ".", 0, XK_period, },
	{ ":", 0, XK_colon, 26, XK_Shift_L },
	{ ";", 0, XK_colon, 0 },
	{ "!", 0, XK_1, 0, XK_Shift_L },
	{ "?", 0, XK_slash, 0, XK_Shift_L },
	{ ",", 0, XK_comma, 0 },
	{ 0, 0, XK_Cancel },
	{ "-", 0, XK_minus },
	{ "_", 0, XK_minus, 24, XK_Shift_L },
	{ "+", 0, XK_plus, 0, XK_Shift_L },
	{ "/", 0, XK_slash, 0 },
	{ "*", 0, XK_8, 0, XK_Shift_L },
	{ "=", 0, XK_plus },
	{ 0, 0, XK_Cancel },
	{ "'", 0, XK_apostrophe },
	{ "{", 0, XK_bracketleft, 7, XK_Shift_L },
	{ "}", 0, XK_bracketright, 0, XK_Shift_L },
	{ "[", 0, XK_bracketleft, 0 },
	{ "]", 0, XK_bracketright, 0 },
	{ "<", 0, XK_comma, 6, XK_Shift_L },
	{ ">", 0, XK_period, 0, XK_Shift_L },
	{ "`", 0, XK_grave, 0 },
	{ "\"", 0, XK_apostrophe, 0, XK_Shift_L },
	{ "'", 0, XK_apostrophe },
	{ 0, 0, XK_Cancel },
};

#define LAYERS 4

static char* layer_names[LAYERS] = {
	"lazy en",
	"symbols",
	"functions",
	"dialer",
};

static Key* available_layers[LAYERS] = {
	keys_lazy_en,
	keys_symbols,
	keys_functions,
	keys_dialer,
};

Buttonmod buttonmods[] = {
	{ XK_Shift_L, Button2 },
	{ XK_Alt_L, Button3 },
};
