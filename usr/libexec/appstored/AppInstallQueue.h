//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppInstallsDatabaseStore, AssetSession, MISSING_TYPE, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface AppInstallQueue : NSObject
{
    AssetSession *_assetSession;	// 8 = 0x8
    AppInstallsDatabaseStore *_databaseStore;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    MISSING_TYPE *_operationQueue;	// 32 = 0x20
    NSMutableDictionary *_requestLookup;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0020000000244d90
- (void).cxx_destruct;	// IMP=0x002000000024a488
- (void)_releaseTerminationAssertionUsingInstallInfo:(id)arg1;	// IMP=0x001000000024a482
- (void)_endEventServiceInstallationEventForBundleID:(id)arg1;	// IMP=0x001000000024a47c
- (void)_postEventServiceInstallationEventWithPhase:(long long)arg1 forInstallInfo:(id)arg2 entity:(id)arg3;	// IMP=0x001000000024a476
- (void)_handleRecoveryResult:(_Bool)arg1 error:(id)arg2 usingInstallInfo:(id)arg3;	// IMP=0x001000000024a20b
- (void)_stopObservingAssetProgressUsingInstallInfo:(id)arg1;	// IMP=0x001000000024a112
- (void)_reportUpdateMetricsForResult:(id)arg1 usingInstallInfo:(id)arg2;	// IMP=0x0010000000249c20
- (CDStruct_7c993c55)_handleAssetRestartForInstall:(id)arg1 installInfo:(id)arg2 transaction:(id)arg3;	// IMP=0x001000000024991e
- (_Bool)_handleAssetExpiryForInstall:(id)arg1 usingInstallInfo:(id)arg2 transaction:(id)arg3;	// IMP=0x00100000002495f4
- (CDStruct_7c993c55)_handleAssetError:(id)arg1 usingInstallInfo:(id)arg2 transaction:(id)arg3;	// IMP=0x0010000000249218
- (void)_handleAssetSuccessUsingInstallInfo:(id)arg1 transaction:(id)arg2;	// IMP=0x0010000000248f92
- (void)_handleAssetResult:(id)arg1 error:(id)arg2 usingInstallInfo:(id)arg3;	// IMP=0x0010000000248a14
- (void)_finishPostambleTaskWithInstallInfo:(id)arg1;	// IMP=0x0010000000248884
- (void)_finishPreambleTaskWithResponse:(id)arg1;	// IMP=0x0010000000247f66
- (void)_finishInstallingOperationWithResponse:(id)arg1;	// IMP=0x0010000000247bac
- (void)_finishDownloadingOperationWithResponse:(id)arg1;	// IMP=0x00100000002473d1
- (void)_beginPreambleWithTask:(id)arg1 transaction:(id)arg2;	// IMP=0x001000000024703a
- (void)_beginPreambleUsingInstallInfo:(id)arg1 transaction:(id)arg2;	// IMP=0x0010000000246f41
- (void)_beginPreambleForInstallsMatchingPredicate:(id)arg1 transaction:(id)arg2;	// IMP=0x0010000000246b86
- (void)_beginPostambleUsingInstallInfo:(id)arg1 transaction:(id)arg2;	// IMP=0x001000000024686d
- (void)_beginInstallingUsingInstallInfo:(id)arg1 transaction:(id)arg2;	// IMP=0x001000000024647f
- (void)_beginDownloadingUsingInstallInfo:(id)arg1 transaction:(id)arg2;	// IMP=0x00100000002460cb
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000245e49
- (void)stopInstallID:(long long)arg1 withReason:(long long)arg2 transaction:(id)arg3;	// IMP=0x0010000000245cfa
- (void)startInstallIDs:(id)arg1 transaction:(id)arg2;	// IMP=0x00100000002459f2
- (void)finishInstallID:(long long)arg1 transaction:(id)arg2;	// IMP=0x001000000024577b
- (void)validateActiveInstallations;	// IMP=0x0010000000244efb
- (id)init;	// IMP=0x0010000000244de5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

