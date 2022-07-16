//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPushHandler, NSMutableDictionary;

@interface IDSValidationQueue : NSObject
{
    _Bool _shouldUseAbsinthe;	// 8 = 0x8
    CDUnknownBlockType _validationMessageSendBlock;	// 16 = 0x10
    IDSPushHandler *_pushHandler;	// 24 = 0x18
    NSMutableDictionary *_validationInfoByMechanism;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000537140
@property(retain, nonatomic) NSMutableDictionary *validationInfoByMechanism; // @synthesize validationInfoByMechanism=_validationInfoByMechanism;
@property(nonatomic) _Bool shouldUseAbsinthe; // @synthesize shouldUseAbsinthe=_shouldUseAbsinthe;
@property(retain, nonatomic) IDSPushHandler *pushHandler; // @synthesize pushHandler=_pushHandler;
@property(copy, nonatomic) CDUnknownBlockType validationMessageSendBlock; // @synthesize validationMessageSendBlock=_validationMessageSendBlock;
- (id)_validationInfoForSubsystem:(long long)arg1 createIfNil:(_Bool)arg2;	// IMP=0x0010000000536e60
- (long long)_mechanismForSubsystem:(long long)arg1;	// IMP=0x0010000000536df0
- (void)_sendAbsintheValidationCertRequestIfNeededForSubsystem:(long long)arg1;	// IMP=0x0010000000536dd0
- (void)_sendBAAValidationRequestIfNeededForSubsystem:(long long)arg1;	// IMP=0x0010000000536db0
- (void)_sendValidationRequestForSubsystem:(long long)arg1;	// IMP=0x0010000000536d10
- (void)__purgeCachedCertsForSubsystemMechanism:(long long)arg1;	// IMP=0x0010000000536cf0
- (void)__cleanupValidationInfoForSubsystemMechanism:(long long)arg1;	// IMP=0x0010000000536cd0
- (void)__flushValidationQueueForSubsystemMechanism:(long long)arg1;	// IMP=0x0010000000536cb0
- (void)__failValidationQueueWithErrorResponseCode:(long long)arg1 forSubsystemMechanism:(long long)arg2;	// IMP=0x0010000000536c90
- (void)__failValidationQueueForSubsystemMechanism:(long long)arg1;	// IMP=0x0010000000536c50
- (void)__queueValidationMessage:(id)arg1 subsystem:(long long)arg2 sendBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000536bd0
- (void)__removeFromQueue:(id)arg1 subsystem:(long long)arg2;	// IMP=0x0010000000536ab0
- (_Bool)isBuildingContextForSubsystem:(long long)arg1;	// IMP=0x0010000000536a30
- (void)buildValidationCredentialsIfNeededForSubsystem:(long long)arg1;	// IMP=0x0010000000536a10
- (void)queueBuildingValidationDataIfNecessaryForMessage:(id)arg1 subsystem:(long long)arg2 withQueueCompletion:(CDUnknownBlockType)arg3 sendBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000536790
- (void)clearQueueForSubsystem:(long long)arg1;	// IMP=0x0010000000536550
- (void)removeFromQueue:(id)arg1 subsystem:(long long)arg2;	// IMP=0x00100000005364e0
- (void)purgeCachedCertsForSubsystemMechanism:(long long)arg1;	// IMP=0x00100000005364b0
- (void)cleanupValidationInfoForSubsystemMechanism:(long long)arg1;	// IMP=0x0010000000536480
- (id)initWithPushHandler:(id)arg1 validationMessageSendBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000536360
- (id)initWithValidationMessageSendBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000005362a0

@end

