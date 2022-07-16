//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFAudioDeviceInfoMutating-Protocol.h>

@class AFAudioDeviceInfo, NSString, NSUUID;

@interface _AFAudioDeviceInfoMutation : NSObject <AFAudioDeviceInfoMutating>
{
    AFAudioDeviceInfo *_baseModel;	// 8 = 0x8
    NSString *_route;	// 16 = 0x10
    _Bool _isRemoteDevice;	// 24 = 0x18
    NSUUID *_deviceUID;	// 32 = 0x20
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasRoute:1;
        unsigned int hasIsRemoteDevice:1;
        unsigned int hasDeviceUID:1;
    } _mutationFlags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000d4c38
- (id)generate;	// IMP=0x00000000000d4b01
- (void)setDeviceUID:(id)arg1;	// IMP=0x00000000000d4ae1
- (void)setIsRemoteDevice:(_Bool)arg1;	// IMP=0x00000000000d4ad4
- (void)setRoute:(id)arg1;	// IMP=0x00000000000d4ab4
- (id)initWithBaseModel:(id)arg1;	// IMP=0x00000000000d4a49
- (id)init;	// IMP=0x00000000000d4a35

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
