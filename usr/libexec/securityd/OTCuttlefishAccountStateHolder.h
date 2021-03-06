//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OTCuttlefishAccountStateHolder : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 16 = 0x10
    NSString *_containerName;	// 24 = 0x18
    NSString *_contextID;	// 32 = 0x20
    NSMutableSet *_monitors;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001c29d6
@property(retain) NSMutableSet *monitors; // @synthesize monitors=_monitors;
@property(retain) NSString *contextID; // @synthesize contextID=_contextID;
@property(retain) NSString *containerName; // @synthesize containerName=_containerName;
@property(retain) NSObject<OS_dispatch_queue> *notifyQueue; // @synthesize notifyQueue=_notifyQueue;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)asyncNotifyAccountStateChanges:(id)arg1 from:(id)arg2;	// IMP=0x00100000001c2800
- (_Bool)_onqueuePersistAccountChanges:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x00100000001c2626
- (_Bool)persistAccountSettings:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001c2588
- (_Bool)persistOctagonJoinAttempt:(int)arg1 error:(id *)arg2;	// IMP=0x00100000001c253a
- (_Bool)persistLastHealthCheck:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001c249c
- (_Bool)persistAccountChanges:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x00100000001c2224
- (_Bool)persistNewTrustState:(int)arg1 error:(id *)arg2;	// IMP=0x00100000001c21d6
- (_Bool)persistNewEgoPeerID:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001c2138
- (id)lastHealthCheckupDate:(id *)arg1;	// IMP=0x00100000001c205c
- (id)getEgoPeerID:(id *)arg1;	// IMP=0x00100000001c1f4f
- (id)_onqueueLoadOrCreateAccountMetadata:(id *)arg1;	// IMP=0x00100000001c1d7e
- (id)loadOrCreateAccountMetadata:(id *)arg1;	// IMP=0x00100000001c1c05
- (void)registerNotification:(id)arg1;	// IMP=0x00100000001c1b93
- (id)initWithQueue:(id)arg1 container:(id)arg2 context:(id)arg3;	// IMP=0x00100000001c1a92

@end

