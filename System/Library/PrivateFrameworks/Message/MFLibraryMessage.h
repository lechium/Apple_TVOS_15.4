//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFLock, NSMutableDictionary, NSMutableSet, NSString;

@interface MFLibraryMessage
{
    unsigned int _libraryID;	// 200 = 0xc8
    NSString *_remoteID;	// 208 = 0xd0
    unsigned int _uid;	// 216 = 0xd8
    unsigned long long _uniqueRemoteId;	// 224 = 0xe0
    unsigned long long _size;	// 232 = 0xe8
    unsigned int _mailboxID;	// 240 = 0xf0
    unsigned int _originalMailboxID;	// 244 = 0xf4
    NSString *_messageID;	// 248 = 0xf8
    unsigned long long _conversationFlags;	// 256 = 0x100
    NSMutableDictionary *_metadata;	// 264 = 0x108
    NSMutableSet *_metadataChangedKeys;	// 272 = 0x110
    MFLock *_metadataLock;	// 280 = 0x118
}

+ (id)messageWithLibraryID:(unsigned int)arg1;	// IMP=0x000000000003a2e5
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;	// IMP=0x000000000003bd6e
- (void)_forceLoadOfMessageSummaryFromProtectedStore;	// IMP=0x000000000003bc9e
- (id)attachmentStorageLocation;	// IMP=0x000000000003bc8c
- (id)_attachmentStorageLocation;	// IMP=0x000000000003bbbe
- (id)metadataValueForKey:(id)arg1;	// IMP=0x000000000003ba92
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000003b784
- (void)_initializeMetadata;	// IMP=0x000000000003b740
- (id)copyMessageInfo;	// IMP=0x000000000003b6b4
- (_Bool)isLibraryMessage;	// IMP=0x000000000003b6ac
- (id)dataConsumerForMimePart:(id)arg1;	// IMP=0x000000000003b66c
- (void)setMessageData:(id)arg1 isPartial:(_Bool)arg2;	// IMP=0x000000000003b627
- (void)setRemoteID:(const char *)arg1 flags:(unsigned long long)arg2 size:(unsigned int)arg3 mailboxID:(unsigned int)arg4 originalMailboxID:(unsigned int)arg5;	// IMP=0x000000000003b56e
- (unsigned long long)conversationFlags;	// IMP=0x000000000003b55d
- (void)setConversationFlags:(unsigned long long)arg1;	// IMP=0x000000000003b54c
- (id)preferredEmailAddressToReplyWith;	// IMP=0x000000000003b1c0
- (void)markAsForwarded;	// IMP=0x000000000003b0e7
- (void)markAsReplied;	// IMP=0x000000000003b010
- (void)markAsNotFlagged;	// IMP=0x000000000003af39
- (void)markAsFlagged;	// IMP=0x000000000003ae62
- (void)markAsNotViewed;	// IMP=0x000000000003ad8b
- (void)markAsViewed;	// IMP=0x000000000003acb4
- (id)account;	// IMP=0x000000000003ac3a
- (id)dataPathForMimePart:(id)arg1;	// IMP=0x000000000003abfa
- (id)path;	// IMP=0x000000000003abc9
- (id)description;	// IMP=0x000000000003aae9
- (void)setMutableInfoFromMessage:(id)arg1;	// IMP=0x000000000003aab5
- (void)commit;	// IMP=0x000000000003aa68
- (void)setSummary:(id)arg1;	// IMP=0x000000000003aa05
- (void)setFlags:(unsigned long long)arg1;	// IMP=0x000000000003a9f1
- (void)setMessageFlags:(unsigned long long)arg1;	// IMP=0x000000000003a991
- (void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1;	// IMP=0x000000000003a949
- (long long)compareByUidWithMessage:(id)arg1;	// IMP=0x000000000003a8d7
- (id)mailboxName;	// IMP=0x000000000003a886
- (void)setHasTemporaryUid:(_Bool)arg1;	// IMP=0x000000000003a85d
- (_Bool)hasTemporaryUid;	// IMP=0x000000000003a847
- (void)setPreferredEncoding:(unsigned int)arg1;	// IMP=0x000000000003a7ed
- (_Bool)isMessageContentsLocallyAvailable;	// IMP=0x000000000003a7bc
- (void)setIsPartial:(_Bool)arg1;	// IMP=0x000000000003a77c
- (_Bool)isPartial;	// IMP=0x000000000003a763
- (void)setUniqueRemoteId:(unsigned long long)arg1;	// IMP=0x000000000003a737
- (unsigned long long)uniqueRemoteId;	// IMP=0x000000000003a726
- (void)setUid:(unsigned int)arg1;	// IMP=0x000000000003a6c3
- (unsigned int)uid;	// IMP=0x000000000003a6b3
- (unsigned long long)hash;	// IMP=0x000000000003a691
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003a614
- (id)remoteID;	// IMP=0x000000000003a5f6
- (void)setRemoteID:(id)arg1;	// IMP=0x000000000003a59f
- (void)_updateUID;	// IMP=0x000000000003a4e5
- (id)mailbox;	// IMP=0x000000000003a4b4
- (id)messageStore;	// IMP=0x000000000003a45b
- (void)setMessageSize:(unsigned long long)arg1;	// IMP=0x000000000003a44a
- (unsigned long long)messageSize;	// IMP=0x000000000003a439
- (id)originalMailboxURL;	// IMP=0x000000000003a401
- (void)setOriginalMailboxID:(unsigned int)arg1;	// IMP=0x000000000003a3f1
- (unsigned int)originalMailboxID;	// IMP=0x000000000003a3e1
- (void)setMailboxID:(unsigned int)arg1;	// IMP=0x000000000003a3d1
- (unsigned int)mailboxID;	// IMP=0x000000000003a3c1
- (unsigned int)libraryID;	// IMP=0x000000000003a3b1
- (id)persistentID;	// IMP=0x000000000003a39f
- (id)messageID;	// IMP=0x000000000003a344
- (id)library;	// IMP=0x000000000003a319
- (id)initWithLibraryID:(unsigned int)arg1;	// IMP=0x000000000003a24e
- (void)dealloc;	// IMP=0x000000000003a1cc

@end

