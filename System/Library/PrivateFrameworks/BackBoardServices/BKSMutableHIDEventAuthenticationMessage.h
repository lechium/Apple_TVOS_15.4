//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKSHIDEventHitTestLayerInformation;

@interface BKSMutableHIDEventAuthenticationMessage
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002cc77
@property(nonatomic) _Bool registrantEntitled; // @dynamic registrantEntitled;
@property(nonatomic) unsigned long long originIdentifier; // @dynamic originIdentifier;
@property(retain, nonatomic) BKSHIDEventHitTestLayerInformation *hitTestInformationFromEndEvent; // @dynamic hitTestInformationFromEndEvent;
@property(retain, nonatomic) BKSHIDEventHitTestLayerInformation *hitTestInformationFromStartEvent; // @dynamic hitTestInformationFromStartEvent;
@property(nonatomic) unsigned int eventType; // @dynamic eventType;
@property(nonatomic) unsigned int targetContextID; // @dynamic targetContextID;
@property(nonatomic) unsigned int targetSlotID; // @dynamic targetSlotID;
@property(nonatomic) unsigned long long context; // @dynamic context;
- (void)setDestinationAuditToken:(id)arg1;	// IMP=0x000000000002c9e1
@property(nonatomic) long long versionedPID; // @dynamic versionedPID;

@end

