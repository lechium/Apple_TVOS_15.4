//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface __TVSUIWallpaperProxy : NSObject
{
    NSString *_cacheKey;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
}

+ (void)relinquishWallpaperProxy:(id)arg1;	// IMP=0x000000000001eae1
+ (id)acquireWallpaperProxyWithVariant:(long long)arg1 userInterfaceStyle:(long long)arg2;	// IMP=0x000000000001e9a2
+ (id)_wallpaperWithImage:(id)arg1 cacheKey:(id)arg2;	// IMP=0x000000000001e846
+ (void)initialize;	// IMP=0x000000000001e6f6
- (void).cxx_destruct;	// IMP=0x000000000001eca9
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;

@end
