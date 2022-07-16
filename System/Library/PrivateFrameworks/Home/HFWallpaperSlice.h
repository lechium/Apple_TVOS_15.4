//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>

@class NSString, UIImage;

@interface HFWallpaperSlice : NSObject <NSCopying>
{
    long long _type;	// 8 = 0x8
    long long _variant;	// 16 = 0x10
    UIImage *_image;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000205585
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) long long variant; // @synthesize variant=_variant;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002054a3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002053e5
- (_Bool)isSlicedFromWallpaper:(id)arg1;	// IMP=0x0000000000205340
- (id)description;	// IMP=0x00000000002051ad
- (id)initWithType:(long long)arg1 variant:(long long)arg2 identifier:(id)arg3 image:(id)arg4;	// IMP=0x00000000002050f2

@end
