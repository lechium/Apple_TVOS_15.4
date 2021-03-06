//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/_GCControllerProfile-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _GCSonyDualShockControllerProfile : NSObject <_GCControllerProfile>
{
}

+ (id)physicalDeviceGetHapticCapabilityGraph:(id)arg1;	// IMP=0x0000000000059446
+ (id)physicalDeviceGetHapticCapabilities:(id)arg1;	// IMP=0x000000000005935f
+ (void)physicalDevice:(id)arg1 getBatteryWithReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000059104
+ (void)physicalDevice:(id)arg1 setSensorsActive:(_Bool)arg2;	// IMP=0x00000000000590b5
+ (void)physicalDevice:(id)arg1 getSensorsEnabledWithReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000058e88
+ (_Bool)physicalDeviceSupportsMotion:(id)arg1;	// IMP=0x0000000000058e80
+ (void)physicalDevice:(id)arg1 setLight:(id)arg2;	// IMP=0x0000000000058d74
+ (void)physicalDevice:(id)arg1 getLightWithReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000058ad2
+ (id)logicalDevice:(id)arg1 makeControllerMotionWithIdentifier:(id)arg2;	// IMP=0x0000000000058a57
+ (id)logicalDevice:(id)arg1 makeControllerPhysicalInputProfileWithIdentifier:(id)arg2;	// IMP=0x000000000005894e
+ (id)logicalDeviceControllerProductCategory:(id)arg1;	// IMP=0x000000000005893a
+ (void)deviceManager:(id)arg1 prepareLogicalDevice:(id)arg2;	// IMP=0x0000000000058922
+ (void)deviceManager:(id)arg1 willPublishPhysicalDevice:(id)arg2;	// IMP=0x000000000005890a
+ (id)deviceManager;	// IMP=0x00000000000587dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

