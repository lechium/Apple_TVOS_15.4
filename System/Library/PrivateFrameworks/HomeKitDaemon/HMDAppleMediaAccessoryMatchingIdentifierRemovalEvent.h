//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemon/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface HMDAppleMediaAccessoryMatchingIdentifierRemovalEvent : HMMLogEvent <HMMCoreAnalyticsLogging>
{
    NSNumber *_removalCount;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001efae0
@property(readonly, copy) NSNumber *removalCount; // @synthesize removalCount=_removalCount;
- (id)attributeDescriptions;	// IMP=0x00000000001ef9fe
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;
- (id)initWithRemovalCount:(long long)arg1;	// IMP=0x00000000001ef8d9

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end
