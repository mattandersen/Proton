#ifdef __cplusplus
extern "C" {
#endif
extern int cppISteamMatchmaking_SteamMatchMaking002_GetFavoriteGameCount(void *);
extern bool cppISteamMatchmaking_SteamMatchMaking002_GetFavoriteGame(void *, int, AppId_t *, uint32 *, uint16 *, uint16 *, uint32 *, uint32 *);
extern int cppISteamMatchmaking_SteamMatchMaking002_AddFavoriteGame(void *, AppId_t, uint32, uint16, uint16, uint32, uint32);
extern bool cppISteamMatchmaking_SteamMatchMaking002_RemoveFavoriteGame(void *, AppId_t, uint32, uint16, uint16, uint32);
extern void cppISteamMatchmaking_SteamMatchMaking002_RequestLobbyList(void *);
extern CSteamID cppISteamMatchmaking_SteamMatchMaking002_GetLobbyByIndex(void *, int);
extern void cppISteamMatchmaking_SteamMatchMaking002_CreateLobby(void *, bool);
extern void cppISteamMatchmaking_SteamMatchMaking002_JoinLobby(void *, CSteamID);
extern void cppISteamMatchmaking_SteamMatchMaking002_LeaveLobby(void *, CSteamID);
extern bool cppISteamMatchmaking_SteamMatchMaking002_InviteUserToLobby(void *, CSteamID, CSteamID);
extern int cppISteamMatchmaking_SteamMatchMaking002_GetNumLobbyMembers(void *, CSteamID);
extern CSteamID cppISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberByIndex(void *, CSteamID, int);
extern const char * cppISteamMatchmaking_SteamMatchMaking002_GetLobbyData(void *, CSteamID, const char *);
extern bool cppISteamMatchmaking_SteamMatchMaking002_SetLobbyData(void *, CSteamID, const char *, const char *);
extern const char * cppISteamMatchmaking_SteamMatchMaking002_GetLobbyMemberData(void *, CSteamID, CSteamID, const char *);
extern void cppISteamMatchmaking_SteamMatchMaking002_SetLobbyMemberData(void *, CSteamID, const char *, const char *);
extern bool cppISteamMatchmaking_SteamMatchMaking002_SendLobbyChatMsg(void *, CSteamID, const void *, int);
extern int cppISteamMatchmaking_SteamMatchMaking002_GetLobbyChatEntry(void *, CSteamID, int, CSteamID *, void *, int, EChatEntryType *);
extern bool cppISteamMatchmaking_SteamMatchMaking002_RequestLobbyData(void *, CSteamID);
extern void cppISteamMatchmaking_SteamMatchMaking002_SetLobbyGameServer(void *, CSteamID, uint32, uint16, CSteamID);
#ifdef __cplusplus
}
#endif
