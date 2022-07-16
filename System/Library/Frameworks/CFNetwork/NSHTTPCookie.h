//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSHTTPCookieInternal, NSString, NSURL;

@interface NSHTTPCookie : NSObject <NSCoding>
{
    NSHTTPCookieInternal *_cookiePrivate;	// 8 = 0x8
}

+ (id)_cookieForSetCookieString:(id)arg1 forURL:(id)arg2 partition:(id)arg3;	// IMP=0x000000000015b242
+ (id)cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2;	// IMP=0x000000000015b229
+ (id)_parsedCookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2;	// IMP=0x000000000015b20d
+ (id)requestHeaderFieldsWithCookies:(id)arg1;	// IMP=0x000000000015b1ac
+ (const struct __CFArray *)_ns2cfCookies:(id)arg1;	// IMP=0x000000000015b18d
+ (id)_cf2nsCookies:(struct __CFArray *)arg1;	// IMP=0x000000000015b166
+ (id)cookieWithCFHTTPCookie:(struct OpaqueCFHTTPCookie *)arg1;	// IMP=0x000000000015b15d
+ (id)cookieWithProperties:(id)arg1;	// IMP=0x000000000015b127
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000015aeb4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000015ae83
- (unsigned long long)hash;	// IMP=0x000000000015adc7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015ad75
- (id)description;	// IMP=0x000000000015a8df
- (_Bool)_isExpired;	// IMP=0x000000000015a8aa
- (id)_key;	// IMP=0x000000000015a831
- (long long)_compareForHeaderOrder:(id)arg1;	// IMP=0x000000000015a665
- (id)MaxAge;	// IMP=0x000000000015a5f5
- (id)Port;	// IMP=0x000000000015a5c3
- (id)Discard;	// IMP=0x000000000015a599
- (id)Secure;	// IMP=0x000000000015a56f
- (id)Version;	// IMP=0x000000000015a530
- (id)OriginURL;	// IMP=0x000000000015a4be
- (id)SameSitePolicy;	// IMP=0x000000000015a4ac
- (id)StoragePartition;	// IMP=0x000000000015a49a
- (id)CommentURL;	// IMP=0x000000000015a488
- (id)Comment;	// IMP=0x000000000015a476
- (id)Expires;	// IMP=0x000000000015a464
- (id)Path;	// IMP=0x000000000015a452
- (id)Domain;	// IMP=0x000000000015a440
- (id)Value;	// IMP=0x000000000015a42e
- (id)Name;	// IMP=0x000000000015a41c
@property(readonly, copy) NSString *sameSitePolicy;
- (id)_storagePartition;	// IMP=0x000000000015a355
@property(readonly, copy) NSArray *portList;
@property(readonly, copy) NSURL *commentURL;
@property(readonly, copy) NSString *comment;
@property(readonly, copy) NSString *path;
@property(readonly, copy) NSString *domain;
@property(readonly, copy) NSString *value;
@property(readonly, copy) NSString *name;
@property(readonly, copy) NSDate *expiresDate;
@property(readonly, getter=isHTTPOnly) _Bool HTTPOnly;
@property(readonly, getter=isSecure) _Bool secure;
@property(readonly, getter=isSessionOnly) _Bool sessionOnly;
@property(readonly) unsigned long long version;
- (const struct OpaqueCFHTTPCookie *)_CFHTTPCookie;	// IMP=0x000000000015a032
- (const struct OpaqueCFHTTPCookie *)_GetInternalCFHTTPCookie;	// IMP=0x000000000015a029
@property(readonly, copy) NSDictionary *properties;
- (void)dealloc;	// IMP=0x0000000000159fb6
- (id)init;	// IMP=0x0000000000159f8d
- (id)initWithCFHTTPCookie:(struct OpaqueCFHTTPCookie *)arg1;	// IMP=0x0000000000159f37
- (id)initWithProperties:(id)arg1;	// IMP=0x0000000000159ed1
- (id)_initWithInternal:(id)arg1;	// IMP=0x0000000000159e6d
- (id)_initWithReference:(const struct CompactCookieArray *)arg1 index:(long long)arg2;	// IMP=0x0000000000159df8
- (id)_initWithProperties:(id)arg1 fromString:(_Bool)arg2;	// IMP=0x0000000000159d82
- (id)_initWithCookie:(id)arg1 partition:(id)arg2;	// IMP=0x0000000000159d0d
- (id)_initWithHeader:(const struct CompactCookieHeader *)arg1;	// IMP=0x0000000000159ca2
@property(readonly) struct HTTPCookie *_inner; // @dynamic _inner;

@end
