//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMDataSetting.h>

#import <Home/HFStateDumpBuildable-Protocol.h>

@class NSString;

@interface HMDataSetting (HFDebugging) <HFStateDumpBuildable>
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x0000000000078905
- (id)hf_debugValueForData:(unsigned long long *)arg1;	// IMP=0x000000000007877e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

