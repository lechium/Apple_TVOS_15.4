//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, NSURL;

@interface QuotaApp : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_localizedName;	// 24 = 0x18
    MISSING_TYPE *_iconURL;	// 32 = 0x20
    NSURL *_thumbnailURL;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000179c40
@property(retain, nonatomic) NSURL *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(retain, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)description;	// IMP=0x0010000000179a10

@end
