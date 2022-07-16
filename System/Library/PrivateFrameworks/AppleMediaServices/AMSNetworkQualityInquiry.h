//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSPromise, NSArray;

@interface AMSNetworkQualityInquiry : NSObject
{
    NSArray *_lastKnownReports;	// 8 = 0x8
    long long _lastReportRefreshTimestamp;	// 16 = 0x10
    AMSPromise *_currentInvestigation;	// 24 = 0x18
}

+ (_Bool)isEntitled;	// IMP=0x00000000001b0f36
+ (void)updateLastConnectionReportWithTask:(id)arg1;	// IMP=0x00000000001b0d88
+ (id)reportForTask:(id)arg1 fromReports:(id)arg2;	// IMP=0x00000000001b0bc2
+ (id)lastConnectionReport;	// IMP=0x00000000001b0b9c
+ (id)sharedInstance;	// IMP=0x00000000001b0857
- (void).cxx_destruct;	// IMP=0x00000000001b10cc
- (id)investigateNetworks;	// IMP=0x00000000001b0b43
- (void)dealloc;	// IMP=0x00000000001b0b14
- (id)init;	// IMP=0x00000000001b09f6

@end

