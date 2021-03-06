//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMActionSet, HMFUnfairLock, NSString, NSUUID, _HMContext;

@interface HMAction : NSObject <HMObjectMerge, NSSecureCoding, NSCopying>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    NSUUID *_uniqueIdentifier;	// 16 = 0x10
    NSUUID *_uuid;	// 24 = 0x18
    _HMContext *_context;	// 32 = 0x20
    HMActionSet *_actionSet;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001e5f48
+ (id)_actionWithInfo:(id)arg1 home:(id)arg2;	// IMP=0x00000000001e5ede
- (void).cxx_destruct;	// IMP=0x00000000001e5dac
@property __weak HMActionSet *actionSet; // @synthesize actionSet=_actionSet;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
- (id)encodeAsProtoBuf;	// IMP=0x00000000001e5ce8
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x00000000001e5ce0
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e5bb0
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e5aa2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001e59ec
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e58ca
- (_Bool)_handleUpdates:(id)arg1;	// IMP=0x00000000001e58c2
- (id)_serializeForAdd;	// IMP=0x00000000001e580a
@property(readonly) _Bool requiresDeviceUnlock;
@property(readonly, getter=isValid) _Bool valid;
@property(copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly) unsigned long long type;
- (void)__configureWithContext:(id)arg1 actionSet:(id)arg2;	// IMP=0x00000000001e5511
- (void)_unconfigure;	// IMP=0x00000000001e54e1
- (void)_unconfigureContext;	// IMP=0x00000000001e5479
- (id)init;	// IMP=0x00000000001e541f
- (id)initWithUUID:(id)arg1;	// IMP=0x00000000001e5369

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

