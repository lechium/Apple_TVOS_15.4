//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PineBoardServices/BSInvalidatable-Protocol.h>
#import <PineBoardServices/PBSBulletinServiceDelegate-Protocol.h>
#import <PineBoardServices/PBSSystemHomeUIServiceClientInterface-Protocol.h>

@class BSServiceConnection, NSMutableSet, NSString;
@protocol OS_dispatch_queue, PBSBulletinServiceInterface, PBSSystemHomeUIServiceClientDelegate, PBSSystemHomeUIServiceServerInterface;

@interface PBSSystemHomeUIServiceClient : NSObject <PBSBulletinServiceDelegate, PBSSystemHomeUIServiceClientInterface, BSInvalidatable>
{
    BSServiceConnection *_queue_connection;	// 8 = 0x8
    id <PBSSystemHomeUIServiceServerInterface> _queue_server;	// 16 = 0x10
    id <PBSBulletinServiceInterface> _bulletinService;	// 24 = 0x18
    id <PBSSystemHomeUIServiceClientDelegate> _delegate;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSMutableSet *_presentedBulletins;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000e6e0
@property(readonly, nonatomic) NSMutableSet *presentedBulletins; // @synthesize presentedBulletins=_presentedBulletins;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) __weak id <PBSSystemHomeUIServiceClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <PBSSystemHomeUIServiceServerInterface> server; // @synthesize server=_queue_server;
@property(readonly, nonatomic) BSServiceConnection *connection; // @synthesize connection=_queue_connection;
- (void)_queue_dismissBulletin:(id)arg1;	// IMP=0x000000000000e560
- (void)_queue_updateBulletin:(id)arg1 withMessage:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000e350
- (void)_queue_presentBulletinIfNecessary:(id)arg1 forHomeKitObjectUniqueIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000e0d0
- (void)_queue_fetchCurrentStreamStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000de90
- (void)_queue_activateConnection;	// IMP=0x000000000000dcd0
- (void)dismissBulletin:(id)arg1;	// IMP=0x000000000000dba0
- (void)updateBulletin:(id)arg1 withMessage:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000d9a0
- (void)presentBulletinIfNecessary:(id)arg1 forHomeKitObjectUniqueIdentifier:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000d700
- (void)fetchCurrentStreamStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d560
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x000000000000d0c0
- (oneway void)homeUIStreamStateDidUpdate:(id)arg1;	// IMP=0x000000000000cf00
- (void)invalidate;	// IMP=0x000000000000cde0
@property(readonly, nonatomic) id <PBSBulletinServiceInterface> bulletinService; // @synthesize bulletinService=_bulletinService;
- (void)dealloc;	// IMP=0x000000000000ca40
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000000c0e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

