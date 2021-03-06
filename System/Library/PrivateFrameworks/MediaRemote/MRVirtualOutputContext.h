//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString;

@interface MRVirtualOutputContext
{
    NSString *_uniqueIdentifier;	// 8 = 0x8
    NSMutableArray *_outputDevices;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001b9d5e
- (void)resetPredictedOutputDevice;	// IMP=0x00000000001b9d58
- (void)removeAllOutputDevicesWithCallbackQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b9d52
- (void)setOutputDevices:(id)arg1 withPassword:(id)arg2 withCallbackQueue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000001b9d4c
- (void)setOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000001b9d46
- (void)removeOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000001b9d40
- (void)addOutputDevices:(id)arg1 initiator:(id)arg2 withCallbackQueue:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00000000001b9d3a
- (_Bool)supportsMultipleBluetoothOutputDevices;	// IMP=0x00000000001b9d32
- (void)setVolume:(float)arg1;	// IMP=0x00000000001b9d2c
- (float)volume;	// IMP=0x00000000001b9bb0
- (_Bool)supportsVolumeControl;	// IMP=0x00000000001b9ba8
- (_Bool)isVolumeControlAvailable;	// IMP=0x00000000001b9a6f
- (id)predictedOutputDevice;	// IMP=0x00000000001b9a67
- (id)outputDevices;	// IMP=0x00000000001b9a5f
- (unsigned int)type;	// IMP=0x00000000001b9a54
- (id)contextID;	// IMP=0x00000000001b9a42
- (id)uniqueIdentifier;	// IMP=0x00000000001b9a2d
- (id)initWithUID:(id)arg1;	// IMP=0x00000000001b9915

@end

