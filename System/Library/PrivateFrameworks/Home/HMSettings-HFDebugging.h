//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMSettings.h>

#import <Home/HFStateDumpBuildable-Protocol.h>

@class NATreeNode, NSString;

@interface HMSettings (HFDebugging) <HFStateDumpBuildable>
+ (id)hf_LoadSettingsAllowlist:(unsigned long long)arg1;	// IMP=0x000000000024dbff
+ (void)hf_resetAllowlists;	// IMP=0x000000000024dbbe
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x0000000000077b7b
- (id)hf_accessorySettingItemAtKeyPath:(id)arg1;	// IMP=0x000000000024e066
- (id)hf_accessorySettingAtKeyPath:(id)arg1;	// IMP=0x000000000024dfd4
- (id)hf_accessorySettingGroupAtKeyPath:(id)arg1;	// IMP=0x000000000024df42
@property(readonly, nonatomic) NATreeNode *hf_codex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

