//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPickerViewDataSource-Protocol.h>
#import <UIKitCore/UIPickerViewDelegate-Protocol.h>
#import <UIKitCore/UIWebFormControl-Protocol.h>

@class DOMHTMLSelectElement, NSArray, NSString;
@protocol UIWebSelectedItemPrivate;

__attribute__((visibility("hidden")))
@interface UIWebSelectSinglePicker <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate>
{
    DOMHTMLSelectElement *_selectNode;	// 80 = 0x50
    NSArray *_optionItems;	// 88 = 0x58
    id <UIWebSelectedItemPrivate> _selectedOptionItem;	// 96 = 0x60
    long long _selectedIndex;	// 104 = 0x68
    id <UIWebSelectedItemPrivate> _optionToSelectWhenDone;	// 112 = 0x70
    long long _indexToSelectWhenDone;	// 120 = 0x78
}

- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x000000000063b036
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x000000000063af3c
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x000000000063af1f
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x000000000063af14
- (void)controlEndEditing;	// IMP=0x000000000063ae87
- (void)controlBeginEditing;	// IMP=0x000000000063ae81
- (id)controlView;	// IMP=0x000000000063ae78
- (void)dealloc;	// IMP=0x000000000063adfe
- (id)initWithDOMHTMLSelectElement:(id)arg1 allItems:(id)arg2;	// IMP=0x000000000063ab40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

