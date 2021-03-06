//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSRemoteDarwinDeviceInfo : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00000000000f5439
- (_Bool)isPrimaryVoiceTriggerDeviceWithUUID:(id)arg1;	// IMP=0x00000000000f5495
- (id)fetchRichDeviceUIDStringFromUUID:(id)arg1;	// IMP=0x00000000000f548d
- (_Bool)isRemoteDarwinConnectedWithUUID:(id)arg1;	// IMP=0x00000000000f5485
- (_Bool)hasDarwinDeviceHandleVoiceTrigger;	// IMP=0x00000000000f547d
- (_Bool)hasDarwinDeviceConnected;	// IMP=0x00000000000f5475
- (id)fetchDeviceUUIDStringFromUID:(id)arg1;	// IMP=0x00000000000f546d
- (void)notifyVoiceTriggerDisabledWithDeviceUUID:(id)arg1;	// IMP=0x00000000000f5467
- (void)notifyVoiceTriggerEnabledWithDeviceUUID:(id)arg1;	// IMP=0x00000000000f5461
- (void)allDeviceDisconnected;	// IMP=0x00000000000f545b
- (void)deviceDisconnectedWithUUID:(id)arg1;	// IMP=0x00000000000f5455
- (void)deviceConnectedWithUUID:(id)arg1;	// IMP=0x00000000000f544f
- (id)init;	// IMP=0x00000000000f5441

@end

