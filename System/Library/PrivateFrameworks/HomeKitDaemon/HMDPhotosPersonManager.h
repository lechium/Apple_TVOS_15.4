//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDDatabaseZoneManagerDataSource-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDUser, HMIExternalPersonManager, HMPhotosPersonManagerSettings, NSString;

@interface HMDPhotosPersonManager <HMFLogging, HMDDatabaseZoneManagerDataSource>
{
    HMPhotosPersonManagerSettings *_dataUnavailableExternalSettings;	// 8 = 0x8
    HMDUser *_user;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00000000001829bc
- (void).cxx_destruct;	// IMP=0x000000000018292f
@property __weak HMDUser *user; // @synthesize user=_user;
@property(readonly, copy) HMPhotosPersonManagerSettings *dataUnavailableExternalSettings; // @synthesize dataUnavailableExternalSettings=_dataUnavailableExternalSettings;
- (_Bool)zoneManager:(id)arg1 shouldRequestShareInvitationFromUser:(id)arg2;	// IMP=0x0000000000182855
- (_Bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;	// IMP=0x00000000001827db
- (void)handleUpdatedSettings:(id)arg1;	// IMP=0x000000000018258e
@property(readonly, copy) HMPhotosPersonManagerSettings *settings;
@property(readonly) HMIExternalPersonManager *hmiPersonManager;
- (_Bool)sharesFaceClassifications;	// IMP=0x0000000000182479
- (id)initWithUUID:(id)arg1 zoneManager:(id)arg2 dataReceivers:(id)arg3 workQueue:(id)arg4 user:(id)arg5;	// IMP=0x00000000001823cc
- (id)initWithUser:(id)arg1 zoneUUID:(id)arg2 workQueue:(id)arg3;	// IMP=0x0000000000181fbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

