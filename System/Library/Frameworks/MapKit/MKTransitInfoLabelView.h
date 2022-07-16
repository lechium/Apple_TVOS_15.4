//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKArtworkDataSourceCache, NSArray;

@interface MKTransitInfoLabelView
{
    long long _iconSize;	// 8 = 0x8
    double _maxWidth;	// 16 = 0x10
    double _spaceBetweenIcons;	// 24 = 0x18
    CDUnknownBlockType _textForTruncationGenerator;	// 32 = 0x20
    _Bool _hasCustomShieldSize;	// 40 = 0x28
    _Bool _hasCustomIconSize;	// 41 = 0x29
    _Bool _hasCustomFont;	// 42 = 0x2a
    long long _shieldSize;	// 48 = 0x30
    NSArray *_labelItems;	// 56 = 0x38
    double _spaceBetweenShields;	// 64 = 0x40
    double _maxShieldHeight;	// 72 = 0x48
    MKArtworkDataSourceCache *_artworkCache;	// 80 = 0x50
}

+ (long long)iconSizeForContentSizeCategory:(id)arg1;	// IMP=0x0000000000038159
+ (long long)shieldSizeForContentSizeCategory:(id)arg1;	// IMP=0x000000000003807b
+ (id)stringAttributesForFont:(id)arg1 lineBreakMode:(long long)arg2;	// IMP=0x0000000000037d54
- (void).cxx_destruct;	// IMP=0x00000000000382b7
@property(retain, nonatomic) MKArtworkDataSourceCache *artworkCache; // @synthesize artworkCache=_artworkCache;
@property(nonatomic) double maxShieldHeight; // @synthesize maxShieldHeight=_maxShieldHeight;
@property(nonatomic) double spaceBetweenShields; // @synthesize spaceBetweenShields=_spaceBetweenShields;
@property(copy, nonatomic) NSArray *labelItems; // @synthesize labelItems=_labelItems;
@property(nonatomic) long long shieldSize; // @synthesize shieldSize=_shieldSize;
@property(nonatomic) long long iconSize; // @synthesize iconSize=_iconSize;
- (void)_contentSizeCategoryDidChange;	// IMP=0x0000000000037f38
- (void)_setFont:(id)arg1 custom:(_Bool)arg2;	// IMP=0x0000000000037e5b
- (void)setFont:(id)arg1;	// IMP=0x0000000000037e44
- (id)_imageForShieldDataSource:(id)arg1;	// IMP=0x0000000000037b6d
- (id)_imageForArtworkDataSource:(id)arg1;	// IMP=0x0000000000037a11
- (id)_imageForLabelItem:(id)arg1;	// IMP=0x00000000000377a9
- (id)_stringAttributes;	// IMP=0x0000000000037730
- (void)setSpaceBetweenIcons:(double)arg1;	// IMP=0x00000000000376f9
- (id)_generateText;	// IMP=0x0000000000036386
- (void)_setupLabelInfo;	// IMP=0x000000000003633a
- (void)setMaxWidth:(double)arg1 textForTruncationGenerator:(CDUnknownBlockType)arg2;	// IMP=0x000000000003624f
- (void)setMapItem:(id)arg1;	// IMP=0x00000000000360d7
- (void)dealloc;	// IMP=0x0000000000036055
- (id)initWithLabelItems:(id)arg1 iconSize:(long long)arg2 shieldSize:(long long)arg3 spaceBetweenShields:(double)arg4 maxWidth:(double)arg5;	// IMP=0x0000000000035dce
- (id)initWithMapItem:(id)arg1 maxWidth:(double)arg2;	// IMP=0x0000000000035d24
- (id)initWithMapItem:(id)arg1;	// IMP=0x0000000000035d0a
- (id)init;	// IMP=0x0000000000035cf6

@end
