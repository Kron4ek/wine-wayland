/*
 * Copyright 2002 Andriy Palamarchuk
 *
 * NERR error codes.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef __WINE_LMERR_H
#define __WINE_LMERR_H

#include <winerror.h>

#define NERR_Success    0

#define NERR_BASE                         2100

#define NERR_NetNotStarted                (NERR_BASE + 2)
#define NERR_UnknownServer                (NERR_BASE + 3)
#define NERR_ShareMem                     (NERR_BASE + 4)
#define NERR_NoNetworkResource            (NERR_BASE + 5)
#define NERR_RemoteOnly                   (NERR_BASE + 6)
#define NERR_DevNotRedirected             (NERR_BASE + 7)
#define NERR_ServerNotStarted             (NERR_BASE + 14)
#define NERR_ItemNotFound                 (NERR_BASE + 15)
#define NERR_UnknownDevDir                (NERR_BASE + 16)
#define NERR_RedirectedPath               (NERR_BASE + 17)
#define NERR_DuplicateShare               (NERR_BASE + 18)
#define NERR_NoRoom                       (NERR_BASE + 19)
#define NERR_TooManyItems                 (NERR_BASE + 21)
#define NERR_InvalidMaxUsers              (NERR_BASE + 22)
#define NERR_BufTooSmall                  (NERR_BASE + 23)
#define NERR_RemoteErr                    (NERR_BASE + 27)
#define NERR_LanmanIniError               (NERR_BASE + 31)
#define NERR_NetworkError                 (NERR_BASE + 36)
#define NERR_WkstaInconsistentState       (NERR_BASE + 37)
#define NERR_WkstaNotStarted              (NERR_BASE + 38)
#define NERR_BrowserNotStarted            (NERR_BASE + 39)
#define NERR_InternalError                (NERR_BASE + 40)
#define NERR_BadTransactConfig            (NERR_BASE + 41)
#define NERR_InvalidAPI                   (NERR_BASE + 42)
#define NERR_BadEventName                 (NERR_BASE + 43)
#define NERR_DupNameReboot                (NERR_BASE + 44)
#define NERR_CfgCompNotFound              (NERR_BASE + 46)
#define NERR_CfgParamNotFound             (NERR_BASE + 47)
#define NERR_LineTooLong                  (NERR_BASE + 49)
#define NERR_QNotFound                    (NERR_BASE + 50)
#define NERR_JobNotFound                  (NERR_BASE + 51)
#define NERR_DestNotFound                 (NERR_BASE + 52)
#define NERR_DestExists                   (NERR_BASE + 53)
#define NERR_QExists                      (NERR_BASE + 54)
#define NERR_QNoRoom                      (NERR_BASE + 55)
#define NERR_JobNoRoom                    (NERR_BASE + 56)
#define NERR_DestNoRoom                   (NERR_BASE + 57)
#define NERR_DestIdle                     (NERR_BASE + 58)
#define NERR_DestInvalidOp                (NERR_BASE + 59)
#define NERR_ProcNoRespond                (NERR_BASE + 60)
#define NERR_SpoolerNotLoaded             (NERR_BASE + 61)
#define NERR_DestInvalidState             (NERR_BASE + 62)
#define NERR_QInvalidState                (NERR_BASE + 63)
#define NERR_JobInvalidState              (NERR_BASE + 64)
#define NERR_SpoolNoMemory                (NERR_BASE + 65)
#define NERR_DriverNotFound               (NERR_BASE + 66)
#define NERR_DataTypeInvalid              (NERR_BASE + 67)
#define NERR_ProcNotFound                 (NERR_BASE + 68)
#define NERR_ServiceTableLocked           (NERR_BASE + 80)
#define NERR_ServiceTableFull             (NERR_BASE + 81)
#define NERR_ServiceInstalled             (NERR_BASE + 82)
#define NERR_ServiceEntryLocked           (NERR_BASE + 83)
#define NERR_ServiceNotInstalled          (NERR_BASE + 84)
#define NERR_BadServiceName               (NERR_BASE + 85)
#define NERR_ServiceCtlTimeout            (NERR_BASE + 86)
#define NERR_ServiceCtlBusy               (NERR_BASE + 87)
#define NERR_BadServiceProgName           (NERR_BASE + 88)
#define NERR_ServiceNotCtrl               (NERR_BASE + 89)
#define NERR_ServiceKillProc              (NERR_BASE + 90)
#define NERR_ServiceCtlNotValid           (NERR_BASE + 91)
#define NERR_NotInDispatchTbl             (NERR_BASE + 92)
#define NERR_BadControlRecv               (NERR_BASE + 93)
#define NERR_ServiceNotStarting           (NERR_BASE + 94)
#define NERR_AlreadyLoggedOn              (NERR_BASE + 100)
#define NERR_NotLoggedOn                  (NERR_BASE + 101)
#define NERR_BadUsername                  (NERR_BASE + 102)
#define NERR_BadPassword                  (NERR_BASE + 103)
#define NERR_UnableToAddName_W            (NERR_BASE + 104)
#define NERR_UnableToAddName_F            (NERR_BASE + 105)
#define NERR_UnableToDelName_W            (NERR_BASE + 106)
#define NERR_UnableToDelName_F            (NERR_BASE + 107)
#define NERR_LogonsPaused                 (NERR_BASE + 109)
#define NERR_LogonServerConflict          (NERR_BASE + 110)
#define NERR_LogonNoUserPath              (NERR_BASE + 111)
#define NERR_LogonScriptError             (NERR_BASE + 112)
#define NERR_StandaloneLogon              (NERR_BASE + 114)
#define NERR_LogonServerNotFound          (NERR_BASE + 115)
#define NERR_LogonDomainExists            (NERR_BASE + 116)
#define NERR_NonValidatedLogon            (NERR_BASE + 117)
#define NERR_ACFNotFound                  (NERR_BASE + 119)
#define NERR_GroupNotFound                (NERR_BASE + 120)
#define NERR_UserNotFound                 (NERR_BASE + 121)
#define NERR_ResourceNotFound             (NERR_BASE + 122)
#define NERR_GroupExists                  (NERR_BASE + 123)
#define NERR_UserExists                   (NERR_BASE + 124)
#define NERR_ResourceExists               (NERR_BASE + 125)
#define NERR_NotPrimary                   (NERR_BASE + 126)
#define NERR_ACFNotLoaded                 (NERR_BASE + 127)
#define NERR_ACFNoRoom                    (NERR_BASE + 128)
#define NERR_ACFFileIOFail                (NERR_BASE + 129)
#define NERR_ACFTooManyLists              (NERR_BASE + 130)
#define NERR_UserLogon                    (NERR_BASE + 131)
#define NERR_ACFNoParent                  (NERR_BASE + 132)
#define NERR_CanNotGrowSegment            (NERR_BASE + 133)
#define NERR_SpeGroupOp                   (NERR_BASE + 134)
#define NERR_NotInCache                   (NERR_BASE + 135)
#define NERR_UserInGroup                  (NERR_BASE + 136)
#define NERR_UserNotInGroup               (NERR_BASE + 137)
#define NERR_AccountUndefined             (NERR_BASE + 138)
#define NERR_AccountExpired               (NERR_BASE + 139)
#define NERR_InvalidWorkstation           (NERR_BASE + 140)
#define NERR_InvalidLogonHours            (NERR_BASE + 141)
#define NERR_PasswordExpired              (NERR_BASE + 142)
#define NERR_PasswordCantChange           (NERR_BASE + 143)
#define NERR_PasswordHistConflict         (NERR_BASE + 144)
#define NERR_PasswordTooShort             (NERR_BASE + 145)
#define NERR_PasswordTooRecent            (NERR_BASE + 146)
#define NERR_InvalidDatabase              (NERR_BASE + 147)
#define NERR_DatabaseUpToDate             (NERR_BASE + 148)
#define NERR_SyncRequired                 (NERR_BASE + 149)
#define NERR_UseNotFound                  (NERR_BASE + 150)
#define NERR_BadAsgType                   (NERR_BASE + 151)
#define NERR_DeviceIsShared               (NERR_BASE + 152)
#define NERR_NoComputerName               (NERR_BASE + 170)
#define NERR_MsgAlreadyStarted            (NERR_BASE + 171)
#define NERR_MsgInitFailed                (NERR_BASE + 172)
#define NERR_NameNotFound                 (NERR_BASE + 173)
#define NERR_AlreadyForwarded             (NERR_BASE + 174)
#define NERR_AddForwarded                 (NERR_BASE + 175)
#define NERR_AlreadyExists                (NERR_BASE + 176)
#define NERR_TooManyNames                 (NERR_BASE + 177)
#define NERR_DelComputerName              (NERR_BASE + 178)
#define NERR_LocalForward                 (NERR_BASE + 179)
#define NERR_GrpMsgProcessor              (NERR_BASE + 180)
#define NERR_PausedRemote                 (NERR_BASE + 181)
#define NERR_BadReceive                   (NERR_BASE + 182)
#define NERR_NameInUse                    (NERR_BASE + 183)
#define NERR_MsgNotStarted                (NERR_BASE + 184)
#define NERR_NotLocalName                 (NERR_BASE + 185)
#define NERR_NoForwardName                (NERR_BASE + 186)
#define NERR_RemoteFull                   (NERR_BASE + 187)
#define NERR_NameNotForwarded             (NERR_BASE + 188)
#define NERR_TruncatedBroadcast           (NERR_BASE + 189)
#define NERR_InvalidDevice                (NERR_BASE + 194)
#define NERR_WriteFault                   (NERR_BASE + 195)
#define NERR_DuplicateName                (NERR_BASE + 197)
#define NERR_DeleteLater                  (NERR_BASE + 198)
#define NERR_IncompleteDel                (NERR_BASE + 199)
#define NERR_MultipleNets                 (NERR_BASE + 200)
#define NERR_NetNameNotFound              (NERR_BASE + 210)
#define NERR_DeviceNotShared              (NERR_BASE + 211)
#define NERR_ClientNameNotFound           (NERR_BASE + 212)
#define NERR_FileIdNotFound               (NERR_BASE + 214)
#define NERR_ExecFailure                  (NERR_BASE + 215)
#define NERR_TmpFile                      (NERR_BASE + 216)
#define NERR_TooMuchData                  (NERR_BASE + 217)
#define NERR_DeviceShareConflict          (NERR_BASE + 218)
#define NERR_BrowserTableIncomplete       (NERR_BASE + 219)
#define NERR_NotLocalDomain               (NERR_BASE + 220)
#define NERR_IsDfsShare                   (NERR_BASE + 221)
#define NERR_DevInvalidOpCode             (NERR_BASE + 231)
#define NERR_DevNotFound                  (NERR_BASE + 232)
#define NERR_DevNotOpen                   (NERR_BASE + 233)
#define NERR_BadQueueDevString            (NERR_BASE + 234)
#define NERR_BadQueuePriority             (NERR_BASE + 235)
#define NERR_NoCommDevs                   (NERR_BASE + 237)
#define NERR_QueueNotFound                (NERR_BASE + 238)
#define NERR_BadDevString                 (NERR_BASE + 240)
#define NERR_BadDev                       (NERR_BASE + 241)
#define NERR_InUseBySpooler               (NERR_BASE + 242)
#define NERR_CommDevInUse                 (NERR_BASE + 243)
#define NERR_InvalidComputer              (NERR_BASE + 251)
#define NERR_MaxLenExceeded               (NERR_BASE + 254)
#define NERR_BadComponent                 (NERR_BASE + 256)
#define NERR_CantType                     (NERR_BASE + 257)
#define NERR_TooManyEntries               (NERR_BASE + 262)
#define NERR_ProfileFileTooBig            (NERR_BASE + 270)
#define NERR_ProfileOffset                (NERR_BASE + 271)
#define NERR_ProfileCleanup               (NERR_BASE + 272)
#define NERR_ProfileUnknownCmd            (NERR_BASE + 273)
#define NERR_ProfileLoadErr               (NERR_BASE + 274)
#define NERR_ProfileSaveErr               (NERR_BASE + 275)
#define NERR_LogOverflow                  (NERR_BASE + 277)
#define NERR_LogFileChanged               (NERR_BASE + 278)
#define NERR_LogFileCorrupt               (NERR_BASE + 279)
#define NERR_SourceIsDir                  (NERR_BASE + 280)
#define NERR_BadSource                    (NERR_BASE + 281)
#define NERR_BadDest                      (NERR_BASE + 282)
#define NERR_DifferentServers             (NERR_BASE + 283)
#define NERR_RunSrvPaused                 (NERR_BASE + 285)
#define NERR_ErrCommRunSrv                (NERR_BASE + 289)
#define NERR_ErrorExecingGhost            (NERR_BASE + 291)
#define NERR_ShareNotFound                (NERR_BASE + 292)
#define NERR_InvalidLana                  (NERR_BASE + 300)
#define NERR_OpenFiles                    (NERR_BASE + 301)
#define NERR_ActiveConns                  (NERR_BASE + 302)
#define NERR_BadPasswordCore              (NERR_BASE + 303)
#define NERR_DevInUse                     (NERR_BASE + 304)
#define NERR_LocalDrive                   (NERR_BASE + 305)
#define NERR_AlertExists                  (NERR_BASE + 330)
#define NERR_TooManyAlerts                (NERR_BASE + 331)
#define NERR_NoSuchAlert                  (NERR_BASE + 332)
#define NERR_BadRecipient                 (NERR_BASE + 333)
#define NERR_AcctLimitExceeded            (NERR_BASE + 334)
#define NERR_InvalidLogSeek               (NERR_BASE + 340)
#define NERR_BadUasConfig                 (NERR_BASE + 350)
#define NERR_InvalidUASOp                 (NERR_BASE + 351)
#define NERR_LastAdmin                    (NERR_BASE + 352)
#define NERR_DCNotFound                   (NERR_BASE + 353)
#define NERR_LogonTrackingError           (NERR_BASE + 354)
#define NERR_NetlogonNotStarted           (NERR_BASE + 355)
#define NERR_CanNotGrowUASFile            (NERR_BASE + 356)
#define NERR_TimeDiffAtDC                 (NERR_BASE + 357)
#define NERR_PasswordMismatch             (NERR_BASE + 358)
#define NERR_NoSuchServer                 (NERR_BASE + 360)
#define NERR_NoSuchSession                (NERR_BASE + 361)
#define NERR_NoSuchConnection             (NERR_BASE + 362)
#define NERR_TooManyServers               (NERR_BASE + 363)
#define NERR_TooManySessions              (NERR_BASE + 364)
#define NERR_TooManyConnections           (NERR_BASE + 365)
#define NERR_TooManyFiles                 (NERR_BASE + 366)
#define NERR_NoAlternateServers           (NERR_BASE + 367)
#define NERR_TryDownLevel                 (NERR_BASE + 370)
#define NERR_UPSDriverNotStarted          (NERR_BASE + 380)
#define NERR_UPSInvalidConfig             (NERR_BASE + 381)
#define NERR_UPSInvalidCommPort           (NERR_BASE + 382)
#define NERR_UPSSignalAsserted            (NERR_BASE + 383)
#define NERR_UPSShutdownFailed            (NERR_BASE + 384)
#define NERR_BadDosRetCode                (NERR_BASE + 400)
#define NERR_ProgNeedsExtraMem            (NERR_BASE + 401)
#define NERR_BadDosFunction               (NERR_BASE + 402)
#define NERR_RemoteBootFailed             (NERR_BASE + 403)
#define NERR_BadFileCheckSum              (NERR_BASE + 404)
#define NERR_NoRplBootSystem              (NERR_BASE + 405)
#define NERR_RplLoadrNetBiosErr           (NERR_BASE + 406)
#define NERR_RplLoadrDiskErr              (NERR_BASE + 407)
#define NERR_ImageParamErr                (NERR_BASE + 408)
#define NERR_TooManyImageParams           (NERR_BASE + 409)
#define NERR_NonDosFloppyUsed             (NERR_BASE + 410)
#define NERR_RplBootRestart               (NERR_BASE + 411)
#define NERR_RplSrvrCallFailed            (NERR_BASE + 412)
#define NERR_CantConnectRplSrvr           (NERR_BASE + 413)
#define NERR_CantOpenImageFile            (NERR_BASE + 414)
#define NERR_CallingRplSrvr               (NERR_BASE + 415)
#define NERR_StartingRplBoot              (NERR_BASE + 416)
#define NERR_RplBootServiceTerm           (NERR_BASE + 417)
#define NERR_RplBootStartFailed           (NERR_BASE + 418)
#define NERR_RPL_CONNECTED                (NERR_BASE + 419)
#define NERR_BrowserConfiguredToNotRun    (NERR_BASE + 450)
#define NERR_RplNoAdaptersStarted         (NERR_BASE + 510)
#define NERR_RplBadRegistry               (NERR_BASE + 511)
#define NERR_RplBadDatabase               (NERR_BASE + 512)
#define NERR_RplRplfilesShare             (NERR_BASE + 513)
#define NERR_RplNotRplServer              (NERR_BASE + 514)
#define NERR_RplCannotEnum                (NERR_BASE + 515)
#define NERR_RplWkstaInfoCorrupted        (NERR_BASE + 516)
#define NERR_RplWkstaNotFound             (NERR_BASE + 517)
#define NERR_RplWkstaNameUnavailable      (NERR_BASE + 518)
#define NERR_RplProfileInfoCorrupted      (NERR_BASE + 519)
#define NERR_RplProfileNotFound           (NERR_BASE + 520)
#define NERR_RplProfileNameUnavailable    (NERR_BASE + 521)
#define NERR_RplProfileNotEmpty           (NERR_BASE + 522)
#define NERR_RplConfigInfoCorrupted       (NERR_BASE + 523)
#define NERR_RplConfigNotFound            (NERR_BASE + 524)
#define NERR_RplAdapterInfoCorrupted      (NERR_BASE + 525)
#define NERR_RplInternal                  (NERR_BASE + 526)
#define NERR_RplVendorInfoCorrupted       (NERR_BASE + 527)
#define NERR_RplBootInfoCorrupted         (NERR_BASE + 528)
#define NERR_RplWkstaNeedsUserAcct        (NERR_BASE + 529)
#define NERR_RplNeedsRPLUSERAcct          (NERR_BASE + 530)
#define NERR_RplBootNotFound              (NERR_BASE + 531)
#define NERR_RplIncompatibleProfile       (NERR_BASE + 532)
#define NERR_RplAdapterNameUnavailable    (NERR_BASE + 533)
#define NERR_RplConfigNotEmpty            (NERR_BASE + 534)
#define NERR_RplBootInUse                 (NERR_BASE + 535)
#define NERR_RplBackupDatabase            (NERR_BASE + 536)
#define NERR_RplAdapterNotFound           (NERR_BASE + 537)
#define NERR_RplVendorNotFound            (NERR_BASE + 538)
#define NERR_RplVendorNameUnavailable     (NERR_BASE + 539)
#define NERR_RplBootNameUnavailable       (NERR_BASE + 540)
#define NERR_RplConfigNameUnavailable     (NERR_BASE + 541)
#define NERR_DfsInternalCorruption        (NERR_BASE + 560)
#define NERR_DfsVolumeDataCorrupt         (NERR_BASE + 561)
#define NERR_DfsNoSuchVolume              (NERR_BASE + 562)
#define NERR_DfsVolumeAlreadyExists       (NERR_BASE + 563)
#define NERR_DfsAlreadyShared             (NERR_BASE + 564)
#define NERR_DfsNoSuchShare               (NERR_BASE + 565)
#define NERR_DfsNotALeafVolume            (NERR_BASE + 566)
#define NERR_DfsLeafVolume                (NERR_BASE + 567)
#define NERR_DfsVolumeHasMultipleServers  (NERR_BASE + 568)
#define NERR_DfsCantCreateJunctionPoint   (NERR_BASE + 569)
#define NERR_DfsServerNotDfsAware         (NERR_BASE + 570)
#define NERR_DfsBadRenamePath             (NERR_BASE + 571)
#define NERR_DfsVolumeIsOffline           (NERR_BASE + 572)
#define NERR_DfsInternalError             (NERR_BASE + 590)

#define MAX_NERR                          (NERR_BASE + 899)

#endif
