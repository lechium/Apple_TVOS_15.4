//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/GCDevice-Protocol.h>
#import <GameController/GCDeviceLegacy-Protocol.h>
#import <GameController/NSSecureCoding-Protocol.h>

@class GCController, GCKeyboardInput, GCPhysicalInputProfile, NSArray, NSString;
@protocol GCNamedProfile, OS_dispatch_queue;

@interface GCKeyboard : NSObject <NSSecureCoding, GCDeviceLegacy, GCDevice>
{
    GCController *_proxyController;	// 8 = 0x8
}

+ (id)coalescedKeyboard;	// IMP=0x000000000007cdda
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007d292
+ (id)keyboardWithKeyboardInput;	// IMP=0x000000000007d152
+ (void)__setLogger__:(CDUnknownBlockType)arg1;	// IMP=0x000000000007d087
+ (void)__openXPC_and_CBApplicationDidBecomeActive__;	// IMP=0x000000000007d06e
+ (void)__open__;	// IMP=0x000000000007d055
- (void).cxx_destruct;	// IMP=0x000000000007d045
@property(retain, nonatomic) GCController *proxyController; // @synthesize proxyController=_proxyController;
- (id)initWithProxyController:(id)arg1;	// IMP=0x000000000007cfcf
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) GCPhysicalInputProfile *physicalInputProfile;
@property(readonly, copy, nonatomic) NSString *vendorName;
@property(readonly, nonatomic) NSString *productCategory;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property(readonly, nonatomic) GCKeyboardInput *keyboardInput;
- (id)_legacy_physicalInputProfile;	// IMP=0x000000000007d58e
- (id)_legacy_physicalInputProfileName;	// IMP=0x000000000007d578
- (void)_legacy_setPlayerIndex:(long long)arg1;	// IMP=0x000000000007d562
- (long long)_legacy_playerIndex;	// IMP=0x000000000007d54c
- (unsigned int)sampleRate;	// IMP=0x000000000007d536
- (_Bool)isATVRemote;	// IMP=0x000000000007d520
- (void)clearServiceRef;	// IMP=0x000000000007d50a
- (void)removeServiceRef:(struct __IOHIDServiceClient *)arg1;	// IMP=0x000000000007d4f4
- (_Bool)hasServiceRef:(struct __IOHIDServiceClient *)arg1;	// IMP=0x000000000007d4de
- (void)addServiceRef:(id)arg1;	// IMP=0x000000000007d4c8
- (void)addServiceRefsWithDevice:(id)arg1;	// IMP=0x000000000007d4b2
- (void *)createInputBufferForDevice:(struct __IOHIDDevice *)arg1 withSize:(unsigned long long)arg2;	// IMP=0x000000000007d49c
- (void)handleEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000000007d486
- (id)_legacy_description;	// IMP=0x000000000007d470
- (_Bool)_legacy_isEqualToController:(id)arg1;	// IMP=0x000000000007d45a
- (id)_legacy_productCategory;	// IMP=0x000000000007d444
- (void)setVendorName:(id)arg1;	// IMP=0x000000000007d42e
- (id)_legacy_vendorName;	// IMP=0x000000000007d418
- (_Bool)_legacy_isAttachedToDevice;	// IMP=0x000000000007d410
@property(nonatomic, getter=isPublished) _Bool published;
@property(nonatomic, getter=areAllHIDDevicesConnected) _Bool allHIDDevicesConnected;
@property(nonatomic, getter=isForwarded) _Bool forwarded;
@property(copy, nonatomic) NSString *debugName;
@property(readonly, nonatomic) unsigned long long deviceHash;
@property(retain, nonatomic) NSString *physicalDeviceUniqueID;
@property(readonly, nonatomic) unsigned int service;
@property(readonly, nonatomic) NSArray *hidServices;
@property(retain, nonatomic) NSString *uniqueIdentifier;
@property(retain, nonatomic) GCPhysicalInputProfile<GCNamedProfile> *profile;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007d21b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007d1f8
- (id)initWithServiceRef:(struct __IOHIDServiceClient *)arg1;	// IMP=0x000000000007d0a0

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

