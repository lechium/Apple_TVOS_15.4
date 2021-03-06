//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>

@interface PKPaymentSetupProductImageAssets : NSObject <NSCopying>
{
    struct CGImage *_digitalCardImage;	// 8 = 0x8
    struct CGImage *_plasticCardImage;	// 16 = 0x10
    struct CGImage *_thumbnailImage;	// 24 = 0x18
    struct CGImage *_logoImage;	// 32 = 0x20
}

@property(nonatomic) struct CGImage *logoImage; // @synthesize logoImage=_logoImage;
@property(nonatomic) struct CGImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(nonatomic) struct CGImage *plasticCardImage; // @synthesize plasticCardImage=_plasticCardImage;
@property(nonatomic) struct CGImage *digitalCardImage; // @synthesize digitalCardImage=_digitalCardImage;
- (void)dealloc;	// IMP=0x000000000040b2ad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000040b241

@end

