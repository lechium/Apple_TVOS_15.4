//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDictionary, NSString, NSUUID;

@interface HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent <HMMCoreAnalyticsLogging>
{
    NSUUID *_stagedDestinationIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000666759
@property(readonly, copy) NSUUID *stagedDestinationIdentifier; // @synthesize stagedDestinationIdentifier=_stagedDestinationIdentifier;
- (id)initWithStagedDestinationIdentifier:(id)arg1 isTriggeredOnControllerDevice:(id)arg2 userPrivilege:(id)arg3;	// IMP=0x0000000000666655
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end

