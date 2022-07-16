//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAlertController.h>

#import <TVSettingKit/TSKSettingItemEditingController-Protocol.h>

@class NSArray, NSString, TSKSettingItem;
@protocol TSKSettingItemEditingControllerDelegate;

@interface TSKMultiValueViewController : UIAlertController <TSKSettingItemEditingController>
{
    NSArray *_sortedLocalizedAvailableValues;	// 8 = 0x8
    NSArray *_sortedAvailableValues;	// 16 = 0x10
    TSKSettingItem *_editingItem;	// 24 = 0x18
    id <TSKSettingItemEditingControllerDelegate> _editingDelegate;	// 32 = 0x20
}

+ (id)multiValueControllerWithSettingItem:(id)arg1;	// IMP=0x0000000000028a30
- (void).cxx_destruct;	// IMP=0x0000000000029de0
@property(nonatomic) __weak id <TSKSettingItemEditingControllerDelegate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
@property(retain, nonatomic) TSKSettingItem *editingItem; // @synthesize editingItem=_editingItem;
- (void)_sortItemsIfNeeded;	// IMP=0x0000000000029b80
- (id)_sortedAvailableValues;	// IMP=0x0000000000029ab0
- (id)_sortedLocalizedAvailableValues;	// IMP=0x00000000000299d0
- (void)_updateAppearance;	// IMP=0x0000000000028b70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

