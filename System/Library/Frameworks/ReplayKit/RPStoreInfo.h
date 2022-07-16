//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface RPStoreInfo : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    NSString *_appName;	// 16 = 0x10
    NSString *_author;	// 24 = 0x18
    NSURL *_itemURL;	// 32 = 0x20
    NSURL *_appArtworkURL;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000004b54
@property(retain, nonatomic) NSURL *appArtworkURL; // @synthesize appArtworkURL=_appArtworkURL;
@property(retain, nonatomic) NSURL *itemURL; // @synthesize itemURL=_itemURL;
@property(retain, nonatomic) NSString *author; // @synthesize author=_author;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)dictionary;	// IMP=0x0000000000004a18

@end

