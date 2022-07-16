//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface NSHTTPCookie2StorageFilter : NSObject
{
    _Bool _isTrusted;	// 8 = 0x8
    _Bool _isTrustedCached;	// 9 = 0x9
    NSString *_urlScheme;	// 16 = 0x10
    _Bool _isTopLevelNavigation;	// 24 = 0x18
    _Bool _isSafe;	// 25 = 0x19
    _Bool _overwriteHTTPOnlyCookies;	// 26 = 0x1a
    NSURL *_url;	// 32 = 0x20
    NSURL *_mainDocumentURL;	// 40 = 0x28
    NSURL *_siteForCookies;	// 48 = 0x30
    NSString *_partition;	// 56 = 0x38
    unsigned long long _acceptPolicy;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000132209
@property unsigned long long acceptPolicy; // @synthesize acceptPolicy=_acceptPolicy;
@property _Bool overwriteHTTPOnlyCookies; // @synthesize overwriteHTTPOnlyCookies=_overwriteHTTPOnlyCookies;
@property _Bool isSafe; // @synthesize isSafe=_isSafe;
@property _Bool isTopLevelNavigation; // @synthesize isTopLevelNavigation=_isTopLevelNavigation;
@property(retain, nonatomic) NSString *partition; // @synthesize partition=_partition;
@property(retain, nonatomic) NSURL *siteForCookies; // @synthesize siteForCookies=_siteForCookies;
@property(retain, nonatomic) NSURL *mainDocumentURL; // @synthesize mainDocumentURL=_mainDocumentURL;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (_Bool)isTrusted;	// IMP=0x0000000000132082
- (id)init;	// IMP=0x000000000013204a

@end

