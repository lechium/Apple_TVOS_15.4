//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemonLegacy/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDictionary, NSString;

@interface HMDMediaDestinationControllerDailySetDestinationEvent : HMMLogEvent <HMMCoreAnalyticsLogging>
{
    NSString *_existingDestinationType;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000006667f0
@property(readonly, copy) NSString *existingDestinationType; // @synthesize existingDestinationType=_existingDestinationType;
- (id)initWithExistingDestinationType:(id)arg1;	// IMP=0x000000000066676c
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end

