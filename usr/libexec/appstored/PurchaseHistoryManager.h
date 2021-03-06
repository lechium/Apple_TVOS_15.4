//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, PurchaseHistoryDatabaseStore;
@protocol OS_dispatch_queue, PurchaseHistoryBagContract;

@interface PurchaseHistoryManager : NSObject
{
    id <PurchaseHistoryBagContract> _bagContract;	// 8 = 0x8
    _Bool _commandRunning;	// 16 = 0x10
    NSMutableArray *_commandStack;	// 24 = 0x18
    PurchaseHistoryDatabaseStore *_databaseStore;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00200000000575d9
- (void).cxx_destruct;	// IMP=0x002000000005a415
- (void)_performNextQualifyingUpdateRequest;	// IMP=0x0010000000059e88
- (void)_queueCommand:(id)arg1;	// IMP=0x0010000000059e1b
- (void)_updateForAccountID:(id)arg1 withContext:(unsigned long long)arg2 token:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000059cb2
- (void)_handleAccountChangedNotification;	// IMP=0x001000000005996d
- (id)_getHideShowRequestContextToShowAllForAccount:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000059548
- (id);	// IMP=0x0010000000059149
- (void)_beginObservingAccountChangeNotification;	// IMP=0x0010000000058fb2
- (void)pushService:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x0010000000058a49
- (void)updateWithContext:(unsigned long long)arg1 withToken:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000058818
- (void)updateForAccountID:(long long)arg1 withContext:(unsigned long long)arg2 withToken:(id)arg3 withReplyHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000586df
- (void)updateForAccountID:(id)arg1 expectedItemID:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000058427
- (void)showAllWithToken:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000058224
- (void)setHidden:(_Bool)arg1 forStoreItemID:(long long)arg2 withToken:(id)arg3 withReplyHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000058021
- (void)executeQuery:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000057c2c
- (id)executeQuery:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005781e
- (id)init;	// IMP=0x001000000005765e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

