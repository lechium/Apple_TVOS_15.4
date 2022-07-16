//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, UIColor;

@interface _UIVisualEffectVibrantLayerConfig
{
    UIColor *_vibrantColor;	// 32 = 0x20
    UIColor *_tintColor;	// 40 = 0x28
    NSDictionary *_filterAttributes;	// 48 = 0x30
}

+ (id)layerWithVibrantColor:(id)arg1 tintColor:(id)arg2 filterType:(id)arg3 filterAttributes:(id)arg4;	// IMP=0x00000000000d8275
+ (id)layerWithVibrantColor:(id)arg1 tintColor:(id)arg2 filterType:(id)arg3;	// IMP=0x00000000000d825c
- (void).cxx_destruct;	// IMP=0x00000000000d9391
@property(readonly, copy, nonatomic) NSDictionary *filterAttributes; // @synthesize filterAttributes=_filterAttributes;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) UIColor *vibrantColor; // @synthesize vibrantColor=_vibrantColor;
- (id)description;	// IMP=0x00000000000d92c9
- (void)deconfigureLayerView:(id)arg1;	// IMP=0x00000000000d8d77
- (void)configureLayerView:(id)arg1;	// IMP=0x00000000000d8373

@end

