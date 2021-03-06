//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXCuratedLibrarySectionGeometryDescriptor;
@protocol PXDisplayAsset;

@interface PXCuratedLibraryAssetsSectionGeneratedLayout
{
    id <PXDisplayAsset> _presentedKeyAsset;	// 8 = 0x8
    struct CGRect _presentedKeyAssetRect;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000004caec0
@property(nonatomic) struct CGRect presentedKeyAssetRect; // @synthesize presentedKeyAssetRect=_presentedKeyAssetRect;
@property(retain, nonatomic) id <PXDisplayAsset> presentedKeyAsset; // @synthesize presentedKeyAsset=_presentedKeyAsset;
- (void)enumerateHeroSpritesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000004cadad
@property(readonly, nonatomic) struct CGRect sectionRect;
- (void)getSpriteZPosition:(float *)arg1 clippingRect:(struct CGRect *)arg2 forSpriteKind:(long long)arg3;	// IMP=0x00000000004cacad
@property(readonly, nonatomic) PXCuratedLibrarySectionGeometryDescriptor *presentedGeometryDescriptor;
- (void)spritesDidUpdate;	// IMP=0x00000000004ca839
- (id)init;	// IMP=0x00000000004ca7e7

@end

