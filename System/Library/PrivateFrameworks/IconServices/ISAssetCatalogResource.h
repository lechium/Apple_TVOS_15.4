//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IconServices/ISScalableCompositorResource-Protocol.h>

@class CUICatalog, IFImageBag, NSString;

@interface ISAssetCatalogResource : NSObject <ISScalableCompositorResource>
{
    IFImageBag *_imageBag;	// 8 = 0x8
    CUICatalog *_catalog;	// 16 = 0x10
    NSString *_imageName;	// 24 = 0x18
    NSString *_symbolName;	// 32 = 0x20
    long long _layoutDirection;	// 40 = 0x28
}

+ (id)assetCatalogResourceWithURL:(id)arg1 imageName:(id)arg2 symbolName:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000044cb
+ (id)coreGlyphsCatalog;	// IMP=0x0000000000004404
+ (id)assetCatalogResourceWithURL:(id)arg1 symbolName:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000004325
+ (id)assetCatalogResourceWithURL:(id)arg1 imageName:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000004306
+ (id)imageForStaticAssetWithKey:(id)arg1 withDescriptor:(id)arg2;	// IMP=0x0000000000005636
- (void).cxx_destruct;	// IMP=0x00000000000052a4
@property long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(readonly) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(readonly) NSString *imageName; // @synthesize imageName=_imageName;
@property(readonly) CUICatalog *catalog; // @synthesize catalog=_catalog;
@property(readonly, getter=isPrecomposed) _Bool precomposed;
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x0000000000004e79
@property(readonly) IFImageBag *imageBag; // @synthesize imageBag=_imageBag;
- (id)imageWithName:(id)arg1 scale:(double)arg2;	// IMP=0x00000000000049db
- (id)initWithCatalog:(id)arg1 imageName:(id)arg2 symbolName:(id)arg3;	// IMP=0x000000000000491c
- (id)symbolImageForFontSize:(double)arg1 scale:(double)arg2 symbolSize:(unsigned long long)arg3 symbolWeight:(long long)arg4;	// IMP=0x00000000000054c1
- (id)symbolImageForSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x00000000000052e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

