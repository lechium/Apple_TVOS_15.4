//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemonLegacy/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface HMDAppleMediaAccessoryMatchingIdentifierEvent : HMMLogEvent <HMMCoreAnalyticsLogging>
{
    NSNumber *_matchingIdentifiersCount;	// 8 = 0x8
    NSNumber *_expectedRemovalCount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000060b23
@property(readonly, copy) NSNumber *expectedRemovalCount; // @synthesize expectedRemovalCount=_expectedRemovalCount;
@property(readonly, copy) NSNumber *matchingIdentifiersCount; // @synthesize matchingIdentifiersCount=_matchingIdentifiersCount;
- (id)attributeDescriptions;	// IMP=0x00000000000609cb
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;
- (id)initWithMatchingIdentifiersCount:(long long)arg1;	// IMP=0x0000000000060824

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end
