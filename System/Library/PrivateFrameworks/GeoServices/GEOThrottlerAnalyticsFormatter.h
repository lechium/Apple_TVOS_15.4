//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GEOThrottlerAnalyticsFormatter : NSObject
{
    NSMutableDictionary *_throttlerAggregatedInfo;	// 8 = 0x8
}

+ (id)sharedThrottlerFormatter;	// IMP=0x00000000014ef20a
- (void).cxx_destruct;	// IMP=0x00000000014f008c
- (void)captureThrottledReqsForKeyPath:(id)arg1 maxReqCount:(id)arg2 policyTimeWindow:(double)arg3;	// IMP=0x00000000014efd58
- (_Bool)hasInitialInfoForKeyPath:(id)arg1;	// IMP=0x00000000014efb82
- (_Bool)hasThrottledInfoForKeyPath:(id)arg1;	// IMP=0x00000000014ef7a1
- (void)addThrottledReqForKeyPath:(id)arg1 at:(id)arg2;	// IMP=0x00000000014ef528
- (void)setRequestInfoForKeyPath:(id)arg1 at:(id)arg2 kind:(CDStruct_d1a7ebee)arg3 appId:(id)arg4;	// IMP=0x00000000014ef3fb
- (int)throttleTypeForString:(id)arg1;	// IMP=0x00000000014ef3d1
- (int)throttleModeForString:(id)arg1;	// IMP=0x00000000014ef364
- (int)networkServiceForRequestKind:(CDStruct_d1a7ebee)arg1;	// IMP=0x00000000014ef25f
- (id)init;	// IMP=0x00000000014ef1b4

@end

