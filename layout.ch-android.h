#define KEYS 52

static Key keys_ch_android[KEYS] = {
        { "1", 0, 0x1000031, 1 }, 
        { "2", 0, 0x1000032, 1 }, 
        { "3", 0, 0x1000033, 1 }, 
        { "4", 0, 0x1000034, 1 }, 
        { "5", 0, 0x1000035, 1 }, 
        { "6", 0, 0x1000036, 1 }, 
        { "7", 0, 0x1000037, 1 }, 
        { "8", 0, 0x1000038, 1 }, 
        { "9", 0, 0x1000039, 1 }, 
        { "0", 0, 0x1000030, 1 }, 

        { 0 }, /* New row */

        { "q", 0, XK_q, 1 }, 
        { "w", 0, XK_w, 1 }, 
        { "e", 0, XK_e, 1 }, 
        { "r", 0, XK_r, 1 }, 
        { "t", 0, XK_t, 1 }, 
        { "z", 0, XK_z, 1 }, 
        { "u", 0, XK_u, 1 }, 
        { "i", 0, XK_i, 1 }, 
        { "o", 0, XK_o, 1 }, 
        { "p", 0, XK_p, 1 }, 
        { "ü", 0, 0x10000fc, 1 }, 

        { 0 }, /* New row */

        { "a", 0, XK_a, 1 }, 
        { "s", 0, XK_s, 1 }, 
        { "d", 0, XK_d, 1 }, 
        { "f", 0, XK_f, 1 }, 
        { "g", 0, XK_g, 1 }, 
        { "h", 0, XK_h, 1 }, 
        { "j", 0, XK_j, 1 }, 
        { "k", 0, XK_k, 1 }, 
        { "l", 0, XK_l, 1 }, 
        { "ö", 0, 0x10000f6, 1 }, 
        { "ä", 0, 0x10000e4, 1 }, 

        { 0 }, /* New row */

        { "⬆", 0, XK_Shift_L, 2 }, 
        { "y", 0, XK_y, 1 }, 
        { "x", 0, XK_x, 1 }, 
        { "c", 0, XK_c, 1 }, 
        { "v", 0, XK_v, 1 }, 
        { "b", 0, XK_b, 1 }, 
        { "n", 0, XK_n, 1 }, 
        { "m", 0, XK_m, 1 }, 
        { "⌫", 0, XK_BackSpace, 2 }, 

        { 0 }, /* New row */

        { "!#1", 0, XK_Cancel, 2 }, 
        { ",", 0, 0x100002c, 1 }, 
        { "", 0, 0x1000020, 5.5 }, 
        { ".", 0, 0x100002e, 1 }, 
        { "↲", 0, XK_Return, 2 }, 

        { 0 }, /* New row */


        { 0 }, /* ending row */

};

static Key keys_ch_androidShift[KEYS] = {
        { "1", 0, 0x1000031, 1 }, 
        { "2", 0, 0x1000032, 1 }, 
        { "3", 0, 0x1000033, 1 }, 
        { "4", 0, 0x1000034, 1 }, 
        { "5", 0, 0x1000035, 1 }, 
        { "6", 0, 0x1000036, 1 }, 
        { "7", 0, 0x1000037, 1 }, 
        { "8", 0, 0x1000038, 1 }, 
        { "9", 0, 0x1000039, 1 }, 
        { "0", 0, 0x1000030, 1 }, 

        { 0 }, /* New row */

        { "Q", 0, 0x1000051, 1 }, 
        { "W", 0, 0x1000057, 1 }, 
        { "E", 0, 0x1000045, 1 }, 
        { "R", 0, 0x1000052, 1 }, 
        { "T", 0, 0x1000054, 1 }, 
        { "Z", 0, 0x100005a, 1 }, 
        { "U", 0, 0x1000055, 1 }, 
        { "I", 0, 0x1000049, 1 }, 
        { "O", 0, 0x100004f, 1 }, 
        { "P", 0, 0x1000050, 1 }, 
        { "Ü", 0, 0x10000dc, 1 }, 

        { 0 }, /* New row */

        { "A", 0, 0x1000041, 1 }, 
        { "S", 0, 0x1000053, 1 }, 
        { "D", 0, 0x1000044, 1 }, 
        { "F", 0, 0x1000046, 1 }, 
        { "G", 0, 0x1000047, 1 }, 
        { "H", 0, 0x1000048, 1 }, 
        { "J", 0, 0x100004a, 1 }, 
        { "K", 0, 0x100004b, 1 }, 
        { "L", 0, 0x100004c, 1 }, 
        { "Ö", 0, 0x10000d6, 1 }, 
        { "Ä", 0, 0x10000c4, 1 }, 

        { 0 }, /* New row */

        { "⬆", 0, XK_Shift_L, 2 }, 
        { "Y", 0, 0x1000059, 1 }, 
        { "X", 0, 0x1000058, 1 }, 
        { "C", 0, 0x1000043, 1 }, 
        { "V", 0, 0x1000056, 1 }, 
        { "B", 0, 0x1000042, 1 }, 
        { "N", 0, 0x100004e, 1 }, 
        { "M", 0, 0x100004d, 1 }, 
        { "⌫", 0, XK_BackSpace, 2 }, 

        { 0 }, /* New row */

        { "!#1", 0, XK_Cancel, 2 }, 
        { ",", 0, 0x100002c, 1 }, 
        { "", 0, 0x1000020, 5.5 }, 
        { ".", 0, 0x100002e, 1 }, 
        { "↲", 0, XK_Return, 2 }, 

        { 0 }, /* New row */


        { 0 }, /* ending row */

};

