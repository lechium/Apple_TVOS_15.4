//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/IMDMessageHistorySyncTaskFactory-Protocol.h>

@class IMDAccountController, IMDCKSyncController, IMDReplayController, NSString;

@interface IMDMessageHistorySyncTaskLiveFactory : NSObject <IMDMessageHistorySyncTaskFactory>
{
    IMDCKSyncController *_ckSyncController;	// 8 = 0x8
    IMDAccountController *_accountController;	// 16 = 0x10
    IMDReplayController *_replayController;	// 24 = 0x18
}

- (id)_newIDSTransactionLogSyncTask;	// IMP=0x0000000000004246
- (id)_newFirstUnlockReplaySyncTask;	// IMP=0x0000000000004202
- (id)_newKChatSyncTask;	// IMP=0x00000000000041d3
- (id)newSyncTaskForType:(unsigned long long)arg1;	// IMP=0x000000000000419a
- (id)_initWithCKSyncController:(id)arg1 accountController:(id)arg2 replayController:(id)arg3;	// IMP=0x0000000000004120
- (void)dealloc;	// IMP=0x00000000000040c0
- (id)init;	// IMP=0x000000000000404e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
