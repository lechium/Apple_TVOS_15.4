//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMIExternalPersonManagerDataSource-Protocol.h>

@class HMIExternalPersonManager, NSString;

@interface HMDHomeAIPhotosPersonDataReceiver <HMFLogging, HMIExternalPersonManagerDataSource>
{
    HMIExternalPersonManager *_photosPersonManager;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0000000000420b25
- (void).cxx_destruct;	// IMP=0x00000000004208f1
@property(readonly) HMIExternalPersonManager *photosPersonManager; // @synthesize photosPersonManager=_photosPersonManager;
- (void)handleUpdatedSettings:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x000000000042075d
- (void)fetchSettingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000004206ac
- (id)logIdentifier;	// IMP=0x0000000000420632
- (id)initWithPhotosPersonManager:(id)arg1 workQueue:(id)arg2;	// IMP=0x00000000004205b7
- (id)initWithPersonManagerUUID:(id)arg1 homeUUID:(id)arg2 workQueue:(id)arg3;	// IMP=0x0000000000420501

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
