//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NSSecureCoding-Protocol.h>

@class NRRegistry, NSMutableArray, NSMutableDictionary, NSPointerArray, NSUUID;

@interface NRDevice : NSObject <NSSecureCoding>
{
    NRDevice *_me;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    NSUUID *_pairingID;	// 24 = 0x18
    NRRegistry *_registry;	// 32 = 0x20
    NSMutableDictionary *_oldPropertiesForChangeNotifications;	// 40 = 0x28
    NSMutableDictionary *_properties;	// 48 = 0x30
    NSMutableDictionary *_observers;	// 56 = 0x38
    NSPointerArray *_promiscuousObservers;	// 64 = 0x40
    NSMutableDictionary *_changeBlocks;	// 72 = 0x48
    NSMutableArray *_promiscuousChangeBlocks;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004b501
- (void).cxx_destruct;	// IMP=0x000000000004c329
@property(readonly, nonatomic) NSUUID *pairingID;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x000000000004c275
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000004c1fb
- (void)dealloc;	// IMP=0x000000000004c1a0
- (void)unregisterForPropertyChanges:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004bc5e
- (void)registerForPropertyChanges:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004b77f
- (id)propertyNames;	// IMP=0x000000000004b509
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004b4fb
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004b3be
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000004ad03
- (id)valueForProperty:(id)arg1;	// IMP=0x000000000004a9bb
- (void)removePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;	// IMP=0x000000000004a2a1
- (void)addPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;	// IMP=0x0000000000049de9
- (id)description;	// IMP=0x0000000000049be0
- (void)invalidate;	// IMP=0x0000000000049b61
- (void)_setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x00000000000498c9
- (id)initWithRegistry:(id)arg1 diff:(id)arg2 pairingID:(id)arg3 notify:(_Bool)arg4;	// IMP=0x0000000000048924
- (id)init;	// IMP=0x000000000004891b
- (_Bool)migrationConfirmed;	// IMP=0x0000000000030e87
- (id)migrationError;	// IMP=0x0000000000030e39
- (_Bool)archived;	// IMP=0x0000000000030deb
- (_Bool)canMigrate;	// IMP=0x0000000000030cc5
- (_Bool)supportsCapability:(id)arg1;	// IMP=0x000000000005c36f

@end

