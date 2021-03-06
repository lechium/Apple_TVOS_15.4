//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/BSDebugDescriptionProviding-Protocol.h>
#import <UIKitCore/NSCopying-Protocol.h>

@class BKSHIDEventDeferringEnvironment, NSString;

__attribute__((visibility("hidden")))
@interface _UIEventDeferringDescriptor : NSObject <NSCopying, BSDebugDescriptionProviding>
{
    _Bool _compatibility;	// 8 = 0x8
    unsigned int _predicateContextID;	// 12 = 0xc
    int _targetPID;	// 16 = 0x10
    unsigned int _targetContextID;	// 20 = 0x14
    unsigned long long _scope;	// 24 = 0x18
    BKSHIDEventDeferringEnvironment *_environment;	// 32 = 0x20
    NSString *_displayHardwareIdentifier;	// 40 = 0x28
    NSString *_predicateSceneIdentityString;	// 48 = 0x30
    void *_predicateWindowPointer;	// 56 = 0x38
    void *_targetWindowPointer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000012c0f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000012c04
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000128f7
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000128a7
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000012857
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000012795
- (id)succinctDescription;	// IMP=0x0000000000012745
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001247b
- (id)init;	// IMP=0x000000000001233d

// Remaining properties
@property(readonly) Class superclass;

@end

