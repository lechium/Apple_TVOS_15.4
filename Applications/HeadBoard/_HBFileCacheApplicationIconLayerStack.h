//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HBAssetCatalogApplicationIcon, NSArray, NSString, PBSAppInfo, UIImage, _HBApplicationIconLayerStackContentProvider;

@interface _HBFileCacheApplicationIconLayerStack : NSObject
{
    NSArray *_layers;	// 8 = 0x8
    PBSAppInfo *_application;	// 16 = 0x10
    _HBApplicationIconLayerStackContentProvider *_contentProvider;	// 24 = 0x18
    double _imageScale;	// 32 = 0x20
    UIImage *_flattenedUIImage;	// 40 = 0x28
    UIImage *_radiosityUIImage;	// 48 = 0x30
    HBAssetCatalogApplicationIcon *_appIconInfo;	// 56 = 0x38
    struct CGSize _imageSize;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000037188
@property(retain, nonatomic, getter=_appIconInfo, setter=_setAppIconInfo:) HBAssetCatalogApplicationIcon *appIconInfo; // @synthesize appIconInfo=_appIconInfo;
@property(readonly, nonatomic, getter=_radiosityUIImage) UIImage *radiosityUIImage; // @synthesize radiosityUIImage=_radiosityUIImage;
@property(readonly, nonatomic, getter=_flattenedUIImage) UIImage *flattenedUIImage; // @synthesize flattenedUIImage=_flattenedUIImage;
@property(readonly, nonatomic, getter=_imageScale) double imageScale; // @synthesize imageScale=_imageScale;
@property(readonly, nonatomic, getter=_imageSize) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic, getter=_contentProvider) _HBApplicationIconLayerStackContentProvider *contentProvider; // @synthesize contentProvider=_contentProvider;
@property(readonly, nonatomic, getter=_application) PBSAppInfo *application; // @synthesize application=_application;
@property(readonly, nonatomic) NSArray *layers; // @synthesize layers=_layers;
- (void)_deflateLayerStack;	// IMP=0x0010000000036fbb
- (void)_inflateLayerStack;	// IMP=0x0010000000036b6e
@property(readonly, nonatomic) id radiosityImage;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGImage *flattenedImage;
@property(readonly, nonatomic) NSString *name;
- (id)imageConfigurationForConfiguration:(id)arg1;	// IMP=0x00100000000369f3
- (id)initWithApplication:(id)arg1;	// IMP=0x0010000000036553

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool flatImageContainsCornerRadius;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGSize radiosityImageScale;
@property(readonly) Class superclass;

@end

