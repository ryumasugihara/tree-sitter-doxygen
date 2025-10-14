#ifndef TREE_SITTER_DOXYGEN_H_
#define TREE_SITTER_DOXYGEN_H_

typedef struct TSLanguage TSLanguage;

#ifdef __cplusplus
extern "C" {
#endif

extern TSLanguage *tree_sitter_nvim_comment_doxygen();

#ifdef __cplusplus
}
#endif

#endif // TREE_SITTER_DOXYGEN_H_
