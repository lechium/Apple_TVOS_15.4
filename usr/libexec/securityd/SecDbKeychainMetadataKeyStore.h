//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SecDbKeychainMetadataKeyStore : NSObject
{
    int _keybagNotificationToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableDictionary *_keysDict;	// 24 = 0x18
}

+ (_Bool)cachingEnabled;	// IMP=0x00400000001bebe9
+ (id)sharedStore;	// IMP=0x00100000001beb0b
+ (void)resetSharedStore;	// IMP=0x00100000001bead4
- (void).cxx_destruct;	// IMP=0x00200000001bdd89
@property int keybagNotificationToken; // @synthesize keybagNotificationToken=_keybagNotificationToken;
@property(retain) NSMutableDictionary *keysDict; // @synthesize keysDict=_keysDict;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)keyForKeyclass:(int)arg1 keybag:(int)arg2 keySpecifier:(id)arg3 allowWrites:(_Bool)arg4 error:(id *)arg5;	// IMP=0x00100000001bd912
- (id)fetchKeyForClass:(int)arg1 fromDb:(struct __OpaqueSecDbConnection *)arg2 keybag:(int)arg3 specifier:(id)arg4 allowWrites:(_Bool)arg5 error:(id *)arg6;	// IMP=0x00100000001bd1d5
- (_Bool)readKeyDataForClass:(int)arg1 fromDb:(struct __OpaqueSecDbConnection *)arg2 actualKeyclass:(int *)arg3 oldFormatData:(id *)arg4 newFormatData:(id *)arg5 error:(id *)arg6;	// IMP=0x00100000001bcf0e
- (id)writeKey:(id)arg1 ForKeyclass:(int)arg2 withKeybag:(int)arg3 keySpecifier:(id)arg4 database:(struct __OpaqueSecDbConnection *)arg5 error:(id *)arg6;	// IMP=0x00100000001bc86e
- (id)newKeyForKeyclass:(int)arg1 withKeybag:(int)arg2 keySpecifier:(id)arg3 database:(struct __OpaqueSecDbConnection *)arg4 error:(id *)arg5;	// IMP=0x00100000001bc78f
- (id)validateWrappedKey:(id)arg1 forKeyClass:(int)arg2 actualKeyClass:(int *)arg3 keybag:(int)arg4 keySpecifier:(id)arg5 error:(id *)arg6;	// IMP=0x00100000001bc3d5
- (void)_onQueueDropAllKeys;	// IMP=0x00100000001bc34e
- (void)dropAllKeys;	// IMP=0x00100000001bc303
- (void)_onQueueDropClassAKeys;	// IMP=0x00100000001bc245
- (void)dropClassAKeys;	// IMP=0x00100000001bc1fa
- (void)dealloc;	// IMP=0x00100000001bc1b5
- (id)_init;	// IMP=0x00100000001bc065

@end
