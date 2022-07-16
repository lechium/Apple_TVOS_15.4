//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFPinCodeItemProvider, HFPinCodeManager, HFStaticItem, HMAccessory, HMHome, NSSet;
@protocol HFItemSectionAccessoryButtonHeaderDelegate;

@interface HFPinCodeListModule
{
    NSSet *_itemProviders;	// 8 = 0x8
    HMHome *_home;	// 16 = 0x10
    HFStaticItem *_addPinCodeItem;	// 24 = 0x18
    HFStaticItem *_revokePinCodeItem;	// 32 = 0x20
    HFPinCodeManager *_pinCodeManager;	// 40 = 0x28
    HMAccessory *_accessory;	// 48 = 0x30
    unsigned long long _listType;	// 56 = 0x38
    HFPinCodeItemProvider *_pinCodeItemProvider;	// 64 = 0x40
    id <HFItemSectionAccessoryButtonHeaderDelegate> _editButtonHeaderDelegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000c4e30
@property(nonatomic) __weak id <HFItemSectionAccessoryButtonHeaderDelegate> editButtonHeaderDelegate; // @synthesize editButtonHeaderDelegate=_editButtonHeaderDelegate;
@property(retain, nonatomic) HFPinCodeItemProvider *pinCodeItemProvider; // @synthesize pinCodeItemProvider=_pinCodeItemProvider;
@property(nonatomic) unsigned long long listType; // @synthesize listType=_listType;
@property(retain, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) HFPinCodeManager *pinCodeManager; // @synthesize pinCodeManager=_pinCodeManager;
@property(retain, nonatomic) HFStaticItem *revokePinCodeItem; // @synthesize revokePinCodeItem=_revokePinCodeItem;
@property(retain, nonatomic) HFStaticItem *addPinCodeItem; // @synthesize addPinCodeItem=_addPinCodeItem;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)buildSectionsWithDisplayedItems:(id)arg1;	// IMP=0x00000000000c4915
- (id)_sectionIdentifier;	// IMP=0x00000000000c48b7
- (id)itemProviders;	// IMP=0x00000000000c4346
- (id)initWithItemUpdater:(id)arg1 pinCodeManager:(id)arg2 listType:(unsigned long long)arg3 home:(id)arg4 forAccessory:(id)arg5;	// IMP=0x00000000000c4260

@end
