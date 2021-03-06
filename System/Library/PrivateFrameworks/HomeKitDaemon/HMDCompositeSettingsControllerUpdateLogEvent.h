//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemon/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDictionary, NSString;

@interface HMDCompositeSettingsControllerUpdateLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>
{
    NSString *_keyPath;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000047d09a
- (id)dictionaryRepresentation;	// IMP=0x000000000047cf03
- (id)initWithKeyPath:(id)arg1 date:(id)arg2;	// IMP=0x000000000047ce60
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end

