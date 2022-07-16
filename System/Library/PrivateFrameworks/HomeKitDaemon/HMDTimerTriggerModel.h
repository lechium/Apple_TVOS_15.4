//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDBackingStoreModelObjectCDRepresentable-Protocol.h>

@class NSData, NSDate, NSString;

@interface HMDTimerTriggerModel <HMDBackingStoreModelObjectCDRepresentable>
{
}

+ (id)properties;	// IMP=0x0000000000294a44
+ (Class)cd_entityClass;	// IMP=0x0000000000749757
+ (id)cd_parentReferenceName;	// IMP=0x000000000074974a
- (id)createPayload;	// IMP=0x0000000000294792

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSDate *fireDate; // @dynamic fireDate;
@property(copy, nonatomic) NSData *fireDateTimeZone; // @dynamic fireDateTimeZone;
@property(copy, nonatomic) NSData *fireRepeatInterval; // @dynamic fireRepeatInterval;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSData *recurrences; // @dynamic recurrences;
@property(copy, nonatomic) NSString *significantEvent; // @dynamic significantEvent;
@property(copy, nonatomic) NSData *significantEventOffset; // @dynamic significantEventOffset;
@property(readonly) Class superclass;

@end
