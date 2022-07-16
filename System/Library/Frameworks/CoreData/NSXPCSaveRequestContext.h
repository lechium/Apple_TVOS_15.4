//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSManagedObjectContext, NSMutableDictionary, NSSaveChangesRequest, NSXPCStore;

__attribute__((visibility("hidden")))
@interface NSXPCSaveRequestContext : NSObject
{
    NSXPCStore *_store;	// 8 = 0x8
    NSSaveChangesRequest *_request;	// 16 = 0x10
    NSDictionary *_metadata;	// 24 = 0x18
    NSManagedObjectContext *_context;	// 32 = 0x20
    NSMutableDictionary *_changeCache;	// 40 = 0x28
    unsigned long long _interrupts;	// 48 = 0x30
    _Bool _forceUpdates;	// 56 = 0x38
}

- (id)managedObjectContext;	// IMP=0x0000000000267f5a
- (void)dealloc;	// IMP=0x0000000000267ef9
- (id)initForStore:(id)arg1 request:(id)arg2 metadata:(id)arg3 forceInsertsToUpdates:(_Bool)arg4 context:(id)arg5;	// IMP=0x0000000000267e0d

@end

