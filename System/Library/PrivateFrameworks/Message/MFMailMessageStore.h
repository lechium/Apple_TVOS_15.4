//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MIME/MFMessageStore.h>

@class MFActivityMonitor, MFMailboxUid, MailAccount;

@interface MFMailMessageStore : MFMessageStore
{
    unsigned long long _state;	// 16 = 0x10
    struct {
        unsigned int isReadOnly:1;
        unsigned int hasUnsavedChangesToMessageData:1;
        unsigned int haveOpenLockFile:1;
        unsigned int compacting:1;
        unsigned int cancelInvalidation:1;
        unsigned int forceInvalidation:1;
        unsigned int isWritingChangesToDisk:1;
        unsigned int isTryingToClose:1;
        unsigned int compactOnClose:1;
        unsigned int reserved:23;
    } _flags;	// 24 = 0x18
    MFMailboxUid *_mailboxUid;	// 32 = 0x20
    MailAccount *_account;	// 40 = 0x28
    unsigned long long _deletedMessagesSize;	// 48 = 0x30
    unsigned long long _deletedMessageCount;	// 56 = 0x38
    unsigned long long _unreadMessageCount;	// 64 = 0x40
    unsigned long long _generationNumber;	// 72 = 0x48
    unsigned long long _lastFetchCount;	// 80 = 0x50
    MFActivityMonitor *_openMonitor;	// 88 = 0x58
}

