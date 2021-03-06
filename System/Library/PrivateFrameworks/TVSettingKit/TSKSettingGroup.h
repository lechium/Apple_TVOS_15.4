//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol TSKSettingGroupDelegate;

@interface TSKSettingGroup
{
    _Bool _autoHide;	// 8 = 0x8
    _Bool _shouldAutoHide;	// 9 = 0x9
    _Bool _headerIsDirty;	// 10 = 0xa
    NSArray *_settingItems;	// 16 = 0x10
    NSArray *_visibleItems;	// 24 = 0x18
    id <TSKSettingGroupDelegate> _delegate;	// 32 = 0x20
}

+ (id)groupWithTitle:(id)arg1 settingItems:(id)arg2;	// IMP=0x0000000000012950
- (void).cxx_destruct;	// IMP=0x0000000000013fe0
@property(nonatomic) _Bool headerIsDirty; // @synthesize headerIsDirty=_headerIsDirty;
@property(nonatomic) _Bool shouldAutoHide; // @synthesize shouldAutoHide=_shouldAutoHide;
@property(nonatomic) __weak id <TSKSettingGroupDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool autoHide; // @synthesize autoHide=_autoHide;
@property(copy, nonatomic) NSArray *visibleItems; // @synthesize visibleItems=_visibleItems;
@property(copy, nonatomic) NSArray *settingItems; // @synthesize settingItems=_settingItems;
- (void)_applyUpdates:(_Bool)arg1;	// IMP=0x0000000000013750
- (void)_pruneDeletedItems;	// IMP=0x00000000000135b0
- (void)_prepareSettingItems;	// IMP=0x0000000000013500
- (id)_headerMetadata;	// IMP=0x0000000000013310
- (id)_metadata;	// IMP=0x0000000000013200
- (void)_performUpdateTransactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013080
- (void)_updateSettingItemsWithValue:(id)arg1;	// IMP=0x0000000000013020
- (void)_removeSettingItems:(id)arg1;	// IMP=0x0000000000012db0
- (void)_insertSettingItems:(id)arg1 afterItem:(id)arg2;	// IMP=0x0000000000012b90
@property(readonly, copy, nonatomic) NSArray *observableSettingItems;
- (_Bool)isHidden;	// IMP=0x0000000000012a60
- (id)initWithTitle:(id)arg1;	// IMP=0x00000000000128a0
- (id)initWithTitle:(id)arg1 description:(id)arg2 representedObject:(id)arg3 keyPath:(id)arg4 readOnly:(_Bool)arg5 accessoryTypes:(unsigned long long)arg6 childControllerClass:(Class)arg7;	// IMP=0x0000000000012710

@end

