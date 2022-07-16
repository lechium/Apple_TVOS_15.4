//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface AXBaseSettings : NSObject
{
    struct os_unfair_lock_s _domainNamesToSynchronizeLock;	// 8 = 0x8
    NSMutableSet *_registeredPreferenceKeys;	// 16 = 0x10
    NSMutableDictionary *_preferenceKeysByDomainNameToSynchronize;	// 24 = 0x18
    NSMutableDictionary *_updateBlocks;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000004d72
@property(retain, nonatomic) NSMutableDictionary *updateBlocks; // @synthesize updateBlocks=_updateBlocks;
@property(retain, nonatomic) NSMutableDictionary *preferenceKeysByDomainNameToSynchronize; // @synthesize preferenceKeysByDomainNameToSynchronize=_preferenceKeysByDomainNameToSynchronize;
@property(retain, nonatomic) NSMutableSet *registeredPreferenceKeys; // @synthesize registeredPreferenceKeys=_registeredPreferenceKeys;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000004b63
- (void)_registerForNotification:(id)arg1;	// IMP=0x00000000000047f6
- (id)_userDefaultsStoreForDomainName:(id)arg1;	// IMP=0x000000000000466a
- (void)_handlePreferenceChangedWithNotificationName:(id)arg1;	// IMP=0x00000000000043f3
- (void)_synchronizeIfNecessaryForPreferenceKey:(id)arg1 domainName:(id)arg2;	// IMP=0x000000000000430a
- (_Bool)_switchFromRootUserIfNecessary:(CDUnknownBlockType)arg1;	// IMP=0x0000000000004302
- (id)objectValueForPreferenceKey:(id)arg1 ofClass:(Class)arg2 defaultValue:(id)arg3;	// IMP=0x000000000000427f
- (double)doubleValueForPreferenceKey:(id)arg1 defaultValue:(double)arg2;	// IMP=0x0000000000004217
- (long long)integerValueForPreferenceKey:(id)arg1 defaultValue:(long long)arg2;	// IMP=0x00000000000041b6
- (_Bool)boolValueForPreferenceKey:(id)arg1 defaultValue:(_Bool)arg2;	// IMP=0x0000000000004155
- (void)willPerformUpdateBlocksForPreferenceKey:(id)arg1;	// IMP=0x000000000000414f
- (void)postNotificationForPreferenceKey:(id)arg1;	// IMP=0x0000000000004103
- (void)willPostNotificationForPreferenceKey:(id)arg1 value:(id)arg2;	// IMP=0x00000000000040fd
- (void)setValue:(id)arg1 forPreferenceKey:(id)arg2;	// IMP=0x0000000000003f8a
- (id)valueForPreferenceKey:(id)arg1;	// IMP=0x0000000000003ce3
- (id)preferenceKeyForSelector:(SEL)arg1;	// IMP=0x000000000000e8bc
- (id)allDomainNamesForPreferenceKey:(id)arg1;	// IMP=0x0000000000003c4b
- (id)domainNameForPreferenceKey:(id)arg1;	// IMP=0x000000000000e88e
- (id)notificationNameForPreferenceKey:(id)arg1;	// IMP=0x0000000000003c1f
- (void)clearExistingValueForPreferenceWithSelector:(SEL)arg1;	// IMP=0x0000000000003b93
- (_Bool)hasExistingValueForPreferenceWithSelector:(SEL)arg1;	// IMP=0x0000000000003ae6
- (void)registerUpdateBlock:(CDUnknownBlockType)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3;	// IMP=0x00000000000035e4
- (void)dealloc;	// IMP=0x00000000000032fb
- (id)init;	// IMP=0x00000000000031f0

@end
