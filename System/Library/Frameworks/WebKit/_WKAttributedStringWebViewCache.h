//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _WKAttributedStringWebViewCache : NSObject
{
}

+ (void)purgeAllWebViews;	// IMP=0x00000000001d3a91
+ (void)purgeSingleWebView;	// IMP=0x00000000001d39aa
+ (void)resetPurgeDelay;	// IMP=0x00000000001d3937
+ (void)cacheWebView:(id)arg1;	// IMP=0x00000000001d38db
+ (RetainPtr_15a4d79f)retrieveOrCreateWebView;	// IMP=0x00000000001d3748
+ (void)clearConfiguration;	// IMP=0x00000000001d370a
+ (id)configuration;	// IMP=0x00000000001d354e
+ (id)cache;	// IMP=0x00000000001d3507

@end

