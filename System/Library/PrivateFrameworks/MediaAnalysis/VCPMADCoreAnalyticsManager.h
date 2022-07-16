//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface VCPMADCoreAnalyticsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_managementQueue;	// 8 = 0x8
    unsigned long long _singleAnalyticsSentCount;	// 16 = 0x10
    unsigned long long _sessionAnalyticsSentCount;	// 24 = 0x18
    NSMutableDictionary *_sessionAnalytics;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x000000000007cc7d
- (void).cxx_destruct;	// IMP=0x000000000007dfb8
- (void)flush;	// IMP=0x000000000007dd57
- (void)sendSessionEvent:(id)arg1;	// IMP=0x000000000007daff
- (void)accumulateDoubleValue:(double)arg1 forField:(id)arg2 andEvent:(id)arg3;	// IMP=0x000000000007d648
- (void)accumulateInt64Value:(long long)arg1 forField:(id)arg2 andEvent:(id)arg3;	// IMP=0x000000000007d15a
- (void)setValue:(id)arg1 forField:(id)arg2 andEvent:(id)arg3;	// IMP=0x000000000007cdac
- (void)sendEvent:(id)arg1 withAnalytics:(id)arg2;	// IMP=0x000000000007cd9b
- (void)dealloc;	// IMP=0x000000000007cd0f
- (id)init;	// IMP=0x000000000007cbb0

@end
