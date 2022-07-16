//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKSQLiteExecutor;

@interface AKAuthorizationStoreManager : NSObject
{
    AKSQLiteExecutor *_executor;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x004000000000f704
- (void).cxx_destruct;	// IMP=0x0020000000013ab7
@property(retain, nonatomic) AKSQLiteExecutor *executor; // @synthesize executor=_executor;
- (void)clearDatabase:(id *)arg1;	// IMP=0x0010000000013a41
- (void)_setDatabaseVersionToVersion:(long long)arg1;	// IMP=0x0010000000013742
- (void)setListVersionToVersion:(id)arg1;	// IMP=0x00100000000134b7
- (id)fetchAuthorizationListVersion;	// IMP=0x0010000000013251
- (id)_fetchAllAuthorizedClientIDs;	// IMP=0x0010000000012eb4
- (id)_optionalValueWithString:(id)arg1;	// IMP=0x0010000000012e72
- (id)_fetchApplicationsForTeamID:(id)arg1;	// IMP=0x00100000000128d0
- (id)_handleRevokedApplicationsForVersion:(id)arg1;	// IMP=0x00100000000122dd
- (void)_storeConsentedApplication:(id)arg1 teamID:(id)arg2 listVersion:(id)arg3;	// IMP=0x0010000000011e08
- (void)_storeDeveloperTeam:(id)arg1 listVersion:(id)arg2;	// IMP=0x0010000000011999
- (_Bool)_shouldUpdateDatabaseToListVersion:(id)arg1;	// IMP=0x001000000001192c
- (void)_addTemporaryDeveloperTeam:(id)arg1;	// IMP=0x0010000000011913
- (void)revokeAuthorizationForAllApplicationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001157a
- (void)removeApplicationWithClientID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011160
- (void)revokeAuthorizationForApplicationWithClientID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010dfd
- (void)performUnsafeVerificationWithUserID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010ab9
- (void)fetchDeveloperTeamWithClientID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010682
- (void)fetchDeveloperTeamWithTeamID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010072
- (void)storeAuthorization:(id)arg1 forClient:(id)arg2;	// IMP=0x001000000000fd0e
- (void)updateAuthorizationListWithMetadataInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f8d3
- (id)initWithPath:(id)arg1;	// IMP=0x001000000000f7dd
- (id)initWithExecutor:(id)arg1;	// IMP=0x001000000000f772
- (id)init;	// IMP=0x001000000000f759

@end

