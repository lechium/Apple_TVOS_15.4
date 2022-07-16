//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ICHTTPCookieStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)sharedCookieStore;	// IMP=0x000000000019e517
- (void).cxx_destruct;	// IMP=0x000000000019d9e4
- (void)_saveCookies:(id)arg1 userIdentifier:(id)arg2;	// IMP=0x000000000019d932
- (id)_cookieDictionaryForURL:(id)arg1 userIdentifier:(id)arg2;	// IMP=0x000000000019d681
- (id)_accountForUserIdentifier:(id)arg1;	// IMP=0x000000000019d4f0
- (void)removeAllCookies;	// IMP=0x000000000019d4a5
- (void)removeCookiesWithProperties:(id)arg1;	// IMP=0x000000000019d41a
- (void)saveGlobalAccountCookies:(id)arg1 forURL:(id)arg2;	// IMP=0x000000000019d38f
- (void)saveCookies:(id)arg1 forURL:(id)arg2 userIdentifier:(id)arg3;	// IMP=0x000000000019d2d7
- (void)saveCookies:(id)arg1 forURL:(id)arg2;	// IMP=0x000000000019d224
- (id)getCookiesHeadersForURL:(id)arg1 userIdentifier:(id)arg2;	// IMP=0x000000000019d1cd
- (id)getGlobalAccountCookiesForURL:(id)arg1;	// IMP=0x000000000019d1b4
- (id)getCookieWithName:(id)arg1 userIdentifier:(id)arg2;	// IMP=0x000000000019cfc6
- (id)getCookiesForUserIdentifier:(id)arg1;	// IMP=0x000000000019cecb
- (id)getCookiesForURL:(id)arg1 userIdentifier:(id)arg2;	// IMP=0x000000000019cda2
- (id)getCookiesForURL:(id)arg1;	// IMP=0x000000000019ccb3
- (void)dealloc;	// IMP=0x000000000019cc84
- (id)init;	// IMP=0x000000000019cc2c

@end

