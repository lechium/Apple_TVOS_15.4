//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/IMDMessageHistorySyncTask-Protocol.h>

@class IMDAccountController, NSMutableDictionary, NSString;

@interface IMDMessageHistoryIDSTransactionLogSyncTask : NSObject <IMDMessageHistorySyncTask>
{
    NSString *_className;	// 8 = 0x8
    IMDAccountController *_accountController;	// 16 = 0x10
    NSMutableDictionary *_taskGroupedByServiceName;	// 24 = 0x18
    CDUnknownBlockType _syncTaskCompletionBlock;	// 32 = 0x20
}

@property(copy, nonatomic) CDUnknownBlockType syncTaskCompletionBlock; // @synthesize syncTaskCompletionBlock=_syncTaskCompletionBlock;
@property(retain, nonatomic) NSMutableDictionary *taskGroupedByServiceName; // @synthesize taskGroupedByServiceName=_taskGroupedByServiceName;
@property(retain, nonatomic) IMDAccountController *accountController; // @synthesize accountController=_accountController;
- (CDUnknownBlockType)_createSyncCompletionBlockForServiceSession:(id)arg1;	// IMP=0x0000000000011b2a
- (CDUnknownBlockType)_createKnownRecordBlock;	// IMP=0x0000000000011af6
- (CDUnknownBlockType)_createProcessBatchBlockWithServiceSession:(id)arg1;	// IMP=0x0000000000011876
- (void)_setupAndBeginSync;	// IMP=0x000000000001136f
- (unsigned long long)syncTaskType;	// IMP=0x0000000000011364
- (void)startSyncTask:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011316
- (void)dealloc;	// IMP=0x00000000000112a7
- (id)initWithAccountController:(id)arg1;	// IMP=0x0000000000011235

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
