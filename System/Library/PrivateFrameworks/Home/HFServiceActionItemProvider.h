//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFActionSetValueSource, HFItemBuilder, HMActionSet, HMHome, NSMutableSet;
@protocol HFActionSetBuilderProtocol, HFActionSetValueSourceDelegate;

@interface HFServiceActionItemProvider
{
    HMHome *_home;	// 8 = 0x8
    HMActionSet *_actionSet;	// 16 = 0x10
    HFItemBuilder<HFActionSetBuilderProtocol> *_actionSetBuilder;	// 24 = 0x18
    CDUnknownBlockType _filter;	// 32 = 0x20
    NSMutableSet *_actionItems;	// 40 = 0x28
    HFActionSetValueSource *_valueSource;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002316b7
@property(retain, nonatomic) HFActionSetValueSource *valueSource; // @synthesize valueSource=_valueSource;
@property(retain, nonatomic) NSMutableSet *actionItems; // @synthesize actionItems=_actionItems;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(retain, nonatomic) HFItemBuilder<HFActionSetBuilderProtocol> *actionSetBuilder; // @synthesize actionSetBuilder=_actionSetBuilder;
@property(retain, nonatomic) HMActionSet *actionSet; // @synthesize actionSet=_actionSet;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)_addOrUpdateActionItemWithMediaAction:(id)arg1 mediaActionBuilder:(id)arg2 addedActionItems:(id)arg3 home:(id)arg4;	// IMP=0x00000000002310ea
- (id)_addOrUpdateActionItemWithAction:(id)arg1 actionBuilder:(id)arg2 addedActionItems:(id)arg3 home:(id)arg4;	// IMP=0x0000000000230d23
- (id)_createActionItemForMediaProfile:(id)arg1 home:(id)arg2;	// IMP=0x0000000000230c49
- (id)_createActionItemForCharacteristic:(id)arg1 home:(id)arg2;	// IMP=0x0000000000230a8d
- (id)_findServiceActionForIdentifier:(id)arg1 addedActionItems:(id)arg2;	// IMP=0x00000000002302d7
- (id)_actionItemForMediaProfile:(id)arg1 addedActionItems:(id)arg2 home:(id)arg3;	// IMP=0x00000000002301ff
- (id)_actionItemForCharacteristic:(id)arg1 addedActionItems:(id)arg2 home:(id)arg3;	// IMP=0x00000000002300a3
- (id)invalidationReasons;	// IMP=0x0000000000230002
- (id)items;	// IMP=0x000000000022fff0
- (id)reloadItems;	// IMP=0x000000000022f33a
@property(nonatomic) __weak id <HFActionSetValueSourceDelegate> actionSetValueSourceDelegate;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022f19e
- (id)initWithHome:(id)arg1 actionSetBuilder:(id)arg2;	// IMP=0x000000000022f0c8
- (id)initWithHome:(id)arg1 actionSet:(id)arg2;	// IMP=0x000000000022eff2
- (id)init;	// IMP=0x000000000022ef3d

@end

