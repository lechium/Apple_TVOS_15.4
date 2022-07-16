//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PFAnimatedImage;

@interface PHAnimatedImage : NSObject
{
    unsigned long long _frameCount;	// 8 = 0x8
    unsigned long long _loopCount;	// 16 = 0x10
    double _duration;	// 24 = 0x18
    unsigned long long _pixelWidth;	// 32 = 0x20
    unsigned long long _pixelHeight;	// 40 = 0x28
    PFAnimatedImage *_pf_animatedImage;	// 48 = 0x30
}

+ (void)cancelAnimatedImageRequest:(long long)arg1;	// IMP=0x0000000000024749
+ (long long)requestAnimatedImageWithURL:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002451c
+ (long long)requestAnimatedImageWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024505
- (void).cxx_destruct;	// IMP=0x00000000000244f5
@property(readonly, nonatomic) PFAnimatedImage *pf_animatedImage; // @synthesize pf_animatedImage=_pf_animatedImage;
@property(readonly, nonatomic) unsigned long long pixelHeight; // @synthesize pixelHeight=_pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth; // @synthesize pixelWidth=_pixelWidth;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) unsigned long long loopCount; // @synthesize loopCount=_loopCount;
@property(readonly, nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
- (void)_initializePropertiesWithAnimatedImage:(id)arg1;	// IMP=0x00000000000243e0
- (id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useSharedDecoding:(_Bool)arg3;	// IMP=0x0000000000024301
- (id)initWithURL:(id)arg1;	// IMP=0x00000000000242e7

@end

