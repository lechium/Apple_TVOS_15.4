//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NAFuture, NSHashTable, NSString, NSURL;

@interface HFHomeAppInstallStateArbiter : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    NSHashTable *_observers;	// 8 = 0x8
    NAFuture *_homeAppInstalledFuture;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000027cabe
- (void).cxx_destruct;	// IMP=0x000000000027d58c
@property(retain, nonatomic) NAFuture *homeAppInstalledFuture; // @synthesize homeAppInstalledFuture=_homeAppInstalledFuture;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x000000000027d55a
- (void)applicationsWillUninstall:(id)arg1;	// IMP=0x000000000027d546
@property(readonly, copy, nonatomic) NSURL *homeAppBundleURL;
- (_Bool)_fastPath_isHomeAppInstalled;	// IMP=0x000000000027d271
- (void)_applications:(id)arg1 didInstall:(_Bool)arg2;	// IMP=0x000000000027cf2f
- (void)removeObserver:(id)arg1;	// IMP=0x000000000027cc84
- (void)addObserver:(id)arg1;	// IMP=0x000000000027cc12
- (id)init;	// IMP=0x000000000027cb24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
