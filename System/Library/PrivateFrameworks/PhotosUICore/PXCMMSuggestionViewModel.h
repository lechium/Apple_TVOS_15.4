//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, UIColor, UIImage;
@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXCMMSuggestionViewModel
{
    _Bool _containsUnverifiedPersons;	// 8 = 0x8
    _Bool _highlighted;	// 9 = 0x9
    _Bool _selected;	// 10 = 0xa
    NSString *_posterTitle;	// 16 = 0x10
    NSString *_posterSubtitle;	// 24 = 0x18
    id <PXDisplayAsset> _posterAsset;	// 32 = 0x20
    id <PXUIImageProvider> _posterMediaProvider;	// 40 = 0x28
    NSArray *_localizedNames;	// 48 = 0x30
    NSString *_subtitle;	// 56 = 0x38
    UIImage *_combinedFaceTileImage;	// 64 = 0x40
    UIColor *_opaqueAncestorBackgroundColor;	// 72 = 0x48
}

+ (double)faceTileImageDiameter;	// IMP=0x00000000002a45be
- (void).cxx_destruct;	// IMP=0x00000000002a4527
@property(readonly, nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(readonly, nonatomic) UIColor *opaqueAncestorBackgroundColor; // @synthesize opaqueAncestorBackgroundColor=_opaqueAncestorBackgroundColor;
@property(readonly, nonatomic) UIImage *combinedFaceTileImage; // @synthesize combinedFaceTileImage=_combinedFaceTileImage;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) _Bool containsUnverifiedPersons; // @synthesize containsUnverifiedPersons=_containsUnverifiedPersons;
@property(readonly, copy, nonatomic) NSArray *localizedNames; // @synthesize localizedNames=_localizedNames;
@property(readonly, nonatomic) id <PXUIImageProvider> posterMediaProvider; // @synthesize posterMediaProvider=_posterMediaProvider;
@property(readonly, nonatomic) id <PXDisplayAsset> posterAsset; // @synthesize posterAsset=_posterAsset;
@property(readonly, copy, nonatomic) NSString *posterSubtitle; // @synthesize posterSubtitle=_posterSubtitle;
@property(readonly, copy, nonatomic) NSString *posterTitle; // @synthesize posterTitle=_posterTitle;
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000002a4447
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000002a441f
- (void)setOpaqueAncestorBackgroundColor:(id)arg1;	// IMP=0x00000000002a432e
- (void)setCombinedFaceTileImage:(id)arg1;	// IMP=0x00000000002a42b9
- (void)setSubtitle:(id)arg1;	// IMP=0x00000000002a41bc
- (void)setContainsUnverifiedPersons:(_Bool)arg1;	// IMP=0x00000000002a4194
- (void)setLocalizedNames:(id)arg1;	// IMP=0x00000000002a4097
- (void)setPosterMediaProvider:(id)arg1;	// IMP=0x00000000002a4031
- (void)setPosterAsset:(id)arg1;	// IMP=0x00000000002a3fcb
- (void)setPosterSubtitle:(id)arg1;	// IMP=0x00000000002a3ece
- (void)setPosterTitle:(id)arg1;	// IMP=0x00000000002a3dd1
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x00000000002a3da2
- (id)init;	// IMP=0x00000000002a3ccf

@end

