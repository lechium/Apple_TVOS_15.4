//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/GCDeviceHapticCapabilityInfo-Protocol.h>
#import <GameController/NSSecureCoding-Protocol.h>

@class GCController, GCDeviceHaptics, GCHapticCapabilityGraph, NSArray, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

@interface GCHapticCapabilities : NSObject <NSSecureCoding, GCDeviceHapticCapabilityInfo>
{
    NSArray *_hapticEnginesInfo;	// 8 = 0x8
    GCController *_controller;	// 16 = 0x10
    _Bool _initialized;	// 24 = 0x18
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 32 = 0x20
    GCHapticCapabilityGraph *_capabilityGraph;	// 40 = 0x28
    GCDeviceHaptics *_deviceHaptics;	// 48 = 0x30
    NSArray *_hapticEngines;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001a4e8
- (void).cxx_destruct;	// IMP=0x000000000001a496
@property(readonly, nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
@property(copy) NSArray *hapticEngines; // @synthesize hapticEngines=_hapticEngines;
@property(readonly) GCDeviceHaptics *deviceHaptics; // @synthesize deviceHaptics=_deviceHaptics;
@property(readonly) GCHapticCapabilityGraph *capabilityGraph; // @synthesize capabilityGraph=_capabilityGraph;
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (void)setController:(id)arg1;	// IMP=0x000000000001a3df
- (void)removeHapticEngines;	// IMP=0x000000000001a272
- (void)initializeHapticEngines;	// IMP=0x0000000000019b4e
- (id)init;	// IMP=0x0000000000019aef
- (id)initWithIdentifier:(id)arg1 hapticEnginesInfo:(id)arg2 hapticCapabilityGraph:(id)arg3;	// IMP=0x00000000000199fd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001a747
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001a4f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
