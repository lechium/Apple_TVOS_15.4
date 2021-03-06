//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVHomeUI/NSCopying-Protocol.h>

@interface TVHMCameraContentViewStyle : NSObject <NSCopying>
{
    _Bool _showFullScreenCameraNameLabel;	// 8 = 0x8
    _Bool _showFullScreenCameraDescriptionLabel;	// 9 = 0x9
    _Bool _showCameraNameLabel;	// 10 = 0xa
    _Bool _showCameraSymbol;	// 11 = 0xb
    _Bool _showFullScreenBadges;	// 12 = 0xc
    _Bool _showBadges;	// 13 = 0xd
    _Bool _insetPictureInPicture;	// 14 = 0xe
    _Bool _showGradient;	// 15 = 0xf
    unsigned long long _size;	// 16 = 0x10
}

+ (id)bulletinStyle;	// IMP=0x000000000002e2b0
+ (id)pictureInPictureSwappingStyle;	// IMP=0x000000000002e230
+ (id)pictureInPictureStyle;	// IMP=0x000000000002e130
+ (id)thumbnailStyle;	// IMP=0x000000000002e030
+ (id)previewStyle;	// IMP=0x000000000002df30
+ (id)minimalFullScreenStyle;	// IMP=0x000000000002de30
+ (id)fullScreenStyle;	// IMP=0x000000000002dd10
@property(nonatomic) _Bool showGradient; // @synthesize showGradient=_showGradient;
@property(nonatomic) _Bool insetPictureInPicture; // @synthesize insetPictureInPicture=_insetPictureInPicture;
@property(nonatomic) _Bool showBadges; // @synthesize showBadges=_showBadges;
@property(nonatomic) _Bool showFullScreenBadges; // @synthesize showFullScreenBadges=_showFullScreenBadges;
@property(nonatomic) _Bool showCameraSymbol; // @synthesize showCameraSymbol=_showCameraSymbol;
@property(nonatomic) _Bool showCameraNameLabel; // @synthesize showCameraNameLabel=_showCameraNameLabel;
@property(nonatomic) _Bool showFullScreenCameraDescriptionLabel; // @synthesize showFullScreenCameraDescriptionLabel=_showFullScreenCameraDescriptionLabel;
@property(nonatomic) _Bool showFullScreenCameraNameLabel; // @synthesize showFullScreenCameraNameLabel=_showFullScreenCameraNameLabel;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002e3b0

@end

