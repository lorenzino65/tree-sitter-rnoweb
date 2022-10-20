#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 1
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 5
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_AT = 1,
  anon_sym_LBRACE = 2,
  aux_sym_rinline_token1 = 3,
  anon_sym_RBRACE = 4,
  anon_sym_COMMA = 5,
  anon_sym_engine = 6,
  anon_sym_EQ = 7,
  aux_sym_renv_engine_val_token1 = 8,
  aux_sym_renv_key_pair_token1 = 9,
  sym_renv_engine_key = 10,
  sym_renv_key = 11,
  sym_renv_val = 12,
  sym__latex_word = 13,
  sym_command_name = 14,
  sym__renv_sig_beg = 15,
  sym__renv_sig_end = 16,
  sym_renv_content = 17,
  sym_source_file = 18,
  sym_rchunk = 19,
  sym_rinline = 20,
  sym_renv_sig_options = 21,
  sym__renv_options = 22,
  sym__renv_engine = 23,
  sym_renv_engine_val = 24,
  sym_renv_key_pair = 25,
  sym_latex = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym__renv_options_repeat1 = 28,
  aux_sym_latex_repeat1 = 29,
  alias_sym_renv_label = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACE] = "{",
  [aux_sym_rinline_token1] = "renv_content",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_engine] = "engine",
  [anon_sym_EQ] = "=",
  [aux_sym_renv_engine_val_token1] = "renv_engine_val_token1",
  [aux_sym_renv_key_pair_token1] = "renv_key_pair_token1",
  [sym_renv_engine_key] = "renv_engine_key",
  [sym_renv_key] = "renv_key",
  [sym_renv_val] = "renv_val",
  [sym__latex_word] = "_latex_word",
  [sym_command_name] = "command_name",
  [sym__renv_sig_beg] = "_renv_sig_beg",
  [sym__renv_sig_end] = "_renv_sig_end",
  [sym_renv_content] = "renv_content",
  [sym_source_file] = "source_file",
  [sym_rchunk] = "rchunk",
  [sym_rinline] = "rinline",
  [sym_renv_sig_options] = "renv_sig_options",
  [sym__renv_options] = "_renv_options",
  [sym__renv_engine] = "_renv_engine",
  [sym_renv_engine_val] = "renv_engine",
  [sym_renv_key_pair] = "renv_key_pair",
  [sym_latex] = "latex",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__renv_options_repeat1] = "_renv_options_repeat1",
  [aux_sym_latex_repeat1] = "latex_repeat1",
  [alias_sym_renv_label] = "renv_label",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_rinline_token1] = sym_renv_content,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_engine] = anon_sym_engine,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_renv_engine_val_token1] = aux_sym_renv_engine_val_token1,
  [aux_sym_renv_key_pair_token1] = aux_sym_renv_key_pair_token1,
  [sym_renv_engine_key] = sym_renv_engine_key,
  [sym_renv_key] = sym_renv_key,
  [sym_renv_val] = sym_renv_val,
  [sym__latex_word] = sym__latex_word,
  [sym_command_name] = sym_command_name,
  [sym__renv_sig_beg] = sym__renv_sig_beg,
  [sym__renv_sig_end] = sym__renv_sig_end,
  [sym_renv_content] = sym_renv_content,
  [sym_source_file] = sym_source_file,
  [sym_rchunk] = sym_rchunk,
  [sym_rinline] = sym_rinline,
  [sym_renv_sig_options] = sym_renv_sig_options,
  [sym__renv_options] = sym__renv_options,
  [sym__renv_engine] = sym__renv_engine,
  [sym_renv_engine_val] = sym_renv_engine_val,
  [sym_renv_key_pair] = sym_renv_key_pair,
  [sym_latex] = sym_latex,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__renv_options_repeat1] = aux_sym__renv_options_repeat1,
  [aux_sym_latex_repeat1] = aux_sym_latex_repeat1,
  [alias_sym_renv_label] = alias_sym_renv_label,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_rinline_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_engine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_renv_engine_val_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_renv_key_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_renv_engine_key] = {
    .visible = true,
    .named = true,
  },
  [sym_renv_key] = {
    .visible = true,
    .named = true,
  },
  [sym_renv_val] = {
    .visible = true,
    .named = true,
  },
  [sym__latex_word] = {
    .visible = false,
    .named = true,
  },
  [sym_command_name] = {
    .visible = true,
    .named = true,
  },
  [sym__renv_sig_beg] = {
    .visible = false,
    .named = true,
  },
  [sym__renv_sig_end] = {
    .visible = false,
    .named = true,
  },
  [sym_renv_content] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_rchunk] = {
    .visible = true,
    .named = true,
  },
  [sym_rinline] = {
    .visible = true,
    .named = true,
  },
  [sym_renv_sig_options] = {
    .visible = true,
    .named = true,
  },
  [sym__renv_options] = {
    .visible = false,
    .named = true,
  },
  [sym__renv_engine] = {
    .visible = false,
    .named = true,
  },
  [sym_renv_engine_val] = {
    .visible = true,
    .named = true,
  },
  [sym_renv_key_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_latex] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__renv_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_latex_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_renv_label] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_Sexpr = 1,
  field_engine = 2,
  field_key = 3,
  field_label = 4,
  field_options = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_Sexpr] = "Sexpr",
  [field_engine] = "engine",
  [field_key] = "key",
  [field_label] = "label",
  [field_options] = "options",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_label, 0},
  [1] =
    {field_options, 0},
  [2] =
    {field_Sexpr, 0},
  [3] =
    {field_label, 0},
    {field_options, 2},
  [5] =
    {field_key, 0},
    {field_value, 2},
  [7] =
    {field_engine, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_renv_label,
  },
  [4] = {
    [0] = alias_sym_renv_label,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == '}') ADVANCE(10);
      if (lookahead == '"' ||
          lookahead == '\'') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == ',') ADVANCE(11);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '}') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 4:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '>') ADVANCE(34);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_rinline_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_rinline_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_engine);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_engine);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_renv_engine_val_token1);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_renv_key_pair_token1);
      if (lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_renv_engine_key);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_renv_engine_key);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'g') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_renv_engine_key);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_renv_engine_key);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_renv_engine_key);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '_') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_renv_engine_key);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_renv_engine_key);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_renv_engine_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_renv_engine_key);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_renv_key);
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_renv_key);
      if (lookahead == 'g') ADVANCE(28);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_renv_key);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_renv_key);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_renv_key);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_renv_key);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_renv_key);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_renv_val);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '>') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_renv_val);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '>') ADVANCE(34);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 1, .external_lex_state = 3},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 0, .external_lex_state = 3},
  [15] = {.lex_state = 0, .external_lex_state = 3},
  [16] = {.lex_state = 1, .external_lex_state = 3},
  [17] = {.lex_state = 0, .external_lex_state = 3},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0, .external_lex_state = 3},
  [20] = {.lex_state = 0, .external_lex_state = 3},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 3},
  [23] = {.lex_state = 0, .external_lex_state = 4},
  [24] = {.lex_state = 0, .external_lex_state = 3},
  [25] = {.lex_state = 0, .external_lex_state = 3},
  [26] = {.lex_state = 0, .external_lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 0, .external_lex_state = 3},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0, .external_lex_state = 3},
  [32] = {.lex_state = 0, .external_lex_state = 3},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
};

