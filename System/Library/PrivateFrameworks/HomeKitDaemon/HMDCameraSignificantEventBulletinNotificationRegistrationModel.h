//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSUUID;

@interface HMDCameraSignificantEventBulletinNotificationRegistrationModel
{
}

+ (id)uuidForRemoteDeviceIdentifier:(id)arg1 cameraIdentifier:(id)arg2;	// IMP=0x00000000006e717d
+ (id)hmbProperties;	// IMP=0x00000000006e710a
- (id)createRegistration;	// IMP=0x00000000006e76b7
- (id)initWithSignificantEventBulletinNotificationRegistration:(id)arg1;	// IMP=0x00000000006e7421

// Remaining properties
@property(retain, nonatomic) NSUUID *cameraIdentifier; // @dynamic cameraIdentifier;
@property(retain, nonatomic) NSNumber *notificationModes; // @dynamic notificationModes;
@property(retain, nonatomic) NSNumber *personFamiliarityOptions; // @dynamic personFamiliarityOptions;
@property(retain, nonatomic) NSNumber *significantEventTypes; // @dynamic significantEventTypes;

@end

