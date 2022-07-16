//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AVCaptureDeviceDiscoverySession : NSObject
{
    NSArray *_deviceTypes;	// 8 = 0x8
    long long _position;	// 16 = 0x10
    NSString *_mediaType;	// 24 = 0x18
    NSArray *_devices;	// 32 = 0x20
    NSArray *_supportedMultiCamDeviceSets;	// 40 = 0x28
}

+ (id)allSupportedMultiCamDeviceSets;	// IMP=0x000000000000f3ec
+ (id)allVirtualDevices;	// IMP=0x000000000000f3a5
+ (id)allVirtualDeviceTypes;	// IMP=0x000000000000f312
+ (id)allAudioDevices;	// IMP=0x000000000000f2c3
+ (id)allAudioDeviceTypes;	// IMP=0x000000000000f268
+ (id)allPointCloudDevices;	// IMP=0x000000000000f219
+ (id)allPointCloudDeviceTypes;	// IMP=0x000000000000f1be
+ (id)allVideoDevices;	// IMP=0x000000000000f16f
+ (id)allVideoDeviceTypes;	// IMP=0x000000000000f0b2
+ (id)allDevices;	// IMP=0x000000000000f06b
+ (id)allDeviceTypes;	// IMP=0x000000000000ef92
+ (id)discoverySessionWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3;	// IMP=0x000000000000e3c1
+ (void)initialize;	// IMP=0x000000000000e3b0
@property(readonly, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(readonly, nonatomic) NSArray *supportedMultiCamDeviceSets;
- (void)_handleDeviceConnectedDisconnectedNotification:(id)arg1;	// IMP=0x000000000000e886
- (id)description;	// IMP=0x000000000000e67a
- (void)dealloc;	// IMP=0x000000000000e5b9
- (id)init;	// IMP=0x000000000000e567
- (id)_initWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 allowIOSMacEnvironment:(_Bool)arg4 prefersUnsuspendedAndAllowsAnyPosition:(_Bool)arg5;	// IMP=0x000000000000e437

@end
