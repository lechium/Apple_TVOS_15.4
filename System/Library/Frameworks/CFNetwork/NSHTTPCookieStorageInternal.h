//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSRecursiveLock;

@interface NSHTTPCookieStorageInternal : NSObject
{
    struct OpaqueCFHTTPCookieStorage *storage;	// 8 = 0x8
    struct OpaqueCFHTTPCookieStorage *privateStorage;	// 16 = 0x10
    NSRecursiveLock *dataLock;	// 24 = 0x18
    _Bool privateBrowsing;	// 32 = 0x20
}

- (void)dealloc;	// IMP=0x00000000001fc8f9
- (void)_syncCookies;	// IMP=0x00000000001fc883
- (void)registerForPostingNotificationsWithContext:(id)arg1;	// IMP=0x00000000001fc721

@end

