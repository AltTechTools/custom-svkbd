#define KEYS 64
static Key keys_ch[KEYS] = {
	{ "§","°¬", XK_dead_circumflex, 0.75},
	{ "1", "!|", XK_1, 1 },
	{ "2","\"@", XK_2, 1 },
	{ "3","*#", XK_3, 1 },
	{ "4","ç¼", XK_4, 1 },
	{ "5","%½", XK_5, 1 },
	{ "6","&¬", XK_6, 1 },
	{ "7","/|", XK_7, 1 },
	{ "8","(¢", XK_8, 1 },
	{ "9",")]", XK_9, 1 },
	{ "0","=}", XK_0, 1 },
	{ "'","?´", XK_ssharp, 1 },
	{ "^","`~", XK_dead_acute, 1 },
//	{ "Del", 0, XK_Delete,  },
	{ "⌫", 0, XK_BackSpace, 1.5 },
//	{ "Del", 0, XK_Delete, 0.75},
	{ 0 }, /* New row */
	{ "↹", 0, XK_Tab, 0.75 },
	{ "q","Q@", XK_q, 1 },
	{ "w","Wł", XK_w, 1 },
	{ "e","E€", XK_e, 1 },
	{ "r","R¶", XK_r, 1 },
	{ "t","Tŧ", XK_t, 1 },
	{ "z","Z←", XK_z, 1 },
	{ "u","U↓", XK_u, 1 },
	{ "i","I→", XK_i, 1 },
	{ "o","Oœ", XK_o, 1 },
	{ "p","Pþ", XK_p, 1 },
	{ "ü","Ü[", 0xfc, 0.75 },
	{ "¨","!]", 0xfe57, 0.75 },
//	{ "Enter", 0, XK_Return, 3 },
	{ 0 }, /* New row */
	{ "️⮹", 0, XK_Caps_Lock, 1.75 },
	{ "a","Aæ", XK_a, 1 },
	{ "s","Sß", XK_s, 1 },
	{ "d","Dð", XK_d, 1 },
	{ "f","Fđ", XK_f, 1 },
	{ "g","Gŋ", XK_g, 1 },
	{ "h","Hħ", XK_h, 1 },
	{ "j","J̣̣̉̉", XK_j, 1 },
	{ "k","Kĸ", XK_k, 1 },
	{ "l","Lł", XK_l, 1 },
	{ "ö","Ö", 0xf6, 1 },
	{ "ä","Ä{", 0xe4, 0.75 },
	{ "$","£}", 0x24, 0.75 },
	{ 0 }, /* New row */
	{ "⬆", 0, XK_Shift_L, 1.75 },
	{ "<",">\\", XK_less, 1 },
	{ "y","Y«", XK_y, 1 },
	{ "x","X»", XK_x, 1 },
	{ "c","C¢", XK_c, 1 },
	{ "v","V“", XK_v, 1 },
	{ "b","B”", XK_b, 1 },
	{ "n","Nn", XK_n, 1 },
	{ "m","Mµ", XK_m, 1 },
	{ ",",";", XK_comma, 1 },
	{ ".",":·", XK_period, 1 },
	{ "-","_", XK_minus, 0.75 },
	{ "Del", 0, XK_Delete, 0.75 },
//	{ "↵", 0, XK_Return, 0.75 },
	{ 0 }, /* New row */
	{ "Ctrl", 0, XK_Control_L, 2 },
	{ "Win",  0, XK_Super_L, 2 },
	{ "Alt", 0, XK_Alt_L, 2 },
	{ "", 0, XK_space, 5 },
	{ "Alt Gr", 0, XK_ISO_Level3_Shift, 2 }, //0xfe03
	{ "Menu", 0, XK_Menu, 2 },
	{ "↵", 0, XK_Return, 2 }
//	{ "Del", 0, XK_Delete, 2 },
//	{ "Ctrl", 0, XK_Control_R, 2 },
};

Buttonmod buttonmods[] = {
	{ XK_Shift_L, Button2 },
	{ XK_Alt_L, Button3 },
};

#define OVERLAYS 1
static Key overlay[OVERLAYS] = {
	{ 0, 0, XK_Cancel },
};

#define LAYERS 1
static char* layer_names[LAYERS] = {
	"ch",
};

static Key* available_layers[LAYERS] = {
	keys_ch,
};

