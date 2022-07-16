//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFAccessoryProfileFiltering-Protocol.h>

@class HFAccessoryProfileFilterOptions, HMHome, NSMutableSet, NSString;

@interface HFAccessoryProfileItemProvider <HFAccessoryProfileFiltering>
{
    HFAccessoryProfileFilterOptions *_filterOptions;	// 8 = 0x8
    HMHome *_home;	// 16 = 0x10
    NSMutableSet *_profileItems;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000016dde0
@property(retain, nonatomic) NSMutableSet *profileItems; // @synthesize profileItems=_profileItems;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HFAccessoryProfileFilterOptions *filterOptions; // @synthesize filterOptions=_filterOptions;
- (id)_profileItemForProfile:(id)arg1;	// IMP=0x000000000016dcda
- (id)_supportedProfileClasses;	// IMP=0x000000000016dca8
- (id)invalidationReasons;	// IMP=0x000000000016dbc1
- (id)items;	// IMP=0x000000000016dbaf
- (id)reloadItems;	// IMP=0x000000000016d69e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016d638
- (id)init;	// IMP=0x000000000016d583
- (id)initWithHome:(id)arg1;	// IMP=0x000000000016d481

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

