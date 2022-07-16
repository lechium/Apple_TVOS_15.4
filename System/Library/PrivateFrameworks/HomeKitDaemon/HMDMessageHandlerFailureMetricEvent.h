//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemon/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDictionary, NSString;

@interface HMDMessageHandlerFailureMetricEvent : HMMLogEvent <HMMCoreAnalyticsLogging>
{
    NSString *_messageName;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002c0237
@property(readonly, copy) NSString *type; // @synthesize type=_type;
@property(readonly, copy) NSString *messageName; // @synthesize messageName=_messageName;
- (id)initWithFailureType:(unsigned long long)arg1 messageName:(id)arg2;	// IMP=0x00000000002c0154
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end

