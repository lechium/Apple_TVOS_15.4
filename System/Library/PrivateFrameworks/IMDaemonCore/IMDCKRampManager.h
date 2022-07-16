//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol OS_dispatch_queue;

@interface IMDCKRampManager : NSObject
{
    NSObject<OS_dispatch_queue> *_ckQueue;	// 8 = 0x8
    NSTimer *_retryTimer;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000078ec2
@property(retain, nonatomic) NSTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue; // @synthesize ckQueue=_ckQueue;
- (void)cachedRampState:(CDUnknownBlockType)arg1;	// IMP=0x000000000007a10b
- (void)fetchLatestRampStateFromCK:(CDUnknownBlockType)arg1;	// IMP=0x0000000000079a6c
- (void)_performRampCheckWithRetryAfter:(double)arg1;	// IMP=0x0000000000079896
- (void)_persistRampFetchServerError:(_Bool)arg1;	// IMP=0x00000000000797fc
- (void)_writeRampStateAllowed:(_Bool)arg1 promoted:(_Bool)arg2 visible:(_Bool)arg3 fetchHadServerError:(_Bool)arg4;	// IMP=0x000000000007966e
- (void)_fetchLatestRampStateFromCK:(CDUnknownBlockType)arg1;	// IMP=0x00000000000790d6
- (_Bool)_shouldSendPriorityRequest;	// IMP=0x00000000000790b6
- (id)_rampUpRecordID;	// IMP=0x0000000000079034
- (void)_scheduleOperation:(id)arg1;	// IMP=0x0000000000078ff1
- (id)_CKUtilitiesSharedInstance;	// IMP=0x0000000000078fd8
- (void)dealloc;	// IMP=0x0000000000078f55
- (id)init;	// IMP=0x0000000000078f07

@end
