//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/UITextFieldDelegate-Protocol.h>

@class NSString, UITextField;

__attribute__((visibility("hidden")))
@interface ABPostalNameContactEditingCell <UITextFieldDelegate>
{
    UITextField *_editingTextField;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000766b9
- (void)textFieldDidChange:(id)arg1;	// IMP=0x00000000000765c8
- (void)setCardGroupItem:(id)arg1;	// IMP=0x00000000000764df
- (id)firstResponderItem;	// IMP=0x00000000000764ca
- (void)prepareForReuse;	// IMP=0x000000000007647f
- (void)layoutSubviews;	// IMP=0x0000000000076330
- (void)dealloc;	// IMP=0x00000000000762a6
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000761b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