static Key keys_ch_andrsymb1[KEYS] = {
        { "1", 0, 0x1000031, 1 }, 
        { "2", 0, 0x1000032, 1 }, 
        { "3", 0, 0x1000033, 1 }, 
        { "4", 0, 0x1000034, 1 }, 
        { "5", 0, 0x1000035, 1 }, 
        { "6", 0, 0x1000036, 1 }, 
        { "7", 0, 0x1000037, 1 }, 
        { "8", 0, 0x1000038, 1 }, 
        { "9", 0, 0x1000039, 1 }, 
        { "0", 0, 0x1000030, 1 }, 

        { 0 }, /* New row */

        { "+", 0, 0x100002b, 1 }, 
        { "×", 0, 0x10000d7, 1 }, 
        { "÷", 0, 0x10000f7, 1 }, 
        { "=", 0, 0x100003d, 1 }, 
        { "/", 0, 0x100002f, 1 }, 
        { "_", 0, 0x100005f, 1 }, 
        { "€", 0, 0x10020ac, 1 }, 
        { "£", 0, 0x10000a3, 1 }, 
        { "¥", 0, 0x10000a5, 1 }, 
        { "₩", 0, 0x10020a9, 1 }, 

        { 0 }, /* New row */

        { "!", 0, 0x1000021, 1 }, 
        { "@", 0, 0x1000040, 1 }, 
        { "#", 0, 0x1000023, 1 }, 
        { "$", 0, 0x1000024, 1 }, 
        { "%", 0, 0x1000025, 1 }, 
        { "^", 0, 0x100005e, 1 }, 
        { "&", 0, 0x1000026, 1 }, 
        { "*", 0, 0x100002a, 1 }, 
        { "(", 0, 0x1000028, 1 }, 
        { ")", 0, 0x1000029, 1 }, 

        { 0 }, /* New row */

        { "1/2", 0, XK_Cancel, 2 }, 
        { "-", 0, 0x100002d, 1 }, 
        { "'", 0, 0x1000027, 1 }, 
        { "\"", 0, 0x1000022, 1 }, 
        { ":", 0, 0x100003a, 1 }, 
        { ", ", 0, 0x100003b }, 
        { ",", 0, 0x100002c, 1 }, 
        { "?", 0, 0x100003f, 1 }, 
        { "⌫", 0, XK_BackSpace, 2 }, 

        { 0 }, /* New row */

        { "ABC", 0, XK_Mode_switch, 2 }, 
        { ",", 0, 0x100002c, 1 }, 
        { "/", 0, 0x100002f, 1 }, 
        { "", 0, 0x1000020, 5.5 }, 
        { ".", 0, 0x100002e, 2 }, 
        { "↲", 0, XK_Return, 2 }, 

        { 0 }, /* New row */


        { 0 }, /* ending row */

};

