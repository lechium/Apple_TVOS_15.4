//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, TRIExcessiveStaleFactorsUsageTimer, TRITrackingId;

@interface TRIClientGuardedData : NSObject
{
    TRITrackingId *trackingId;	// 8 = 0x8
    NSMutableDictionary *namespaceUpdateHandlerTokens;	// 16 = 0x10
    NSMutableDictionary *namespaceCallbacks;	// 24 = 0x18
    TRIExcessiveStaleFactorsUsageTimer *excessiveStaleFactorUsageTimer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000033af6

@end
