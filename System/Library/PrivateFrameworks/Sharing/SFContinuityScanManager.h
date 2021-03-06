//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sharing/SFContinuityScannerClient-Protocol.h>

@class NSHashTable, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface SFContinuityScanManager <SFContinuityScannerClient>
{
    NSMutableSet *_foundDevices;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
    unsigned long long _scanTypes;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x00000000000421af
- (void).cxx_destruct;	// IMP=0x000000000004356d
@property unsigned long long scanTypes; // @synthesize scanTypes=_scanTypes;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain) NSMutableSet *foundDevices; // @synthesize foundDevices=_foundDevices;
- (_Bool)shouldEscapeXpcTryCatch;	// IMP=0x00000000000434f5
- (id)remoteObjectInterface;	// IMP=0x00000000000434d5
- (id)exportedInterface;	// IMP=0x0000000000043356
- (id)machServiceName;	// IMP=0x0000000000043349
- (void)pairedDevicesChanged:(id)arg1;	// IMP=0x00000000000431b4
- (void)lostDeviceWithDevice:(id)arg1;	// IMP=0x0000000000042f45
- (void)foundDeviceWithDevice:(id)arg1;	// IMP=0x0000000000042cd6
- (void)receivedAdvertisement:(id)arg1;	// IMP=0x0000000000042a5f
- (void)onqueue_connectionInterrupted;	// IMP=0x00000000000428b5
- (void)onqueue_connectionEstablished;	// IMP=0x0000000000042850
- (void)activityPayloadFromDeviceUniqueID:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000004259e
- (void)scanForTypes:(unsigned long long)arg1;	// IMP=0x0000000000042420
- (void)_getRemoteObjectProxyOnQueue:(CDUnknownBlockType)arg1;	// IMP=0x000000000004240e
- (void)removeObserver:(id)arg1;	// IMP=0x000000000004233e
- (void)addObserver:(id)arg1;	// IMP=0x00000000000422da
- (id)init;	// IMP=0x0000000000042211

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

