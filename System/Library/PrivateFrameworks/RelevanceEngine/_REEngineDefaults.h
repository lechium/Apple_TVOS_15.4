//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface _REEngineDefaults : NSObject
{
    NSString *_domain;	// 8 = 0x8
    NSUserDefaults *_defaults;	// 16 = 0x10
    NSMutableSet *_registeredPaths;	// 24 = 0x18
    NSMutableDictionary *_registeredBlocks;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_registrationQueue;	// 40 = 0x28
}

+ (id)globalDefaults;	// IMP=0x000000000009bb8f
+ (id)defaultsForEngine:(id)arg1;	// IMP=0x000000000009bb7a
- (void).cxx_destruct;	// IMP=0x000000000009c2c1
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000009c0d1
- (void)_registerCallback:(CDUnknownBlockType)arg1 forKey:(id)arg2;	// IMP=0x000000000009bed3
- (id)_domainName;	// IMP=0x000000000009bec5
- (id)_idValueForKey:(id)arg1 set:(_Bool *)arg2;	// IMP=0x000000000009be99
- (long long)_NSIntegerValueForKey:(id)arg1 set:(_Bool *)arg2;	// IMP=0x000000000009be0a
- (_Bool)_BOOLValueForKey:(id)arg1 set:(_Bool *)arg2;	// IMP=0x000000000009bd7d
- (void)dealloc;	// IMP=0x000000000009bbfb
- (id)initWithDomain:(id)arg1;	// IMP=0x000000000009c30a

@end
