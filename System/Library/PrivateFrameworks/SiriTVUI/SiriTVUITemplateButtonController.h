//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, SiriTVUIButtonTemplateItem, SiriTVUITemplateButton;

@interface SiriTVUITemplateButtonController
{
    NSMutableDictionary *_cachedBackgroundImages;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000272bf
@property(retain, nonatomic) NSMutableDictionary *cachedBackgroundImages; // @synthesize cachedBackgroundImages=_cachedBackgroundImages;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000271a9
- (_Bool)prefersFocus;	// IMP=0x00000000000271a1
- (id)_imageWithRightBorderOfColor:(id)arg1 fromImage:(id)arg2 forDisplayScale:(double)arg3;	// IMP=0x0000000000026fba
- (void)_buttonPressed:(id)arg1;	// IMP=0x0000000000026b77
- (void)_updateContentForTraitCollection:(id)arg1;	// IMP=0x00000000000262d6
- (void)loadView;	// IMP=0x0000000000025fe7
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000025f8a

// Remaining properties
@property(retain, nonatomic) SiriTVUIButtonTemplateItem *templateItem; // @dynamic templateItem;
@property(retain, nonatomic) SiriTVUITemplateButton *view; // @dynamic view;

@end

