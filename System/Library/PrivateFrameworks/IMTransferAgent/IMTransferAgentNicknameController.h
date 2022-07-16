//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer;

@interface IMTransferAgentNicknameController : NSObject
{
    CKContainer *_nickNameContainer;	// 8 = 0x8
}

+ (id)ckQueue;	// IMP=0x0000000000007d0d
+ (id)sharedInstance;	// IMP=0x0000000000005770
- (void).cxx_destruct;	// IMP=0x0000000000008148
@property(readonly, nonatomic) CKContainer *nickNameContainer; // @synthesize nickNameContainer=_nickNameContainer;
- (id)lockdownManager;	// IMP=0x0000000000008125
- (_Bool)shouldUseDevNickNameContainer;	// IMP=0x00000000000080ba
- (id)_nickNameContainer;	// IMP=0x0000000000007fca
- (id)_nickNameContainerIdentifier;	// IMP=0x0000000000007fa0
- (_Bool)_serverSaysToUseOldContainer;	// IMP=0x0000000000007ed3
- (double)_retryIntervalForRetryCount:(unsigned long long)arg1;	// IMP=0x0000000000007ea0
- (id)_nickNameFetchConfiguration;	// IMP=0x0000000000007e53
- (id)_nickNameSaveConfiguration;	// IMP=0x0000000000007e1b
- (id)_nickNamePublicDB;	// IMP=0x0000000000007e09
- (id)nickNamePublicDatabase;	// IMP=0x0000000000007d9d
- (void)cloudKitOperationWithRetryCount:(unsigned long long)arg1 withError:(id)arg2 operation:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007978
- (void)performCloudKitOperation:(CDUnknownBlockType)arg1 withError:(id)arg2;	// IMP=0x0000000000007961
- (void)_handleSaveNicknameError:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000752a
- (void)_updateEncryptedPersonalNicknameToPublicCloudKitDBSavingRecord:(id)arg1 deletingRecordIDs:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006dcd
- (void)_updateEncryptedPersonalNicknameToPublicCloudKitDBSavingRecord:(id)arg1 deletingRecordID:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000006b1d
- (void)deleteAllPersonalNicknamesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000006931
- (void)setPersonalNickname:(id)arg1 oldRecordID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000063fd
- (void)fetchAllNicknamesForCurrentUser:(CDUnknownBlockType)arg1;	// IMP=0x00000000000061cf
- (void)fetchCurrentUserForNicknameContainer:(CDUnknownBlockType)arg1;	// IMP=0x00000000000060ee
- (void)getNicknameWithRecordID:(id)arg1 decryptionKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000057c5

@end
