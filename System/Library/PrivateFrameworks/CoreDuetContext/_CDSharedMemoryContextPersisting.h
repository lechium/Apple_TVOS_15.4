//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/_CDContextPersisting-Protocol.h>

@class NSCountedSet, NSString, _CDSharedMemoryKeyValueStore;
@protocol OS_dispatch_queue;

@interface _CDSharedMemoryContextPersisting : NSObject <_CDContextPersisting>
{
    _CDSharedMemoryKeyValueStore *_store;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSCountedSet *_keyPathRegistrationCount;	// 24 = 0x18
    NSCountedSet *_legacyKeyPathRegistrationCount;	// 32 = 0x20
    NSString *_localDeviceID;	// 40 = 0x28
}

+ (id)sharedMemoryKeyFromRegistration:(id)arg1;	// IMP=0x000000000000241a
+ (id)sharedMemoryKeyFromKeyPath:(id)arg1;	// IMP=0x0000000000002335
+ (id)persistenceWithSharedMemoryKeyValueStore:(id)arg1;	// IMP=0x00000000000022ec
- (void).cxx_destruct;	// IMP=0x0000000000003a83
@property(retain, nonatomic) NSString *localDeviceID; // @synthesize localDeviceID=_localDeviceID;
@property(retain, nonatomic) NSCountedSet *legacyKeyPathRegistrationCount; // @synthesize legacyKeyPathRegistrationCount=_legacyKeyPathRegistrationCount;
@property(retain, nonatomic) NSCountedSet *keyPathRegistrationCount; // @synthesize keyPathRegistrationCount=_keyPathRegistrationCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) _CDSharedMemoryKeyValueStore *store; // @synthesize store=_store;
- (void)deleteDataCreatedBefore:(id)arg1;	// IMP=0x00000000000039f6
- (void)deleteAllData;	// IMP=0x000000000000397c
- (id)loadRegistrations;	// IMP=0x00000000000036e2
- (id)loadValues;	// IMP=0x0000000000003314
- (id)allKeysForContextStore;	// IMP=0x00000000000030c9
- (void)deleteRegistration:(id)arg1;	// IMP=0x0000000000002dd4
- (void)saveRegistration:(id)arg1;	// IMP=0x0000000000002a93
- (void)deleteKeyPaths:(id)arg1;	// IMP=0x0000000000002793
- (void)saveValue:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0000000000002490
- (id)initWithSharedMemoryKeyValueStore:(id)arg1;	// IMP=0x00000000000021a7

@end

