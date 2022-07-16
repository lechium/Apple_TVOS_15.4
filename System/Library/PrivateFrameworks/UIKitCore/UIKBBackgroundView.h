//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIKBCacheableView-Protocol.h>

@class NSObject, NSString, UIKBRenderConfig, UIKBScreenTraits, UIKBTree, UITextInputTraits;

__attribute__((visibility("hidden")))
@interface UIKBBackgroundView <UIKBCacheableView>
{
    UIKBTree *_keyplane;	// 112 = 0x70
    UITextInputTraits *_inputTraits;	// 120 = 0x78
    int _visualStyle;	// 128 = 0x80
    NSObject *_geometryCacheKey;	// 136 = 0x88
    struct CGRect _splitLeftRect;	// 144 = 0x90
    struct CGRect _splitLeftCacheRect;	// 176 = 0xb0
    struct CGRect _splitRightRect;	// 208 = 0xd0
    struct CGRect _splitRightCacheRect;	// 240 = 0xf0
    unsigned long long _topCorners;	// 272 = 0x110
    _Bool _isSplit;	// 280 = 0x118
    _Bool _centerFilled;	// 281 = 0x119
    _Bool _hasCandidateKeys;	// 282 = 0x11a
    UIKBRenderConfig *_renderConfig;	// 288 = 0x120
    UIKBScreenTraits *_screenTraits;	// 296 = 0x128
}

@property(retain, nonatomic) UIKBScreenTraits *screenTraits; // @synthesize screenTraits=_screenTraits;
@property(retain, nonatomic) NSObject *geometryCacheKey; // @synthesize geometryCacheKey=_geometryCacheKey;
@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
@property(readonly, nonatomic) long long assetIdiom;
@property(readonly, nonatomic) _Bool keepNonPersistent;
@property(readonly, nonatomic) double cachedWidth;
@property(readonly, nonatomic) _Bool cacheDeferable;
- (void)displayLayer:(id)arg1;	// IMP=0x00000000008ae254
- (id)cacheKeysForRenderFlags:(id)arg1;	// IMP=0x00000000008ae08b
@property(readonly, nonatomic) NSString *cacheKey;
- (void)drawContentsOfRenderers:(id)arg1;	// IMP=0x00000000008add21
- (_Bool)_canDrawContent;	// IMP=0x00000000008add19
- (void)refreshStyleForKeyplane:(id)arg1 inputTraits:(id)arg2;	// IMP=0x00000000008ada22
- (void)dealloc;	// IMP=0x00000000008ad9ae
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000008ad938

// Remaining properties
@property(readonly, nonatomic) long long cacheDeferPriority;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
