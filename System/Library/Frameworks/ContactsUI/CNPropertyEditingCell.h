//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/CNPickerControllerDelegate-Protocol.h>

@class CNRepeatingGradientSeparatorView, NSString, UIButton;

__attribute__((visibility("hidden")))
@interface CNPropertyEditingCell <CNPickerControllerDelegate>
{
    UIButton *_labelButton;	// 56 = 0x38
    CNRepeatingGradientSeparatorView *_vseparator;	// 64 = 0x40
}

+ (id)keyPathsForValuesAffectingEffectiveLabelWidth;	// IMP=0x000000000007dc46
+ (_Bool)wantsStandardConstraints;	// IMP=0x000000000007d356
+ (_Bool)wantsChevron;	// IMP=0x000000000007d34e
- (void).cxx_destruct;	// IMP=0x000000000007e536
@property(retain, nonatomic) CNRepeatingGradientSeparatorView *vseparator; // @synthesize vseparator=_vseparator;
@property(readonly, nonatomic) UIButton *labelButton; // @synthesize labelButton=_labelButton;
- (void)picker:(id)arg1 didPickItem:(id)arg2;	// IMP=0x000000000007e418
- (void)pickerDidCancel:(id)arg1;	// IMP=0x000000000007e3a3
- (id)constantConstraints;	// IMP=0x000000000007dd24
- (double)effectiveLabelWidth;	// IMP=0x000000000007dc66
- (double)minCellHeight;	// IMP=0x000000000007dc38
@property(readonly, nonatomic) double leftValueMargin;
- (id)valueString;	// IMP=0x000000000007dbda
- (void)setValueTextAttributes:(id)arg1;	// IMP=0x000000000007dabc
- (void)updateWithPropertyItem:(id)arg1;	// IMP=0x000000000007d740
- (void)labelButtonClicked:(id)arg1;	// IMP=0x000000000007d604
- (id)labelView;	// IMP=0x000000000007d4a9
- (void)dealloc;	// IMP=0x000000000007d434
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000007d35e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
