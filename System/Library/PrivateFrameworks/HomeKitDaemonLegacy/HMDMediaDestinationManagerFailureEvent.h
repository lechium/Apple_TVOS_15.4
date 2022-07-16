//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemonLegacy/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface HMDMediaDestinationManagerFailureEvent : HMMLogEvent <HMMCoreAnalyticsLogging>
{
    NSString *_errorDomain;	// 8 = 0x8
    NSNumber *_errorCode;	// 16 = 0x10
    NSNumber *_failureCode;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000a829c6
@property(readonly, copy) NSNumber *failureCode; // @synthesize failureCode=_failureCode;
@property(readonly, copy) NSNumber *errorCode; // @synthesize errorCode=_errorCode;
@property(readonly, copy) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
- (id)attributeDescriptions;	// IMP=0x0000000000a827e8
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;
- (id)initWithFailureCode:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x0000000000a8259e

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end

