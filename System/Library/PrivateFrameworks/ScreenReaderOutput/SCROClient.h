//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock;

@interface SCROClient : NSObject
{
    NSLock *_lock;	// 8 = 0x8
    unsigned int _identifier;	// 16 = 0x10
    unsigned int _port;	// 20 = 0x14
    int _pid;	// 24 = 0x18
    struct __CFArray *_queue;	// 32 = 0x20
    struct __CFSet *_callbackSet;	// 40 = 0x28
}

+ (void)registerCallbackWithKey:(int)arg1 forClientIdentifier:(unsigned int)arg2;	// IMP=0x0000000000031676
+ (id)callbacksForClientIdentifier:(unsigned int)arg1;	// IMP=0x0000000000031536
+ (void)sendCallback:(id)arg1;	// IMP=0x00000000000311ae
+ (_Bool)isClientTrustedWithPortToken:(CDStruct_6ad76789)arg1;	// IMP=0x0000000000030f45
+ (long long)removeClientWithPort:(unsigned int)arg1;	// IMP=0x0000000000030d33
+ (id)addClientGetIdentifier:(unsigned int *)arg1 token:(CDStruct_6ad76789)arg2 getPort:(unsigned int *)arg3;	// IMP=0x0000000000030bf5
+ (void)initialize;	// IMP=0x0000000000030b4a
- (void).cxx_destruct;	// IMP=0x0000000000031a4e
- (void)_sendCallback:(id)arg1;	// IMP=0x00000000000319f9
- (_Bool)_wantsCallback:(id)arg1;	// IMP=0x0000000000031988
- (id)_dequeueCallbacks;	// IMP=0x0000000000031951
- (void)_registerCallbackWithKey:(int)arg1;	// IMP=0x000000000003191d
- (void)_invalidate;	// IMP=0x00000000000318e7
- (void)_unlock;	// IMP=0x00000000000318d1
- (void)_lock;	// IMP=0x00000000000318bb
- (void)dealloc;	// IMP=0x000000000003185e
- (id)init;	// IMP=0x00000000000317ac

@end
