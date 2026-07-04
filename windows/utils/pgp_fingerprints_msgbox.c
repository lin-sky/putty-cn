/*
 * Display the fingerprints of the PGP Master Keys to the user as a
 * GUI message box.
 */

#include "putty.h"

void pgp_fingerprints_msgbox(HWND owner)
{
    message_box(
        owner,
        "以下是 PuTTY 中各 PGP 密钥的指纹。\n"
        "可用通过它们在此程序和其他执行程序间\n"
        "建立一条信任路径。详细信息请参阅手册。\n"
        "(注意：这些指纹跟 SSH 无关！)\n"
        "\n"
        "PuTTY 主控密钥 (截至 " PGP_MASTER_KEY_YEAR
        ") (" PGP_MASTER_KEY_DETAILS "):\n"
        "  " PGP_MASTER_KEY_FP "\n\n"
        "之前的 (主控密钥 (" PGP_PREV_MASTER_KEY_YEAR
        ", " PGP_PREV_MASTER_KEY_DETAILS "):\n"
        "  " PGP_PREV_MASTER_KEY_FP,
        "PGP 指纹", MB_ICONINFORMATION | MB_OK,
        false, HELPCTXID(pgp_fingerprints));
}
