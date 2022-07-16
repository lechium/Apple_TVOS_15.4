//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, UIImage;
@protocol UINamedLayerContentProvider, UINamedLayerImage;

@interface HBNamedLayerImage : NSObject
{
    int _blendMode;	// 8 = 0x8
    NSObject<UINamedLayerImage> *_namedLayerImage;	// 16 = 0x10
    UIImage *_image;	// 24 = 0x18
}

+ (id)namedLayerImageFromNamedLayerImage:(id)arg1 decodeImmediately:(_Bool)arg2;	// IMP=0x002000000001d210
+ (id)namedLayerImageFromNamedLayerImage:(id)arg1;	// IMP=0x001000000001d1fc
+ (id)namedLayerImageWithImage:(id)arg1 decodeImmediately:(_Bool)arg2;	// IMP=0x001000000001d15c
+ (id)namedLayerImageWithImage:(id)arg1;	// IMP=0x001000000001d148
- (void).cxx_destruct;	// IMP=0x002000000001d64a
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSObject<UINamedLayerImage> *namedLayerImage; // @synthesize namedLayerImage=_namedLayerImage;
@property(nonatomic) int blendMode; // @synthesize blendMode=_blendMode;
- (id)imageObj;	// IMP=0x001000000001d5f0
@property(nonatomic) _Bool fixedFrame;
@property(readonly, nonatomic) double opacity;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) NSString *name;
- (MISSING_TYPE *)_init;	// IMP=0x001000000001d10d
- (id)init;	// IMP=0x001000000001d0ff

// Remaining properties
@property(readonly, nonatomic) id <UINamedLayerContentProvider> contentProvider;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

