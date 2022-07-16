//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDCircleDelegate-Protocol.h>
#import <CoreCDPInternal/CDPDSecureBackupDelegate-Protocol.h>

@class CDPContext, CDPDCircleController, CDPDSecureBackupController;
@protocol CDPLocalSecretFollowUpProvider, CDPStateUIProviderInternal;

@interface CDPDLocalSecretController : NSObject <CDPDCircleDelegate, CDPDSecureBackupDelegate>
{
    CDPContext *_context;	// 8 = 0x8
    CDPDCircleController *_circleController;	// 16 = 0x10
    CDPDSecureBackupController *_secureBackupController;	// 24 = 0x18
    id <CDPStateUIProviderInternal> _uiProvider;	// 32 = 0x20
    id <CDPLocalSecretFollowUpProvider> _followUpProvider;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000014fd6
@property(retain, nonatomic) id <CDPLocalSecretFollowUpProvider> followUpProvider; // @synthesize followUpProvider=_followUpProvider;
@property(retain, nonatomic) id <CDPStateUIProviderInternal> uiProvider; // @synthesize uiProvider=_uiProvider;
@property(retain, nonatomic) CDPDSecureBackupController *secureBackupController; // @synthesize secureBackupController=_secureBackupController;
@property(retain, nonatomic) CDPDCircleController *circleController; // @synthesize circleController=_circleController;
@property(retain, nonatomic) CDPContext *context; // @synthesize context=_context;
- (id)secureChannelContextForController:(id)arg1;	// IMP=0x0000000000014f58
- (id)contextForController:(id)arg1;	// IMP=0x0000000000014f4a
- (void)circleController:(id)arg1 secureBackupRecordsArePresentWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014f31
- (void)promptForLocalSecretWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014f2b
- (void)promptForAdoptionOfMultipleICSCWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014f10
- (_Bool)synchronizeCircleViewsForSecureBackupContext:(id)arg1;	// IMP=0x0000000000014efa
- (id)circlePeerIDForSecureBackupController:(id)arg1;	// IMP=0x0000000000014e81
- (void)_collectLocalSecretWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014e08
- (id)_cdpStateMachine;	// IMP=0x0000000000014dcd
- (void)_createContextForSecret:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014909
- (void)_setContextWithAuthResults:(id)arg1;	// IMP=0x0000000000014872
- (void)_repairWithStateMachine:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000147af
- (void)_handleCompletionStatus:(_Bool)arg1 preRecord:(_Bool)arg2;	// IMP=0x00000000000145a7
- (void)_localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001433d
- (void)_attemptToEscrowPreRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000140df
- (void)finishOfflineLocalSecretChangeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013d0b
- (void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000013887
- (void)attemptToEscrowPreRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013627
- (void)dealloc;	// IMP=0x0000000000013338
- (id)initWithContext:(id)arg1;	// IMP=0x00000000000132cc

@end
