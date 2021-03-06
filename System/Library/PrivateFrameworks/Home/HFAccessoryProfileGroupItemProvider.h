//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFAccessoryProfileFiltering-Protocol.h>
#import <Home/HFAccessoryProfileGrouping-Protocol.h>

@class HFAccessoryProfileFilterOptions, HFAccessoryProfileGroupOptions, HMHome, NSMutableSet, NSString;

@interface HFAccessoryProfileGroupItemProvider <HFAccessoryProfileFiltering, HFAccessoryProfileGrouping>
{
    HFAccessoryProfileFilterOptions *_filterOptions;	// 8 = 0x8
    HFAccessoryProfileGroupOptions *_groupOptions;	// 16 = 0x10
    HMHome *_home;	// 24 = 0x18
    NSMutableSet *_profileGroupItems;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000013b313
@property(retain, nonatomic) NSMutableSet *profileGroupItems; // @synthesize profileGroupItems=_profileGroupItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HFAccessoryProfileGroupOptions *groupOptions; // @synthesize groupOptions=_groupOptions;
@property(retain, nonatomic) HFAccessoryProfileFilterOptions *filterOptions; // @synthesize filterOptions=_filterOptions;
- (id)_profileGroupItemForProfiles:(id)arg1 groupIdentifier:(id)arg2;	// IMP=0x000000000013b19c
- (id)_supportedProfileClasses;	// IMP=0x000000000013b16a
- (id)invalidationReasons;	// IMP=0x000000000013b083
- (id)items;	// IMP=0x000000000013b071
- (id)reloadItems;	// IMP=0x000000000013ab27
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013aac1
- (id)init;	// IMP=0x000000000013aa0c
- (id)initWithHome:(id)arg1;	// IMP=0x000000000013a8ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

