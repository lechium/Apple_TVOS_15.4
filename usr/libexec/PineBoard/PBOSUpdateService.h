//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBSOSUpdateManagerClient, PBSystemServiceConnection;
@protocol PBSOSUpdateServiceDelegate;

@interface PBOSUpdateService : NSObject
{
    id <PBSOSUpdateServiceDelegate> _delegate;	// 8 = 0x8
    PBSOSUpdateManagerClient *_managerClientDelegate;	// 16 = 0x10
    PBSystemServiceConnection *_remoteConnection;	// 24 = 0x18
}

+ (void)_obliterateDataPreservingPaths:(id)arg1 clearAccounts:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x002000000013b110
- (void).cxx_destruct;	// IMP=0x002000000013caa0
@property(readonly, nonatomic) __weak PBSystemServiceConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
- (void)didFinishApplyWithData:(id)arg1;	// IMP=0x001000000013c9e0
- (void)didUpdateApplyProgressWithData:(id)arg1;	// IMP=0x001000000013c950
- (void)didStartApplyWithData:(id)arg1;	// IMP=0x001000000013c8c0
- (void)didStartRedownloadWithData:(id)arg1;	// IMP=0x001000000013c830
- (void)didFinishDownloadWithData:(id)arg1;	// IMP=0x001000000013c7a0
- (void)didUpdateDownloadProgressWithData:(id)arg1;	// IMP=0x001000000013c710
- (void)didStartDownloadWithData:(id)arg1;	// IMP=0x001000000013c680
- (void)didFinishCheckWithData:(id)arg1;	// IMP=0x001000000013c5f0
- (void)didStartCheckWithData:(id)arg1;	// IMP=0x001000000013c560
- (void)obliterateDataPreservingPaths:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000013c4d0
- (void)purgeAssetsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000013c3c0
- (void)purgeableAssetSpaceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000013c2b0
- (void)cancelUpdate;	// IMP=0x001000000013c230
- (void)isUpdateRunningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000013c120
- (void)restore;	// IMP=0x001000000013c0a0
- (void)installUpdate:(id)arg1 withOptions:(id)arg2 withResult:(CDUnknownBlockType)arg3;	// IMP=0x001000000013bed0
- (void)isUpdate:(id)arg1 readyForInstallation:(CDUnknownBlockType)arg2;	// IMP=0x001000000013bd70
- (void)isDownloading:(CDUnknownBlockType)arg1;	// IMP=0x001000000013bc60
- (void)setAssetDownloadIsDiscretionary:(_Bool)arg1;	// IMP=0x001000000013bba0
- (void)currentDownload:(CDUnknownBlockType)arg1;	// IMP=0x001000000013ba90
- (void)purgeDownload:(CDUnknownBlockType)arg1;	// IMP=0x001000000013b980
- (void)cancelDownload:(CDUnknownBlockType)arg1;	// IMP=0x001000000013b870
- (void)startDownload:(CDUnknownBlockType)arg1;	// IMP=0x001000000013b760
- (void)isCheckingForUpdates:(CDUnknownBlockType)arg1;	// IMP=0x001000000013b650
- (void)checkForUpdatesWithOptions:(id)arg1 response:(CDUnknownBlockType)arg2;	// IMP=0x001000000013b4f0
- (void)checkForUpdateViaMDM;	// IMP=0x001000000013b470
- (void)checkForUpdate;	// IMP=0x001000000013b330
- (void)setManagerClientDelegate:(id)arg1;	// IMP=0x001000000013b2e0
- (void)setDelegate:(id)arg1;	// IMP=0x001000000013b290
- (void)invalidate;	// IMP=0x001000000013b280
- (id)initWithRemoteConnection:(id)arg1;	// IMP=0x001000000013b1b0
- (id)init;	// IMP=0x001000000013b180

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
