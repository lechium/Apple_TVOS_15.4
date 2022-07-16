//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SiriTVUITemplateToggleButton, SiriTVUIToggleButtonTemplateItem, UIImage;

@interface SiriTVUITemplateToggleButtonController
{
    _Bool _currentState;	// 8 = 0x8
    UIImage *_onButtonPlaceHolderImage;	// 16 = 0x10
    UIImage *_offButtonPlaceHolderImage;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000012d64
@property(retain, nonatomic) UIImage *offButtonPlaceHolderImage; // @synthesize offButtonPlaceHolderImage=_offButtonPlaceHolderImage;
@property(retain, nonatomic) UIImage *onButtonPlaceHolderImage; // @synthesize onButtonPlaceHolderImage=_onButtonPlaceHolderImage;
@property(nonatomic, getter=_currentState, setter=_setCurrentState:) _Bool currentState; // @synthesize currentState=_currentState;
- (id)_placeHolderImageForSize:(struct CGSize)arg1;	// IMP=0x0000000000012c43
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000012b52
- (void)_buttonPressed:(id)arg1;	// IMP=0x00000000000127b3
- (void)_updateContentForTraitCollection:(id)arg1;	// IMP=0x0000000000011ef7
- (void)loadView;	// IMP=0x0000000000011c8e

// Remaining properties
@property(retain, nonatomic) SiriTVUIToggleButtonTemplateItem *templateItem; // @dynamic templateItem;
@property(retain, nonatomic) SiriTVUITemplateToggleButton *view; // @dynamic view;

@end

