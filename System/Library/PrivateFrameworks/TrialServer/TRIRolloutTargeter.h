//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/TRIRolloutTargeting-Protocol.h>

@class TRIRolloutDatabase;
@protocol TRISystemCovariateProviding, TRIUserCovariateProviding;

@interface TRIRolloutTargeter : NSObject <TRIRolloutTargeting>
{
    TRIRolloutDatabase *_db;	// 8 = 0x8
    id <TRISystemCovariateProviding> _systemCovariateProvider;	// 16 = 0x10
    id <TRIUserCovariateProviding> _userCovariateProvider;	// 24 = 0x18
}

+ (id)targetingErrorWithDeployment:(id)arg1 errorType:(id)arg2;	// IMP=0x00000000000fb987
+ (id)_targetingErrorWithDeployment:(id)arg1 errorType:(id)arg2 details:(id)arg3;	// IMP=0x00000000000fb5dd
- (void).cxx_destruct;	// IMP=0x00000000000fd1d4
@property(readonly, nonatomic) id <TRIUserCovariateProviding> userCovariateProvider; // @synthesize userCovariateProvider=_userCovariateProvider;
@property(readonly, nonatomic) id <TRISystemCovariateProviding> systemCovariateProvider; // @synthesize systemCovariateProvider=_systemCovariateProvider;
- (CDStruct_6b48f683)_targetRollout:(id)arg1 factorPackSetId:(id *)arg2 relatedRampDeployment:(id *)arg3 recurseOnRamp:(_Bool)arg4 error:(id *)arg5;	// IMP=0x00000000000fbbc5
- (CDStruct_6b48f683)targetRollout:(id)arg1 factorPackSetId:(id *)arg2 relatedRampDeployment:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000000fbba0
- (id)_activeRecordForRolloutId:(id)arg1;	// IMP=0x00000000000fb9fe
- (id)initWithDatabase:(id)arg1 systemCovariateProvider:(id)arg2 userCovariateProvider:(id)arg3;	// IMP=0x00000000000fb526
- (id)init;	// IMP=0x00000000000fb520

@end

