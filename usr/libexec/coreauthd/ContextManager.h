//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary;

@interface ContextManager : NSObject
{
    NSMapTable *_contextMap;	// 8 = 0x8
    NSMapTable *_contextProxyMap;	// 16 = 0x10
    NSMapTable *_contextByExternalizedContextMap;	// 24 = 0x18
    NSMutableDictionary *_modules;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0040000000009ee2
- (void).cxx_destruct;	// IMP=0x002000000000a9d5
- (id)loadModule:(long long)arg1 error:(id *)arg2;	// IMP=0x001000000000a547
- (void)_logClass:(Class)arg1 tag:(id)arg2 level:(int)arg3;	// IMP=0x001000000000a301
- (void)_logClass:(Class)arg1 tag:(id)arg2;	// IMP=0x001000000000a26a
- (id)_pathForModule:(long long)arg1 error:(id *)arg2;	// IMP=0x001000000000a127
- (void)registerExternalizedContext:(id)arg1 forContext:(id)arg2;	// IMP=0x001000000000a108
- (void)addContext:(id)arg1;	// IMP=0x001000000000a09b
- (void)addContextProxy:(id)arg1;	// IMP=0x001000000000a03b
- (id)findContextForExternalizedContext:(id)arg1;	// IMP=0x001000000000a025
- (id)contextForUUID:(id)arg1;	// IMP=0x001000000000a00f
- (id)init;	// IMP=0x0010000000009f37

@end
