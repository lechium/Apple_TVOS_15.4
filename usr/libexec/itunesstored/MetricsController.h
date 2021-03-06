//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue, SSMetricsEventController;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MetricsController : NSObject
{
    long long _backoffRetryCount;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_backoffRetryTimer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    SSMetricsEventController *_eventController;	// 32 = 0x20
    ISOperationQueue *_operationQueue;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0040000000170e56
- (void).cxx_destruct;	// IMP=0x0020000000172d59
- (void)_sendUnentitledResponseToMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000172b26
- (void)_scheduleBackoffRetry;	// IMP=0x001000000017271b
- (void)_reportEventsIfNeeded;	// IMP=0x00100000001723f8
- (void)_reportEvents;	// IMP=0x00100000001720fc
- (id)_operationQueue;	// IMP=0x0010000000172040
- (_Bool)_hasEntitlements:(id)arg1;	// IMP=0x0010000000171fe5
- (void)_cancelBackoffRetryTimer;	// IMP=0x0010000000171faf
- (void)_cancelBackoffRetry;	// IMP=0x0010000000171f8a
- (void)setInternalSettingsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000171e09
- (void)reportEventsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000171a10
- (void)recordAnalyticsWithMetricsDialogEventWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000171686
- (void)insertEventWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001712f8
- (void)getInternalSettingsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001711e4
- (void)configureDuet;	// IMP=0x00100000001711de
- (void)recordAnalyticsWithMetricsDialogEvent:(id)arg1 forTopic:(id)arg2;	// IMP=0x0010000000170f6d
- (void)observeXPCServer:(id)arg1;	// IMP=0x0010000000170eab
- (void)dealloc;	// IMP=0x0010000000170dbd
- (id)init;	// IMP=0x0010000000170cd8

@end

