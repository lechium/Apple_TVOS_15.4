//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PlugInKit/LSApplicationWorkspaceObserverProtocol-Protocol.h>

@class NSString, PKDiscoveryDriver;

@interface PKDiscoveryLSWatcher : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    PKDiscoveryDriver *_wdriver;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000ba15
@property __weak PKDiscoveryDriver *wdriver; // @synthesize wdriver=_wdriver;
- (void)updateWithUninstalledProxies:(id)arg1;	// IMP=0x000000000000b858
- (void)update;	// IMP=0x000000000000b83f
- (void)pluginsDidUninstall:(id)arg1;	// IMP=0x000000000000b737
- (void)pluginsDidInstall:(id)arg1;	// IMP=0x000000000000b632
- (void)stopUpdates;	// IMP=0x000000000000b5df
- (id)initWithDriver:(id)arg1;	// IMP=0x000000000000b536

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

