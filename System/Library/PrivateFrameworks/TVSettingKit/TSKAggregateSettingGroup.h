//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKSettingGroupDelegate-Protocol.h>

@class NSArray, NSString;

@interface TSKAggregateSettingGroup <TSKSettingGroupDelegate>
{
    NSArray *_settingGroups;	// 8 = 0x8
}

+ (id)groupWithTitle:(id)arg1 settingItems:(id)arg2;	// IMP=0x000000000002d390
+ (id)groupWithTitle:(id)arg1 settingGroups:(id)arg2;	// IMP=0x000000000002d280
- (void).cxx_destruct;	// IMP=0x000000000002e3a0
@property(copy, nonatomic) NSArray *settingGroups; // @synthesize settingGroups=_settingGroups;
- (void)_refreshSettingItemsWithGroups:(id)arg1;	// IMP=0x000000000002e0e0
- (void)settingGroup:(id)arg1 willRemoveItems:(id)arg2;	// IMP=0x000000000002e010
- (void)settingGroup:(id)arg1 didInsertItems:(id)arg2;	// IMP=0x000000000002df40
- (void)_updateSettingItemsWithValue:(id)arg1;	// IMP=0x000000000002dcb0
- (void)_prepareSettingItems;	// IMP=0x000000000002daa0
- (void)_pruneDeletedItems;	// IMP=0x000000000002d890
- (void)_removeSettingItems:(id)arg1;	// IMP=0x000000000002d830
- (void)_insertSettingItems:(id)arg1 afterItem:(id)arg2;	// IMP=0x000000000002d7b0
- (id)observableSettingItems;	// IMP=0x000000000002d470
- (id)initWithTitle:(id)arg1;	// IMP=0x000000000002d410

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

