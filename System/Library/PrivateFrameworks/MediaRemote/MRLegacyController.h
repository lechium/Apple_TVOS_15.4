//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/MRProtocolClientConnectionDelegate-Protocol.h>

@class MRExternalDevice, NSString;
@protocol MRLegacyControllerDelegate, OS_dispatch_queue;

@interface MRLegacyController : NSObject <MRProtocolClientConnectionDelegate>
{
    id <MRLegacyControllerDelegate> _delegate;	// 8 = 0x8
    NSString *_outputDeviceUID;	// 16 = 0x10
    MRExternalDevice *_externalDevice;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000504b
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) MRExternalDevice *externalDevice; // @synthesize externalDevice=_externalDevice;
@property(copy, nonatomic) NSString *outputDeviceUID; // @synthesize outputDeviceUID=_outputDeviceUID;
@property(nonatomic) __weak id <MRLegacyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleVolumeCapabilitiesDidChangeNotification:(id)arg1;	// IMP=0x0000000000004e02
- (void)setupExternalDevice;	// IMP=0x0000000000004a96
- (void)modifyTopologyAddingDevices:(id)arg1 removingDevices:(id)arg2 settingDevices:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000049c7
- (void)dealloc;	// IMP=0x0000000000004989
- (void)tearDown;	// IMP=0x0000000000004955
- (void)setVolume:(float)arg1 forOutputDeviceID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000048be
- (void)setMasterVolume:(float)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000483e
- (void)getOutputDeviceVolumeCapabilities:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000047b1
- (void)getMasterVolumeCapabilitiesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004743
- (void)getOutputDeviceVolume:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000046b6
- (void)getMasterVolumeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004648
- (void)setOutputDeviceIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004626
- (void)removeOutputDeviceIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000004604
- (void)addOutputDeviceIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000045e5
- (void)connect;	// IMP=0x0000000000004543
- (id)initWithOutputDeviceUID:(id)arg1;	// IMP=0x00000000000044ab
- (id)initWithOutputDevice:(id)arg1;	// IMP=0x000000000000440b
- (id)initWithAVOutputDevice:(id)arg1;	// IMP=0x0000000000004340
- (id)initWithExternalDevice:(id)arg1 outputDeviceUID:(id)arg2;	// IMP=0x0000000000004273

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
