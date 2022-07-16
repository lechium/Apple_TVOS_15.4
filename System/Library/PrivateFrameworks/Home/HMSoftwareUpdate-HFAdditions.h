//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMSoftwareUpdate.h>

#import <Home/HFHomeKitObject-Protocol.h>
#import <Home/HFStateDumpBuildable-Protocol.h>

@class NSString, NSUUID;

@interface HMSoftwareUpdate (HFAdditions) <HFStateDumpBuildable, HFHomeKitObject>
+ (id)hf_hashWithAccessory:(id)arg1;	// IMP=0x00000000000055f0
+ (CDUnknownBlockType)hf_sortComparator;	// IMP=0x0000000000005514
+ (id)hf_stringFromUpdateState:(long long)arg1;	// IMP=0x00000000000054bc
- (_Bool)hf_isHomePodUpdate;	// IMP=0x0000000000005c4c
- (_Bool)hf_shouldShowSoftwareUpdateInfo;	// IMP=0x0000000000005c11
- (_Bool)hf_possessesNecessaryDocumentation;	// IMP=0x0000000000005a27
- (_Bool)hf_isInstalled;	// IMP=0x00000000000059ec
- (_Bool)hf_isInstalling;	// IMP=0x0000000000005945
- (_Bool)hf_isDownloading;	// IMP=0x000000000000589f
- (_Bool)hf_isInProgress;	// IMP=0x0000000000005866
- (_Bool)hf_isReadyToInstall;	// IMP=0x00000000000057ae
- (id)hf_stringFromState;	// IMP=0x0000000000005769
- (id)hf_fetchNeedsAttentionReasons;	// IMP=0x0000000000005750
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x0000000000077039

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end
