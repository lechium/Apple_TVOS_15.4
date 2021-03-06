//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/SBSSwitcherDemoCommandsServerToClientInterface-Protocol.h>

@class BSServiceConnection, NSString;
@protocol OS_dispatch_queue;

@interface SBSSwitcherDemoCommands : NSObject <SBSSwitcherDemoCommandsServerToClientInterface>
{
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 8 = 0x8
    BSServiceConnection *_connection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003b5c0
- (id)_standardizedAbsolutePathForPath:(id)arg1;	// IMP=0x000000000003b4dc
- (void)_connectionQueue_invalidate;	// IMP=0x000000000003b41c
- (void)_connectionQueue_setupAndActivate;	// IMP=0x000000000003af61
- (_Bool)updateHiddenApplicationBundleIDs:(id)arg1;	// IMP=0x000000000003ae33
- (_Bool)setShouldDisableSwitcherModelUpdates:(_Bool)arg1;	// IMP=0x000000000003ad17
- (_Bool)loadStashedSwitcherModelFromPath:(id)arg1;	// IMP=0x000000000003abc3
- (_Bool)stashSwitcherModelToPath:(id)arg1;	// IMP=0x000000000003a9f8
- (void)invalidate;	// IMP=0x000000000003a997
- (id)init;	// IMP=0x000000000003a89f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

