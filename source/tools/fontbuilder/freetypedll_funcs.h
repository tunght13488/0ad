//*
FUNC(FT_Error, FT_Init_FreeType, ( FT_Library *alibrary ));
FUNC(FT_Error, FT_Done_FreeType, ( FT_Library Library ));
FUNC(FT_Error, FT_Open_Face, ( FT_Library library, const FT_Open_Args* args, FT_Long face_index, FT_Face *aface ));
FUNC(FT_Error, FT_Done_Face, ( FT_Face face ));
FUNC(FT_Error, FT_Set_Char_Size, ( FT_Face face, FT_F26Dot6 char_width, FT_F26Dot6 char_height, FT_UInt horz_resolution, FT_UInt vert_resolution ));
FUNC(FT_UInt,  FT_Get_Char_Index, ( FT_Face face, FT_ULong charcode ));
FUNC(FT_Long,  FT_MulFix, ( FT_Long a, FT_Long b ));
FUNC(void,     FT_Set_Transform, ( FT_Face face, FT_Matrix* matrix, FT_Vector* delta ));
FUNC(FT_Error, FT_Load_Glyph, ( FT_Face face, FT_UInt glyph_index, FT_Int32 load_flags ));
FUNC(FT_Error, FT_Render_Glyph, ( FT_GlyphSlot slot, FT_Render_Mode render_mode ));
//*/
//FUNC(FT_Error, FT_Init_FreeType, ( FT_Library* ));
