//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MRAVOutputContext, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MROutputContextController
{
    MRAVOutputContext *_outputContext;	// 32 = 0x20
    float _masterVolume;	// 40 = 0x28
    unsigned int _masterVolumeControlCapabilities;	// 44 = 0x2c
    _Bool _localVolumeInitialized;	// 48 = 0x30
    _Bool _localVolumeControlCapabilitiesInitialized;	// 49 = 0x31
    NSMutableDictionary *_outputDeviceVolume;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_serialQueue;	// 64 = 0x40
    float _localVolume;	// 72 = 0x48
    unsigned int _localVolumeControlCapabilities;	// 76 = 0x4c
}

+ (id)sharedOutputContextController;	// IMP=0x000000000008d2f8
- (void).cxx_destruct;	// IMP=0x0000000000091192
@property(nonatomic) unsigned int localVolumeControlCapabilities; // @synthesize localVolumeControlCapabilities=_localVolumeControlCapabilities;
@property(nonatomic) float localVolume; // @synthesize localVolume=_localVolume;
- (void)_handleOutputDevicesReloadedNotification:(id)arg1;	// IMP=0x0000000000090694
- (void)_handleOutputDeviceRemovedNotification:(id)arg1;	// IMP=0x000000000009052d
- (void)_handleOutputDeviceDidChangeNotification:(id)arg1;	// IMP=0x00000000000904b8
- (void)_handleOutputDeviceAddedNotification:(id)arg1;	// IMP=0x000000000009023e
- (void)_handleOutputDeviceVolumeControlCapabilitiesDidChangeNotification:(id)arg1;	// IMP=0x000000000008fe65
- (void)_handleOutputDeviceVolumeDidChangeNotification:(id)arg1;	// IMP=0x000000000008fb2f
- (void)_handleLocalDeviceVolumeControlCapabilitiesDidChangeNotification:(id)arg1;	// IMP=0x000000000008f9aa
- (void)_handleLocalDeviceVolumeDidChangeNotification:(id)arg1;	// IMP=0x000000000008f827
- (id)setVolume:(float)arg1 outputDeviceUID:(id)arg2;	// IMP=0x000000000008f205
- (unsigned int)volumeControlCapabilitiesForOutputDeviceUID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008ec9c
- (float)volumeForOutputDeviceUID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008e5dd
- (id)uniqueIdentifier;	// IMP=0x000000000008e4b7
- (id)outputDevices;	// IMP=0x000000000008e135
@property(readonly, nonatomic) NSString *localDeviceUID;
- (unsigned int)volumeControlCapabilities;	// IMP=0x000000000008dca2
- (float)volume;	// IMP=0x000000000008dbc9
- (id)description;	// IMP=0x000000000008d9c3
- (void)dealloc;	// IMP=0x000000000008d94e
- (id)initWithOutputContext:(id)arg1;	// IMP=0x000000000008d39e

@end

