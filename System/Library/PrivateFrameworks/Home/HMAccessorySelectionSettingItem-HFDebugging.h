//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMAccessorySelectionSettingItem.h>

#import <Home/HFHomeKitObject-Protocol.h>
#import <Home/HFStateDumpBuildable-Protocol.h>

@class NSString, NSUUID;

@interface HMAccessorySelectionSettingItem (HFDebugging) <HFStateDumpBuildable, HFHomeKitObject>
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x0000000000078b82
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

