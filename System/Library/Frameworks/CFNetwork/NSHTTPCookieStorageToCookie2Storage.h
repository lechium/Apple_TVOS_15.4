//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSHTTPCookie2Storage;

@interface NSHTTPCookieStorageToCookie2Storage
{
    unsigned long long _acceptPolicy;	// 16 = 0x10
    _Bool _behavesLikeNS;	// 24 = 0x18
    NSHTTPCookie2Storage *_store;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000038aea
- (void)_setPrivateBrowsingEnabled:(_Bool)arg1;	// IMP=0x0000000000038a88
- (unsigned long long)cookieAcceptPolicy;	// IMP=0x0000000000038a77
- (void)setCookieAcceptPolicy:(unsigned long long)arg1;	// IMP=0x0000000000038a03
- (void)removeCookiesSinceDate:(id)arg1;	// IMP=0x000000000003893f
- (void)deleteCookie:(id)arg1;	// IMP=0x0000000000038828
- (void)_getCookiesForPartition:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003871f
- (void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 policyProperties:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000038709
- (void)_getCookiesForURL:(id)arg1 mainDocumentURL:(id)arg2 partition:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000383ec
- (id)_cookiesForURL:(id)arg1 mainDocumentURL:(id)arg2;	// IMP=0x0000000000038268
- (void)getCookiesForTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000037ce3
- (id)cookiesForURL:(id)arg1;	// IMP=0x0000000000037a0f
- (id)cookies;	// IMP=0x00000000000378ef
- (void)_saveCookies;	// IMP=0x000000000003788d
- (void)_saveCookies:(CDUnknownBlockType)arg1;	// IMP=0x00000000000377f4
- (void)storeCookies:(id)arg1 forTask:(id)arg2;	// IMP=0x0000000000037334
- (void)_testingOfStoringOfCookie:(id)arg1;	// IMP=0x0000000000037040
- (void)_setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3 policyProperties:(id)arg4;	// IMP=0x0000000000036bcf
- (void)setCookies:(id)arg1 forURL:(id)arg2 mainDocumentURL:(id)arg3;	// IMP=0x0000000000036bba
- (void)setCookie:(id)arg1;	// IMP=0x0000000000036a7b
- (void)dealloc;	// IMP=0x00000000000369f7
- (struct OpaqueCFHTTPCookieStorage *)_cookieStorage;	// IMP=0x00000000000369ee
- (id)_initWithCFHTTPCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg1;	// IMP=0x0000000000036991
- (id)_initWithIdentifier:(id)arg1 private:(_Bool)arg2;	// IMP=0x00000000000368f7
- (id)init;	// IMP=0x000000000003684a

@end

