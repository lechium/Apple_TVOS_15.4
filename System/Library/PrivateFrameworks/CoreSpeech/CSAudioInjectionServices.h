//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSAudioInjectionServices : NSObject
{
}

+ (void)primaryInputDeviceUUIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f4d0e
+ (void)disconnectDeviceWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f467d
+ (void)connectDeviceWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f3fec
+ (void)injectAudio:(id)arg1 toDeviceWithUUID:(id)arg2 withfadingTimeWindowLength:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000f3ae1
+ (void)injectAudio:(id)arg1 toDeviceWithUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f3ac6
+ (void)createAudioInjectionDeviceWithType:(long long)arg1 deviceName:(id)arg2 deviceID:(id)arg3 productID:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000f327f
+ (void)pingpong:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f2f50
+ (_Bool)audioInjectionEnabled;	// IMP=0x00000000000f2e7a
+ (_Bool)setAudioInjectionMode:(_Bool)arg1;	// IMP=0x00000000000f2d9a
+ (id)getAudioInjectionXPCConnection;	// IMP=0x00000000000f2d29

@end

