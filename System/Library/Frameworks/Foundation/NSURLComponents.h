//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>

@class NSArray, NSNumber, NSString, NSURL;

@interface NSURLComponents : NSObject <NSCopying>
{
}

+ (id)componentsWithString:(id)arg1;	// IMP=0x000000000014fa99
+ (id)componentsWithURL:(id)arg1 resolvingAgainstBaseURL:(_Bool)arg2;	// IMP=0x000000000014f9f0
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014f880
@property(copy) NSArray *percentEncodedQueryItems;
@property(copy) NSArray *queryItems;
@property(readonly) struct _NSRange rangeOfFragment;
@property(readonly) struct _NSRange rangeOfQuery;
@property(readonly) struct _NSRange rangeOfPath;
@property(readonly) struct _NSRange rangeOfPort;
@property(readonly) struct _NSRange rangeOfHost;
@property(readonly) struct _NSRange rangeOfPassword;
@property(readonly) struct _NSRange rangeOfUser;
@property(readonly) struct _NSRange rangeOfScheme;
@property(copy) NSString *percentEncodedFragment;
@property(copy) NSString *percentEncodedQuery;
@property(copy) NSString *percentEncodedPath;
@property(copy) NSString *percentEncodedHost;
@property(copy) NSString *percentEncodedPassword;
@property(copy) NSString *percentEncodedUser;
@property(copy) NSString *fragment;
@property(copy) NSString *query;
@property(copy) NSString *path;
@property(copy) NSNumber *port;
@property(copy) NSString *host;
@property(copy) NSString *password;
@property(copy) NSString *user;
@property(copy) NSString *scheme;
@property(readonly, copy) NSString *string;
- (id)URLRelativeToURL:(id)arg1;	// IMP=0x000000000014faf6
@property(readonly, copy) NSURL *URL;
- (id)initWithString:(id)arg1;	// IMP=0x000000000014fa24
- (id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(_Bool)arg2;	// IMP=0x000000000014f97b
- (id)init;	// IMP=0x000000000014f929
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014f921

@end

