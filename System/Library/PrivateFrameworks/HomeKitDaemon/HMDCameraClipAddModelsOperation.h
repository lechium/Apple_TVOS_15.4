//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMBLocalZoneMirrorOutputObserver-Protocol.h>

@class NSSet, NSString;

@interface HMDCameraClipAddModelsOperation <HMBLocalZoneMirrorOutputObserver>
{
}

+ (id)logCategory;	// IMP=0x0000000000a83213
- (void)localZone:(id)arg1 willPerformMirrorOutputForModel:(id)arg2;	// IMP=0x0000000000a82e8b
- (void)updateMirrorOutputModel:(id)arg1;	// IMP=0x0000000000a82e85
@property(readonly, copy) NSSet *modelsToAdd;
- (void)main;	// IMP=0x0000000000a82c12

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