static Key keys_ch_andrsymb2[KEYS] = {
        { "1", 0, 0x1000031, 1 }, 
        { "2", 0, 0x1000032, 1 }, 
        { "3", 0, 0x1000033, 1 }, 
        { "4", 0, 0x1000034, 1 }, 
        { "5", 0, 0x1000035, 1 }, 
        { "6", 0, 0x1000036, 1 }, 
        { "7", 0, 0x1000037, 1 }, 
        { "8", 0, 0x1000038, 1 }, 
        { "9", 0, 0x1000039, 1 }, 
        { "0", 0, 0x1000030, 1 }, 

        { 0 }, /* New row */

        { "`", 0, 0x100fe50, 1 }, 
        { "~", 0, 0x100fe53, 1 }, 
        { "\\", 0, 0x100005c, 1 }, 
        { "|", 0, 0x100007c, 1 }, 
        { "<", 0, 0x100003c, 1 }, 
        { ">", 0, 0x100003e, 1 }, 
        { "{", 0, 0x100007b, 1 }, 
        { "}", 0, 0x100007d, 1 }, 
        { "[", 0, 0x100005b, 1 }, 
        { "]", 0, 0x100005d, 1 }, 

        { 0 }, /* New row */

        { "°", 0, 0x10000b0, 1 }, 
        { "•", 0, 0x1002022, 1 }, 
        { "○", 0, 0x10025cb, 1 }, 
        { "●", 0, 0x10025cf, 1 }, 
        { "□", 0, 0x10025a1, 1 }, 
        { "■", 0, 0x10025a0, 1 }, 
        { "♤", 0, 0x1002664, 1 }, 
        { "♡", 0, 0x1002661, 1 }, 
        { "♢", 0, 0x1002662, 1 }, 
        { "♧", 0, 0x1002667, 1 }, 

        { 0 }, /* New row */

        { "2/2", 0, XK_Cancel, 2 }, 
        { "☆", 0, 0x1002606, 1 }, 
        { "▪", 0, 0x10025aa, 1 }, 
        { "¤", 0, 0x10000a4, 1 }, 
        { "《", 0, 0x100300a, 1 }, 
        { "》", 0, 0x100300b, 1 }, 
        { "¡", 0, 0x10000a1, 1 }, 
        { "¿", 0, 0x10000bf, 1 }, 
        { "⌫", 0, XK_BackSpace, 2 }, 

        { 0 }, /* New row */

        { "ABC", 0, XK_Mode_switch, 2 }, 
        { ",", 0, 0x100002c, 1 }, 
        { "/", 0, 0x100002f, 1 }, 
        { "", 0, 0x1000020, 5.5 }, 
        { ".", 0, 0x100002e, 2 }, 
        { "↲", 0, XK_Return, 2 }, 

        { 0 }, /* New row */


        { 0 }, /* ending row */

};

