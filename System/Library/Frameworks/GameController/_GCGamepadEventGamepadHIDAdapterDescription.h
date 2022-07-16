//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/_GCGamepadEventSourceDescription-Protocol.h>

@class NSString, _GCCControllerHIDServiceInfoDescription, _GCGamepadEventGamepadHIDAdapter;
@protocol _GCHIDEventSourceDescription;

@interface _GCGamepadEventGamepadHIDAdapterDescription : NSObject <_GCGamepadEventSourceDescription>
{
    id <_GCHIDEventSourceDescription> _sourceDescription;	// 8 = 0x8
    _GCCControllerHIDServiceInfoDescription *_serviceDescription;	// 16 = 0x10
    _GCGamepadEventGamepadHIDAdapter *_materializedObject;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005a846
- (void).cxx_destruct;	// IMP=0x000000000005ab53
- (id)materializeWithContext:(id)arg1;	// IMP=0x000000000005aa61
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005a9f3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005a90a
- (id)init;	// IMP=0x000000000005a8e7
- (id)initWithSource:(id)arg1 service:(id)arg2;	// IMP=0x000000000005a84e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
