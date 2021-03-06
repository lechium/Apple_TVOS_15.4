//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PXSingleTileLayout
{
    struct CGRect _contentBounds;	// 8 = 0x8
    struct CGSize _preferredSize;	// 40 = 0x28
    struct PXTileIdentifier _tileIdentifier;	// 56 = 0x38
}

@property(nonatomic) struct CGSize preferredSize; // @synthesize preferredSize=_preferredSize;
@property(readonly, nonatomic) struct PXTileIdentifier tileIdentifier; // @synthesize tileIdentifier=_tileIdentifier;
- (_Bool)getGeometry:(out struct PXTileGeometry *)arg1 group:(out unsigned long long *)arg2 userData:(out id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;	// IMP=0x00000000004fec4d
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000004feaea
- (struct CGRect)contentBounds;	// IMP=0x00000000004feaca
- (void)prepareLayout;	// IMP=0x00000000004fea1b
- (void)setReferenceSize:(struct CGSize)arg1;	// IMP=0x00000000004fe8a0
- (id)initWithTileIdentifier:(struct PXTileIdentifier)arg1;	// IMP=0x00000000004fe81b
- (id)init;	// IMP=0x00000000004fe7dc

@end

