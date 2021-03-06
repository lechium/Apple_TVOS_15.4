//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFHomeKitItemProtocol-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class HFItem, HMActionSet, NSString;
@protocol HFCharacteristicValueSource, HFHomeKitObject, HFServiceLikeItem;

@interface HFActionSetItem <HFHomeKitItemProtocol, NSCopying>
{
    HMActionSet *_actionSet;	// 8 = 0x8
    unsigned long long _actionSetItemStyle;	// 16 = 0x10
    id <HFCharacteristicValueSource> _valueSource;	// 24 = 0x18
    HFItem<HFServiceLikeItem> *_serviceLikeItem;	// 32 = 0x20
}

+ (id)_primaryStateForActionSet:(id)arg1 valueSource:(id)arg2 logger:(id)arg3 fastInitialUpdate:(_Bool)arg4;	// IMP=0x00000000002727a3
+ (_Bool)_value:(id)arg1 isApproximatelyEqualToValue:(id)arg2 forMinimumValue:(id)arg3 maximumValue:(id)arg4;	// IMP=0x0000000000272525
- (void).cxx_destruct;	// IMP=0x00000000002765be
@property(copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem; // @synthesize serviceLikeItem=_serviceLikeItem;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, nonatomic) unsigned long long actionSetItemStyle; // @synthesize actionSetItemStyle=_actionSetItemStyle;
@property(readonly, nonatomic) HMActionSet *actionSet; // @synthesize actionSet=_actionSet;
- (id)actionSetOperation:(id)arg1 errorFromError:(id)arg2;	// IMP=0x00000000002763d3
- (id)turnOffActionSet;	// IMP=0x0000000000275b1f
- (id)executeActionSet;	// IMP=0x00000000002758bd
- (id)rooms;	// IMP=0x0000000000275341
- (id)_mostCommonRoomForActionSet:(id)arg1;	// IMP=0x0000000000272360
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x00000000002715c1
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;	// IMP=0x00000000002715b9
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000271300
- (id)init;	// IMP=0x000000000027124b
- (id)initWithActionSet:(id)arg1 actionSetItemStyle:(unsigned long long)arg2 valueSource:(id)arg3;	// IMP=0x0000000000271196

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

