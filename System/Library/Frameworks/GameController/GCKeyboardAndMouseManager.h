//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCKeyboard, GCKeyboardAndMouseEmulatedController, GCMouse, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GCKeyboardAndMouseManager : NSObject
{
    NSMutableDictionary *_devicesByRegistryID;	// 8 = 0x8
    GCKeyboard *_coalescedKeyboard;	// 16 = 0x10
    GCMouse *_currentMouse;	// 24 = 0x18
    GCKeyboardAndMouseEmulatedController *_emulatedController;	// 32 = 0x20
    int _emulatedControllerMapping;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_devicesQueue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000a31a5
@property int emulatedControllerMapping; // @synthesize emulatedControllerMapping=_emulatedControllerMapping;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *devicesQueue; // @synthesize devicesQueue=_devicesQueue;
- (id)mice;	// IMP=0x00000000000a2ebc
@property(retain) GCMouse *currentMouse;
@property(readonly) GCKeyboard *coalescedKeyboard;
- (void)handleMouseEventAsFrontmostApp:(id)arg1;	// IMP=0x00000000000a2beb
- (void)handleKeyboardEventAsFrontmostApp:(id)arg1;	// IMP=0x00000000000a2be5
- (_Bool)handleHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000000000a269f
- (void)removeDevice:(id)arg1 registryID:(id)arg2;	// IMP=0x00000000000a2591
- (void)publishDevice:(id)arg1 withNotificationName:(id)arg2;	// IMP=0x00000000000a232a
- (void)unpublishDevice:(id)arg1 withNotificationName:(id)arg2;	// IMP=0x00000000000a20de
- (void)addKeyboard:(id)arg1;	// IMP=0x00000000000a1f97
- (void)addMouse:(id)arg1;	// IMP=0x00000000000a1e72
- (void)storeDevice:(id)arg1;	// IMP=0x00000000000a1ba6
- (void)_queue_removeDevice:(id)arg1 registryID:(id)arg2;	// IMP=0x00000000000a191f
- (void)updateCurrentDeviceAfterDisconnecting:(id)arg1;	// IMP=0x00000000000a18ce
- (void)updateCurrentMouseAfterDisconnecting:(id)arg1;	// IMP=0x00000000000a1635
- (void)updateCurrentDevice:(id)arg1;	// IMP=0x00000000000a15e4
- (void)removeDeviceWithServiceRef:(struct __IOHIDServiceClient *)arg1;	// IMP=0x00000000000a13b9
- (_Bool)addDeviceWithServiceRef:(struct __IOHIDServiceClient *)arg1;	// IMP=0x00000000000a1254
- (void)ensureEmulatedControllerWithDevice:(id)arg1 added:(_Bool)arg2;	// IMP=0x00000000000a1045
- (void)setEmulatedControllerEnabled:(int)arg1;	// IMP=0x00000000000a0fb8
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000a0e56
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000a0c56

@end

