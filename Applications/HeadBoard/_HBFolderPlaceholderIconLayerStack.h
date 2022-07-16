//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIImage, _HBNamedLayerImage;

@interface _HBFolderPlaceholderIconLayerStack : NSObject
{
    _HBNamedLayerImage *_backgroundImageLayer;	// 8 = 0x8
    UIImage *_radiosityUIImage;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000009246f
@property(readonly, nonatomic, getter=_radiosityUIImage) UIImage *radiosityUIImage; // @synthesize radiosityUIImage=_radiosityUIImage;
@property(readonly, nonatomic, getter=_backgroundImageLayer) _HBNamedLayerImage *backgroundImageLayer; // @synthesize backgroundImageLayer=_backgroundImageLayer;
@property(readonly, nonatomic) id radiosityImage;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) struct CGImage *flattenedImage;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) NSArray *layers;
- (id)init;	// IMP=0x001000000009213a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool flatImageContainsCornerRadius;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGSize radiosityImageScale;
@property(readonly) Class superclass;

@end

