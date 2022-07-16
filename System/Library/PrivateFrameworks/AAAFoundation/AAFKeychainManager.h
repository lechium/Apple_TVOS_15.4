//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AAFKeychainManager : NSObject
{
    NSObject<OS_dispatch_queue> *_keychainQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000029d9
- (_Bool)_unsafe_deleteKeychainItemWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000293b
- (id)_unsafe_fetchKeychainItemsWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000002517
- (id)_unsafe_fetchKeychainItemWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000022ff
- (_Bool)_unsafe_updateKeychainItemWithDescriptor:(id)arg1 newItem:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000002216
- (void)_unsafe_addKeychainItem:(id)arg1 shouldAttemptUpdate:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000002145
- (void)deleteKeychainItemsForDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000001ff4
- (id)keychainItemsForDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000001e1b
- (id)keychainItemForDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000001bab
- (void)updateKeychainItem:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000001a23
- (void)addOrUpdateKeychainItem:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000018cd
- (void)addKeychainItem:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000016de
- (id)init;	// IMP=0x000000000000165c

@end

