//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPBitmapStore, NSCache;

@interface WeatherImageLoader : NSObject
{
    double _scale;	// 8 = 0x8
    CPBitmapStore *_store;	// 16 = 0x10
    NSCache *_conditionImagesCache;	// 24 = 0x18
}

+ (id)conditionImageBundle;	// IMP=0x0000000000015603
+ (id)conditionImageNameWithConditionIndex:(long long)arg1;	// IMP=0x00000000000155e1
+ (id)cachedImageNamed:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015518
+ (id)colorForImageColor:(id)arg1 lighter:(_Bool)arg2;	// IMP=0x00000000000153a0
+ (id)conditionImageNamed:(id)arg1 size:(struct CGSize)arg2 cloudAligned:(_Bool)arg3 stroke:(_Bool)arg4 strokeAlpha:(double)arg5 lighterColors:(_Bool)arg6;	// IMP=0x00000000000149a0
+ (id)conditionImageNamed:(id)arg1 style:(long long)arg2;	// IMP=0x0000000000014888
+ (id)conditionImageWithConditionIndex:(long long)arg1 style:(long long)arg2;	// IMP=0x0000000000014822
+ (id)conditionImageWithConditionIndex:(long long)arg1;	// IMP=0x00000000000147c6
+ (void)cacheImageIfNecessary:(id)arg1;	// IMP=0x00000000000146b3
+ (id)sharedImageLoader;	// IMP=0x0000000000014676
+ (void)preloadImages;	// IMP=0x000000000001447a
- (void).cxx_destruct;	// IMP=0x0000000000015643
@property(retain, nonatomic) NSCache *conditionImagesCache; // @synthesize conditionImagesCache=_conditionImagesCache;
@property(retain, nonatomic) CPBitmapStore *store; // @synthesize store=_store;
- (void)setImage:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000145ca
- (id)cachedImageForKey:(id)arg1;	// IMP=0x00000000000144b3
- (id)init;	// IMP=0x0000000000013e2d

@end