+ (Class)headersClass;	// IMP=0x0000000000005aeb
+ (id)copyMessages:(id)arg1 toMailbox:(id)arg2 markAsRead:(_Bool)arg3 deleteOriginals:(_Bool)arg4 isDeletion:(_Bool)arg5;	// IMP=0x0000000000003d4a
+ (Class)classForMimePart;	// IMP=0x00000000000029a1
+ (_Bool)storeAtPathIsWritable:(id)arg1;	// IMP=0x000000000000296e
+ (_Bool)createEmptyStoreForPath:(id)arg1;	// IMP=0x000000000000293b
+ (_Bool)createEmptyStoreIfNeededForPath:(id)arg1;	// IMP=0x00000000000028c6
- (id)messageIdRollCall:(id)arg1;	// IMP=0x0000000000005afc
- (_Bool)_shouldChangeComponentMessageFlagsForMessage:(id)arg1;	// IMP=0x0000000000005ad9
- (_Bool)_shouldChangeComponentMessageFlags;	// IMP=0x0000000000005ad1
- (_Bool)_updateFlagForMessage:(id)arg1 key:(id)arg2 value:(_Bool)arg3;	// IMP=0x00000000000058f8
- (void)messagesWereAdded:(id)arg1 earliestReceivedDate:(id)arg2;	// IMP=0x0000000000005823
- (void)updateMessages:(id)arg1 updateNumberOfAttachments:(_Bool)arg2;	// IMP=0x0000000000005707
- (void)_setFlagsForMessages:(id)arg1;	// IMP=0x00000000000055aa
- (id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(_Bool)arg3;	// IMP=0x000000000000551c
- (void)_rebuildTableOfContentsSynchronously;	// IMP=0x00000000000054e9
- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(_Bool)arg2;	// IMP=0x00000000000054b6
- (int)archiveDestination;	// IMP=0x000000000000546c
- (_Bool)shouldArchive;	// IMP=0x0000000000005406
- (_Bool)supportsArchiving;	// IMP=0x00000000000053a6
- (_Bool)shouldDeleteInPlace;	// IMP=0x000000000000535c
- (_Bool)shouldSetSummaryForMessage:(id)arg1;	// IMP=0x0000000000005340
- (id)loadMeetingMetadataForMessage:(id)arg1;	// IMP=0x0000000000005338
- (id)loadMeetingDataForMessage:(id)arg1;	// IMP=0x0000000000005330
- (id)loadMeetingExternalIDForMessage:(id)arg1;	// IMP=0x0000000000005328
- (_Bool)shouldDownloadBodyDataForMessage:(id)arg1;	// IMP=0x00000000000052ed
- (void)setLibrary:(id)arg1;	// IMP=0x00000000000052e7
- (void)_flushAllMessageData;	// IMP=0x0000000000005246
- (void)close;	// IMP=0x0000000000005240
- (id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(_Bool)arg3;	// IMP=0x0000000000005238
- (_Bool)setPreferredEncoding:(unsigned int)arg1 forMessage:(id)arg2;	// IMP=0x0000000000005128
- (long long)fetchMobileSynchronously:(unsigned long long)arg1;	// IMP=0x000000000000510e
- (long long)fetchMobileSynchronously:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000000004d40
- (long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000000004d0e
- (id)status;	// IMP=0x0000000000004d06
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(_Bool)arg2 isEncrypted:(_Bool)arg3 forMessage:(id)arg4;	// IMP=0x0000000000004c7a
- (void)setFlagsForAllMessagesFromDictionary:(id)arg1;	// IMP=0x0000000000004c2c
- (void)setFlagForAllMessages:(id)arg1 state:(_Bool)arg2;	// IMP=0x0000000000004ba8
- (void)setFlagsCancelled:(id)arg1 forMessages:(id)arg2;	// IMP=0x0000000000004ba2
- (id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;	// IMP=0x0000000000004b90
- (void)setFlag:(id)arg1 state:(_Bool)arg2 forMessages:(id)arg3;	// IMP=0x0000000000004af9
- (id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2;	// IMP=0x0000000000004af1
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;	// IMP=0x000000000000480b
- (_Bool)hasCachedDataForMimePart:(id)arg1;	// IMP=0x00000000000047d1
- (id)headerDataForMessage:(id)arg1 downloadIfNecessary:(_Bool)arg2;	// IMP=0x0000000000004763
- (id)uniqueRemoteIDsForMessages:(id)arg1;	// IMP=0x000000000000475b
- (id)lastViewedMessageDate;	// IMP=0x0000000000004730
- (id)lastViewedMessageWithOptions:(unsigned int)arg1;	// IMP=0x00000000000046e3
- (id)messageForRemoteID:(id)arg1 inMailbox:(id)arg2;	// IMP=0x00000000000046cf
- (id)messageForRemoteID:(id)arg1;	// IMP=0x00000000000046bb
- (id)messageForMessageID:(id)arg1 options:(unsigned int)arg2;	// IMP=0x00000000000046b3
- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2;	// IMP=0x000000000000469e
- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3;	// IMP=0x0000000000004689
- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4;	// IMP=0x0000000000004666
- (unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5;	// IMP=0x0000000000004620
- (_Bool)allowsAppend;	// IMP=0x0000000000003d42
- (void)messagesWereDeleted:(id)arg1;	// IMP=0x0000000000003d3c
- (void)undeleteMessages:(id)arg1;	// IMP=0x0000000000003c9e
- (void)deleteMessages:(id)arg1 moveToTrash:(_Bool)arg2;	// IMP=0x000000000000396f
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(_Bool)arg2;	// IMP=0x0000000000003969
- (void)doCompact;	// IMP=0x0000000000003963
- (_Bool)canCompact;	// IMP=0x0000000000003938
- (id)finishRoutingMessages:(id)arg1 routed:(id)arg2;	// IMP=0x00000000000036f9
- (id)_defaultRouterDestination;	// IMP=0x00000000000036e8
- (long long)fetchMessagesWithRemoteIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;	// IMP=0x00000000000036db
- (long long)fetchMessagesWithMessageIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;	// IMP=0x00000000000036ce
- (_Bool)canFetchMessageIDs;	// IMP=0x00000000000036c6
- (id)remoteIDsFromUniqueRemoteIDs:(id)arg1;	// IMP=0x00000000000036be
- (id)storeSearchResultMatchingSearchText:(id)arg1 criterion:(id)arg2 limit:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x000000000000369a
- (id)storeSearchResultMatchingCriterion:(id)arg1 limit:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x0000000000003686
- (long long)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned int)arg2;	// IMP=0x0000000000003679
- (_Bool)canFetchSearchResults;	// IMP=0x0000000000003671
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;	// IMP=0x0000000000003669
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2;	// IMP=0x0000000000003661
- (id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;	// IMP=0x0000000000003659
- (id)copyMessagesMatchingText:(id)arg1 options:(unsigned int)arg2;	// IMP=0x0000000000003651
- (id)copyMessagesMatchingText:(id)arg1;	// IMP=0x000000000000363d
- (id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned int)arg1 limit:(unsigned int)arg2;	// IMP=0x000000000000362b
- (id)copyOfAllMessagesWithOptions:(unsigned int)arg1;	// IMP=0x0000000000003619
- (id)mutableCopyOfAllMessages;	// IMP=0x0000000000003611
- (id)copyOfMessagesInRange:(struct _NSRange)arg1;	// IMP=0x0000000000003609
- (id)copyOfAllMessages;	// IMP=0x0000000000003601
- (unsigned long long)indexOfMessage:(id)arg1;	// IMP=0x00000000000035f1
- (_Bool)hasMessageForAccount:(id)arg1;	// IMP=0x0000000000003479
- (unsigned long long)unreadCountMatchingCriterion:(id)arg1;	// IMP=0x0000000000003471
- (unsigned long long)unreadCount;	// IMP=0x0000000000003460
- (void)purgeMessagesBeyondLimit:(unsigned long long)arg1 keepingMessage:(id)arg2;	// IMP=0x000000000000345a
- (unsigned long long)fetchWindow;	// IMP=0x000000000000344a
- (unsigned long long)growFetchWindow;	// IMP=0x000000000000343a
- (void)invalidateFetchWindow;	// IMP=0x0000000000003434
- (_Bool)shouldGrowFetchWindow;	// IMP=0x00000000000033dd
- (_Bool)hasMoreFetchableMessages;	// IMP=0x0000000000003391
- (unsigned long long)serverNonDeletedCount;	// IMP=0x0000000000003351
- (unsigned long long)serverUnreadCount;	// IMP=0x0000000000003315
- (unsigned long long)serverUnreadOnlyOnServerCount;	// IMP=0x000000000000330d
- (unsigned long long)serverMessageCount;	// IMP=0x00000000000032fd
- (unsigned long long)allNonDeletedCountIncludingServerSearch:(_Bool)arg1 andThreadSearch:(_Bool)arg2;	// IMP=0x00000000000032eb
- (unsigned long long)nonDeletedCountIncludingServerSearch:(_Bool)arg1 andThreadSearch:(_Bool)arg2;	// IMP=0x00000000000032c3
- (unsigned long long)totalCount;	// IMP=0x00000000000032bb
- (void)deletedCount:(unsigned long long *)arg1 andSize:(unsigned long long *)arg2;	// IMP=0x0000000000003299
- (void)messagesWillBeCompacted:(id)arg1;	// IMP=0x00000000000031de
- (void)messagesWereCompacted:(id)arg1;	// IMP=0x0000000000003123
- (void)messagesWereAdded:(id)arg1;	// IMP=0x00000000000030dc
- (void)structureDidChange;	// IMP=0x000000000000309d
- (void)allMessageFlagsDidChange:(id)arg1;	// IMP=0x0000000000002ffb
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;	// IMP=0x0000000000002f75
- (_Bool)isDrafts;	// IMP=0x0000000000002f51
- (id)description;	// IMP=0x0000000000002f09
- (_Bool)isReadOnly;	// IMP=0x0000000000002ef7
- (id)displayName;	// IMP=0x0000000000002dfa
- (id)storePathRelativeToAccount;	// IMP=0x0000000000002ddd
- (_Bool)isOpened;	// IMP=0x0000000000002dc8
- (id)mailboxUid;	// IMP=0x0000000000002db7
- (id)account;	// IMP=0x0000000000002da6
- (void)writeUpdatedMessageDataToDisk;	// IMP=0x0000000000002d73
- (void)cancelOpen;	// IMP=0x0000000000002d30
- (void)didOpen;	// IMP=0x0000000000002cb5
- (void)openSynchronously;	// IMP=0x0000000000002c82
- (void)openAsynchronously;	// IMP=0x0000000000002b6a
- (void)dealloc;	// IMP=0x0000000000002b02
- (id)initWithMailboxUid:(id)arg1 readOnly:(_Bool)arg2;	// IMP=0x00000000000029b2

@end

