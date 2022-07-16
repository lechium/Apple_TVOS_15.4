//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSProgress, NSString;

@interface DMDiphoneOSAppLifeCycle
{
    NSProgress *_proxyProgress;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000023005
@property(retain, nonatomic) NSProgress *proxyProgress; // @synthesize proxyProgress=_proxyProgress;
- (void)_findProxyInProxies:(id)arg1 andCallBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000022d4c
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0010000000022a35
- (void)applicationsDidFailToUninstall:(id)arg1;	// IMP=0x001000000002286b
- (void)applicationsWillUninstall:(id)arg1;	// IMP=0x0010000000022554
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0010000000022064
- (void)applicationsDidFailToInstall:(id)arg1;	// IMP=0x0010000000021c89
- (void)applicationInstallsDidCancel:(id)arg1;	// IMP=0x0010000000021a06
- (void)applicationInstallsDidResume:(id)arg1;	// IMP=0x001000000002178c
- (void)applicationInstallsDidPause:(id)arg1;	// IMP=0x0010000000021512
- (void)applicationInstallsDidChange:(id)arg1;	// IMP=0x0010000000021298
- (void)applicationInstallsDidStart:(id)arg1;	// IMP=0x0010000000020d1a
- (void)applicationsWillInstall:(id)arg1;	// IMP=0x0010000000020a8f
- (id)progress;	// IMP=0x0010000000020a7d
- (void)dealloc;	// IMP=0x0010000000020a08
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x0010000000020544

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

