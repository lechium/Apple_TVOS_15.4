//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNPostalAddressEditorView, UIColor;

__attribute__((visibility("hidden")))
@interface CNPropertyPostalAddressEditingCell
{
    CNPostalAddressEditorView *_addressEditor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000097a3b
@property(retain, nonatomic) CNPostalAddressEditorView *addressEditor; // @synthesize addressEditor=_addressEditor;
- (void)layoutMarginsDidChange;	// IMP=0x00000000000979b2
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000009791e
@property(copy, nonatomic) UIColor *editorSeparatorColor;
- (void)layoutChanged:(id)arg1;	// IMP=0x00000000000977a9
- (void)valueChanged:(id)arg1;	// IMP=0x0000000000097698
- (void)updateWithPropertyItem:(id)arg1;	// IMP=0x00000000000974ff
- (void)setPresentingDelegate:(id)arg1;	// IMP=0x000000000009746b
- (id)valueView;	// IMP=0x0000000000097259
- (id)firstResponderItem;	// IMP=0x0000000000097247
- (id)constantConstraints;	// IMP=0x0000000000097095
- (double)rightContentMargin;	// IMP=0x000000000009708c
- (double)leftValueMargin;	// IMP=0x0000000000097083

@end
