//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PKDiffView, PKPassColorProfile, PKPassField, PKPassFieldTemplate, UILabel;

@interface PKPassFieldView : UIView
{
    _Bool _needsRecalculation;	// 8 = 0x8
    struct CGSize _cachedSize;	// 16 = 0x10
    long long _background;	// 32 = 0x20
    PKPassField *_field;	// 40 = 0x28
    PKPassFieldTemplate *_fieldTemplate;	// 48 = 0x30
    PKPassColorProfile *_colorProfile;	// 56 = 0x38
    PKDiffView *_diffView;	// 64 = 0x40
    UILabel *_labelLabel;	// 72 = 0x48
    UILabel *_valueLabel;	// 80 = 0x50
}

+ (id)newViewForField:(id)arg1 fieldTemplate:(id)arg2;	// IMP=0x000000000007d497
- (void).cxx_destruct;	// IMP=0x000000000007f2ab
@property(readonly, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(readonly, nonatomic) UILabel *labelLabel; // @synthesize labelLabel=_labelLabel;
@property(retain, nonatomic) PKDiffView *diffView; // @synthesize diffView=_diffView;
@property(retain, nonatomic) PKPassColorProfile *colorProfile; // @synthesize colorProfile=_colorProfile;
@property(retain, nonatomic) PKPassFieldTemplate *fieldTemplate; // @synthesize fieldTemplate=_fieldTemplate;
@property(retain, nonatomic) PKPassField *field; // @synthesize field=_field;
- (id)_valueAttributedStringForColorProfile:(id)arg1;	// IMP=0x000000000007efdc
- (id)_labelAttributedStringForColorProfile:(id)arg1;	// IMP=0x000000000007ed25
- (struct CGSize)_resizeMultiLineValueFontForAvailableSize:(struct CGSize)arg1;	// IMP=0x000000000007e977
- (_Bool)_shouldDisplayLabel;	// IMP=0x000000000007e8bf
- (void)presentDiff:(id)arg1 inView:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000007e58b
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000007e161
- (void)invalidateCachedFieldSize;	// IMP=0x000000000007e150
- (void)layoutSubviews;	// IMP=0x000000000007dd12
- (void)setColorProfile:(id)arg1 background:(long long)arg2;	// IMP=0x000000000007dc54
- (id)description;	// IMP=0x000000000007d6eb
- (void)dealloc;	// IMP=0x000000000007d6bc
- (id)initWithField:(id)arg1 fieldTemplate:(id)arg2;	// IMP=0x000000000007d522

@end