enum {
  ts_external_token__latex_word = 0,
  ts_external_token_command_name = 1,
  ts_external_token__renv_sig_beg = 2,
  ts_external_token__renv_sig_end = 3,
  ts_external_token_renv_content = 4,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__latex_word] = sym__latex_word,
  [ts_external_token_command_name] = sym_command_name,
  [ts_external_token__renv_sig_beg] = sym__renv_sig_beg,
  [ts_external_token__renv_sig_end] = sym__renv_sig_end,
  [ts_external_token_renv_content] = sym_renv_content,
};

static const bool ts_external_scanner_states[5][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__latex_word] = true,
    [ts_external_token_command_name] = true,
    [ts_external_token__renv_sig_beg] = true,
    [ts_external_token__renv_sig_end] = true,
    [ts_external_token_renv_content] = true,
  },
  [2] = {
    [ts_external_token__latex_word] = true,
    [ts_external_token_command_name] = true,
    [ts_external_token__renv_sig_beg] = true,
  },
  [3] = {
    [ts_external_token__renv_sig_end] = true,
  },
  [4] = {
    [ts_external_token_renv_content] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_engine] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_renv_engine_val_token1] = ACTIONS(1),
    [sym_renv_engine_key] = ACTIONS(1),
    [sym_renv_key] = ACTIONS(1),
    [sym__latex_word] = ACTIONS(1),
    [sym_command_name] = ACTIONS(1),
    [sym__renv_sig_beg] = ACTIONS(1),
    [sym__renv_sig_end] = ACTIONS(1),
    [sym_renv_content] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(38),
    [sym_rchunk] = STATE(2),
    [sym_rinline] = STATE(2),
    [sym_latex] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_latex_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__latex_word] = ACTIONS(5),
    [sym_command_name] = ACTIONS(7),
    [sym__renv_sig_beg] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      sym__latex_word,
    ACTIONS(7), 1,
      sym_command_name,
    ACTIONS(9), 1,
      sym__renv_sig_beg,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_latex_repeat1,
    STATE(3), 4,
      sym_rchunk,
      sym_rinline,
      sym_latex,
      aux_sym_source_file_repeat1,
  [22] = 6,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym__latex_word,
    ACTIONS(18), 1,
      sym_command_name,
    ACTIONS(21), 1,
      sym__renv_sig_beg,
    STATE(5), 1,
      aux_sym_latex_repeat1,
    STATE(3), 4,
      sym_rchunk,
      sym_rinline,
      sym_latex,
      aux_sym_source_file_repeat1,
  [44] = 6,
    ACTIONS(24), 1,
      anon_sym_engine,
    ACTIONS(26), 1,
      sym_renv_key,
    ACTIONS(28), 1,
      sym__renv_sig_end,
    STATE(29), 1,
      sym_renv_sig_options,
    STATE(32), 1,
      sym__renv_options,
    STATE(17), 2,
      sym__renv_engine,
      sym_renv_key_pair,
  [64] = 3,
    ACTIONS(32), 1,
      sym__latex_word,
    STATE(7), 1,
      aux_sym_latex_repeat1,
    ACTIONS(30), 3,
      sym_command_name,
      sym__renv_sig_beg,
      ts_builtin_sym_end,
  [76] = 4,
    ACTIONS(24), 1,
      anon_sym_engine,
    ACTIONS(34), 1,
      sym_renv_key,
    STATE(31), 1,
      sym__renv_options,
    STATE(17), 2,
      sym__renv_engine,
      sym_renv_key_pair,
  [90] = 3,
    ACTIONS(38), 1,
      sym__latex_word,
    STATE(7), 1,
      aux_sym_latex_repeat1,
    ACTIONS(36), 3,
      sym_command_name,
      sym__renv_sig_beg,
      ts_builtin_sym_end,
  [102] = 1,
    ACTIONS(41), 4,
      sym__latex_word,
      sym_command_name,
      sym__renv_sig_beg,
      ts_builtin_sym_end,
  [109] = 1,
    ACTIONS(43), 4,
      sym__latex_word,
      sym_command_name,
      sym__renv_sig_beg,
      ts_builtin_sym_end,
  [116] = 1,
    ACTIONS(45), 4,
      sym__latex_word,
      sym_command_name,
      sym__renv_sig_beg,
      ts_builtin_sym_end,
  [123] = 1,
    ACTIONS(47), 4,
      sym__latex_word,
      sym_command_name,
      sym__renv_sig_beg,
      ts_builtin_sym_end,
  [130] = 4,
    ACTIONS(24), 1,
      anon_sym_engine,
    ACTIONS(34), 1,
      sym_renv_key,
    STATE(19), 1,
      sym__renv_engine,
    STATE(22), 1,
      sym_renv_key_pair,
  [143] = 1,
    ACTIONS(49), 4,
      sym__latex_word,
      sym_command_name,
      sym__renv_sig_beg,
      ts_builtin_sym_end,
  [150] = 3,
    ACTIONS(51), 1,
      anon_sym_COMMA,
    ACTIONS(54), 1,
      sym__renv_sig_end,
    STATE(14), 1,
      aux_sym__renv_options_repeat1,
  [160] = 3,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    ACTIONS(58), 1,
      sym__renv_sig_end,
    STATE(14), 1,
      aux_sym__renv_options_repeat1,
  [170] = 3,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(62), 1,
      aux_sym_renv_key_pair_token1,
    ACTIONS(64), 1,
      sym__renv_sig_end,
  [180] = 3,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    ACTIONS(66), 1,
      sym__renv_sig_end,
    STATE(15), 1,
      aux_sym__renv_options_repeat1,
  [190] = 2,
    ACTIONS(68), 1,
      aux_sym_renv_engine_val_token1,
    STATE(25), 1,
      sym_renv_engine_val,
  [197] = 1,
    ACTIONS(54), 2,
      sym__renv_sig_end,
      anon_sym_COMMA,
  [202] = 1,
    ACTIONS(70), 2,
      sym__renv_sig_end,
      anon_sym_COMMA,
  [207] = 2,
    ACTIONS(72), 1,
      aux_sym_rinline_token1,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
  [214] = 1,
    ACTIONS(54), 2,
      sym__renv_sig_end,
      anon_sym_COMMA,
  [219] = 2,
    ACTIONS(76), 1,
      anon_sym_AT,
    ACTIONS(78), 1,
      sym_renv_content,
  [226] = 1,
    ACTIONS(80), 2,
      sym__renv_sig_end,
      anon_sym_COMMA,
  [231] = 1,
    ACTIONS(82), 2,
      sym__renv_sig_end,
      anon_sym_COMMA,
  [236] = 2,
    ACTIONS(84), 1,
      anon_sym_AT,
    ACTIONS(86), 1,
      sym_renv_content,
  [243] = 1,
    ACTIONS(88), 1,
      anon_sym_EQ,
  [247] = 1,
    ACTIONS(90), 1,
      sym_renv_engine_key,
  [251] = 1,
    ACTIONS(92), 1,
      sym__renv_sig_end,
  [255] = 1,
    ACTIONS(62), 1,
      aux_sym_renv_key_pair_token1,
  [259] = 1,
    ACTIONS(94), 1,
      sym__renv_sig_end,
  [263] = 1,
    ACTIONS(96), 1,
      sym__renv_sig_end,
  [267] = 1,
    ACTIONS(98), 1,
      anon_sym_AT,
  [271] = 1,
    ACTIONS(76), 1,
      anon_sym_AT,
  [275] = 1,
    ACTIONS(100), 1,
      sym_renv_val,
  [279] = 1,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
  [283] = 1,
    ACTIONS(104), 1,
      aux_sym_renv_engine_val_token1,
  [287] = 1,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
  [291] = 1,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 64,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 90,
  [SMALL_STATE(8)] = 102,
  [SMALL_STATE(9)] = 109,
  [SMALL_STATE(10)] = 116,
  [SMALL_STATE(11)] = 123,
  [SMALL_STATE(12)] = 130,
  [SMALL_STATE(13)] = 143,
  [SMALL_STATE(14)] = 150,
  [SMALL_STATE(15)] = 160,
  [SMALL_STATE(16)] = 170,
  [SMALL_STATE(17)] = 180,
  [SMALL_STATE(18)] = 190,
  [SMALL_STATE(19)] = 197,
  [SMALL_STATE(20)] = 202,
  [SMALL_STATE(21)] = 207,
  [SMALL_STATE(22)] = 214,
  [SMALL_STATE(23)] = 219,
  [SMALL_STATE(24)] = 226,
  [SMALL_STATE(25)] = 231,
  [SMALL_STATE(26)] = 236,
  [SMALL_STATE(27)] = 243,
  [SMALL_STATE(28)] = 247,
  [SMALL_STATE(29)] = 251,
  [SMALL_STATE(30)] = 255,
  [SMALL_STATE(31)] = 259,
  [SMALL_STATE(32)] = 263,
  [SMALL_STATE(33)] = 267,
  [SMALL_STATE(34)] = 271,
  [SMALL_STATE(35)] = 275,
  [SMALL_STATE(36)] = 279,
  [SMALL_STATE(37)] = 283,
  [SMALL_STATE(38)] = 287,
  [SMALL_STATE(39)] = 291,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_latex, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_latex_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_latex_repeat1, 2), SHIFT_REPEAT(7),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rchunk, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rchunk, 5),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rchunk, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rinline, 4, .production_id = 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rinline, 3, .production_id = 3),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__renv_options_repeat1, 2), SHIFT_REPEAT(12),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__renv_options_repeat1, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__renv_options, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_renv_sig_options, 1, .production_id = 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__renv_options, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_renv_engine_val, 3, .production_id = 6),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_renv_key_pair, 3, .production_id = 5),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__renv_engine, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_renv_sig_options, 3, .production_id = 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_renv_sig_options, 1, .production_id = 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [106] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_rnoweb_external_scanner_create(void);
void tree_sitter_rnoweb_external_scanner_destroy(void *);
bool tree_sitter_rnoweb_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_rnoweb_external_scanner_serialize(void *, char *);
void tree_sitter_rnoweb_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rnoweb(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_rnoweb_external_scanner_create,
      tree_sitter_rnoweb_external_scanner_destroy,
      tree_sitter_rnoweb_external_scanner_scan,
      tree_sitter_rnoweb_external_scanner_serialize,
      tree_sitter_rnoweb_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