#define OVERLAYS 194
static Key overlay[OVERLAYS] = {
        { 0, 0, XK_0 }, /* New Definition */
        { "ⁿ", 0, 0x207f }, 
        { "⁰", 0, 0x2070 }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_1 }, /* New Definition */
        { "⅕", 0, 0x2155 }, 
        { "⅙", 0, 0x2159 }, 
        { "⅛", 0, 0x215b }, 
        { "¹", 0, 0xb9 }, 
        { "½", 0, 0xbd }, 
        { "⅓", 0, 0x2153 }, 
        { "¼", 0, 0xbc }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_2 }, /* New Definition */
        { "²", 0, 0xb2 }, 
        { "⅔", 0, 0x2154 }, 
        { "⅖", 0, 0x2156 }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_3 }, /* New Definition */
        { "³", 0, 0xB3 }, 
        { "¾", 0, 0xbe }, 
        { "⅗", 0, 0x2157 }, 
        { "⅜", 0, 0x215c }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_4 }, /* New Definition */
        { "⁴", 0, 0x2074 }, 
        { "⅘", 0, 0x2158 }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_5 }, /* New Definition */
        { "⁵", 0, 0x2075 }, 
        { "⅚", 0, 0x215a }, 
        { "⅝", 0, 0x215d }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_6 }, /* New Definition */
        { "⁶", 0, 0x2076 }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_7 }, /* New Definition */
        { "⁷", 0, 0x2077 }, 
        { "⅞", 0, 0x215e }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_8 }, /* New Definition */
        { "⁸", 0, 0x2078 }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_9 }, /* New Definition */
        { "⁹", 0, 0x2079 }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_a }, /* New Definition */
        { "å", 0, XK_aring }, 
        { "æ", 0, XK_ae }, 
        { "ā", 0, XK_amacron }, 
        { "ă", 0, XK_abreve }, 
        { "ą", 0, XK_aogonek }, 
        { "ä", 0, XK_adiaeresis }, 
        { "à", 0, XK_agrave }, 
        { "á", 0, XK_aacute }, 
        { "â", 0, XK_acircumflex }, 
        { "ã", 0, XK_atilde }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_c }, /* New Definition */
        { "ç", 0, XK_ccedilla }, 
        { "ć", 0, XK_cacute }, 
        { "ĉ", 0, XK_ccircumflex }, 
        { "č", 0, XK_ccaron }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_comma }, /* New Definition */
        { "@", 0, 0x40 }, 
        { "-", 0, 0x2d }, 
        { "/", 0, 0x2f }, 
        { ":", 0, 0x3a }, 
        { "#", 0, 0x23 }, 
        { ",", 0, XK_comma }, 
        { "?", 0, 0x3f }, 
        { "!", 0, 0x21 }, 
        { "'", 0, 0x27 }, 
        { "$", 0, 0x24 }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_d }, /* New Definition */
        { "ď", 0, XK_dcaron }, 
        { "đ", 0, 0x0111 }, 
        { "ð", 0, XK_eth }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_e }, /* New Definition */
        { "ė", 0, XK_eabovedot }, 
        { "ę", 0, XK_eogonek }, 
        { "ě", 0, XK_ecaron }, 
        { "ĕ", 0, 0x0115 }, 
        { "ə", 0, 0x0259 }, 
        { "è", 0, XK_egrave }, 
        { "é", 0, XK_eacute }, 
        { "ê", 0, XK_ecircumflex }, 
        { "ë", 0, XK_ediaeresis }, 
        { "ē", 0, XK_emacron }, 
        { "", 0,  }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_g }, /* New Definition */
        { "ģ", 0, 0x0123 }, 
        { "ĝ", 0, XK_gcircumflex }, 
        { "ğ", 0, XK_gbreve }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_i }, /* New Definition */
        { "ı", 0, XK_idotless }, 
        { "į", 0, XK_iogonek }, 
        { "ī", 0, XK_imacron }, 
        { "ï", 0, XK_idiaeresis }, 
        { "î", 0, XK_icircumflex }, 
        { "í", 0, XK_iacute }, 
        { "ì", 0, XK_igrave }, 
        { "", 0,  }, 
        { "", 0,  }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_k }, /* New Definition */
        { "ķ", 0, 0x0137 }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_l }, /* New Definition */
        { "ł", 0, XK_lstroke }, 
        { "ľ", 0, XK_lcaron }, 
        { "ļ", 0, 0x013C }, 
        { "ĺ", 0, 0x013a }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_n }, /* New Definition */
        { "ň", 0, XK_ncaron }, 
        { "ņ", 0, 0x0146 }, 
        { "ñ", 0, XK_ntilde }, 
        { "ń", 0, XK_nacute }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_o }, /* New Definition */
        { "œ", 0, XK_oe }, 
        { "ő", 0, XK_odoubleacute }, 
        { "ø", 0, XK_oslash }, 
        { "ö", 0, XK_odiaeresis }, 
        { "õ", 0, XK_otilde }, 
        { "ô", 0, XK_ocircumflex }, 
        { "ó", 0, XK_oacute }, 
        { "ò", 0, XK_ograve }, 
        { "ǫ", 0, XK_ogonek }, 
        { "ō", 0, XK_omacron }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_period }, /* New Definition */
        { "^", 0, 0x5e }, 
        { "%", 0, 0x25 }, 
        { "$", 0, 0x24 }, 
        { "#", 0, 0x23 }, 
        { "@", 0, 0x40 }, 
        { "'", 0, 0x27 }, 
        { "!", 0, 0x21 }, 
        { "?", 0, 0x3f }, 
        { ",", 0, XK_comma }, 
        { "", 0,  }, 
        { "", 0,  }, 
        { "", 0,  }, 
        { "", 0,  }, 
        { "", 0,  }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_r }, /* New Definition */
        { "ř", 0, XK_rcaron }, 
        { "ŕ", 0, 0x0155 }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_s }, /* New Definition */
        { "ß", 0, XK_ssharp }, 
        { "§", 0, 0xa7 }, 
        { "š", 0, XK_scaron }, 
        { "ś", 0, XK_sacute }, 
        { "ş", 0, XK_scedilla }, 
        { "ŝ", 0, XK_scircumflex }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_t }, /* New Definition */
        { "þ", 0, XK_thorn }, 
        { "ț", 0, 0x021b }, 
        { "ţ", 0, XK_tcedilla }, 
        { "ť", 0, XK_tcaron }, 
        { "", 0,  }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_u }, /* New Definition */
        { "ų", 0, XK_uogonek }, 
        { "ű", 0, XK_udoubleacute }, 
        { "ů", 0, XK_uring }, 
        { "ū", 0, XK_umacron }, 
        { "û", 0, XK_ucircumflex }, 
        { "ú", 0, XK_uacute }, 
        { "ù", 0, XK_ugrave }, 
        { "ü", 0, XK_udiaeresis }, 
        { "ŭ", 0, XK_ubreve }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_y }, /* New Definition */
        { "ỳ", 0, XK_ygrave }, 
        { "ý", 0, XK_yacute }, 
        { "ŷ", 0, XK_ycircumflex }, 
        { "ÿ", 0, XK_ydiaeresis }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
        { 0, 0, XK_z }, /* New Definition */
        { "ź", 0, XK_zacute }, 
        { "ž", 0, XK_zcaron }, 
        { "ż", 0, XK_zabovedot }, 
        { 0, 0, XK_Cancel },  /* XK_Cancel signifies  overlay boundary */
};

#define LAYERS 4
static char* layer_names[LAYERS] = {
       "ch-android",
       "shift",
       "andr-symbols1",
       "andr-symbols2",
};

static Key* available_layers[LAYERS] = {
        keys_ch_android,
        keys_ch_androidShift,
        keys_ch_andrsymb1,
        keys_ch_andrsymb2,
};

Buttonmod buttonmods[] = {
        { XK_Shift_L, Button2 },
        { XK_Alt_L, Button3 },
};
