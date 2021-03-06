//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/GCDevice-Protocol.h>
#import <GameController/GCDeviceLegacy-Protocol.h>
#import <GameController/NSSecureCoding-Protocol.h>

@class GCController, GCMouseInput, GCPhysicalInputProfile, NSArray, NSString;
@protocol GCNamedProfile, OS_dispatch_queue;

@interface GCMouse : NSObject <NSSecureCoding, GCDeviceLegacy, GCDevice>
{
    GCController *_proxyController;	// 8 = 0x8
}

+ (id)mice;	// IMP=0x000000000000b054
+ (id)current;	// IMP=0x000000000000af10
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000b323
- (void).cxx_destruct;	// IMP=0x000000000000b1b2
@property(retain, nonatomic) GCController *proxyController; // @synthesize proxyController=_proxyController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) GCPhysicalInputProfile *physicalInputProfile;
@property(readonly, copy, nonatomic) NSString *vendorName;
@property(readonly, nonatomic) NSString *productCategory;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue;
@property(readonly, nonatomic) GCMouseInput *mouseInput;
- (id)_legacy_physicalInputProfile;	// IMP=0x000000000000b671
- (id)_legacy_physicalInputProfileName;	// IMP=0x000000000000b65b
- (void)_legacy_setPlayerIndex:(long long)arg1;	// IMP=0x000000000000b645
- (long long)_legacy_playerIndex;	// IMP=0x000000000000b62f
- (unsigned int)sampleRate;	// IMP=0x000000000000b619
- (_Bool)isATVRemote;	// IMP=0x000000000000b603
- (void)clearServiceRef;	// IMP=0x000000000000b5ed
- (void)removeServiceRef:(struct __IOHIDServiceClient *)arg1;	// IMP=0x000000000000b5d7
- (_Bool)hasServiceRef:(struct __IOHIDServiceClient *)arg1;	// IMP=0x000000000000b5c1
- (void)addServiceRef:(id)arg1;	// IMP=0x000000000000b5ab
- (void)addServiceRefsWithDevice:(id)arg1;	// IMP=0x000000000000b595
- (void *)createInputBufferForDevice:(struct __IOHIDDevice *)arg1 withSize:(unsigned long long)arg2;	// IMP=0x000000000000b57f
- (void)handleEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000000000b517
- (id)_legacy_description;	// IMP=0x000000000000b501
- (_Bool)_legacy_isEqualToController:(id)arg1;	// IMP=0x000000000000b4eb
- (id)_legacy_productCategory;	// IMP=0x000000000000b4d5
- (void)setVendorName:(id)arg1;	// IMP=0x000000000000b4bf
- (id)_legacy_vendorName;	// IMP=0x000000000000b4a9
- (_Bool)_legacy_isAttachedToDevice;	// IMP=0x000000000000b4a1
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
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000b2ac
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000b289
- (id)initWithServiceRef:(struct __IOHIDServiceClient *)arg1;	// IMP=0x000000000000b1c2

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

