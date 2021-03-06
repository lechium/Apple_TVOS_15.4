//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IOKConnection, IOKService, TSgPTPClock;
@protocol OS_dispatch_queue;

@interface TSgPTPManager : NSObject
{
    IOKService *_service;	// 8 = 0x8
    IOKConnection *_connection;	// 16 = 0x10
    TSgPTPClock *_systemDomain;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_systemDomainQueue;	// 32 = 0x20
    unsigned long long _systemDomainClockIdentifier;	// 40 = 0x28
}

+ (id)diagnosticInfoForService:(id)arg1;	// IMP=0x0000000000002ca8
+ (id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2;	// IMP=0x00000000000026ba
+ (id)gPTPManager;	// IMP=0x0000000000001b31
+ (id)sharedgPTPManagerSyncWithTimeout:(unsigned long long)arg1;	// IMP=0x0000000000001a18
+ (id)sharedgPTPManager;	// IMP=0x00000000000018d5
+ (void)notifyWhengPTPManagerIsAvailable:(CDUnknownBlockType)arg1;	// IMP=0x0000000000001494
- (void).cxx_destruct;	// IMP=0x00000000000031bd
@property(readonly, nonatomic) unsigned long long systemDomainClockIdentifier; // @synthesize systemDomainClockIdentifier=_systemDomainClockIdentifier;
- (void)dealloc;	// IMP=0x0000000000002646
- (_Bool)removeCopresencePTPInstanceWithError:(id *)arg1;	// IMP=0x0000000000002609
- (_Bool)addCopresencePTPInstance:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x0000000000002589
@property(readonly, nonatomic) unsigned long long copresencePTPInstanceClockIdentifier;
- (_Bool)removeAirPlayPTPInstanceWithError:(id *)arg1;	// IMP=0x00000000000024ed
- (_Bool)addAirPlayPTPInstance:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x000000000000246d
@property(readonly, nonatomic) unsigned long long airPlayPTPInstanceClockIdentifier;
@property(readonly, nonatomic) unsigned long long avbPTPInstance3ClockIdentifier;
@property(readonly, nonatomic) unsigned long long avbPTPInstance2ClockIdentifier;
@property(readonly, nonatomic) unsigned long long avbPTPInstance1ClockIdentifier;
@property(readonly, nonatomic) unsigned long long avbPTPInstance0ClockIdentifier;
- (_Bool)removeAVBPTPInstanceWithIndex:(unsigned short)arg1 error:(id *)arg2;	// IMP=0x0000000000002224
- (_Bool)removeAVBDomainWithIndex:(unsigned short)arg1 error:(id *)arg2;	// IMP=0x0000000000002212
- (_Bool)addAVBPTPInstanceIndex:(unsigned short)arg1 identifier:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x0000000000002187
- (_Bool)addAVBDomainIndex:(unsigned short)arg1 identifier:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x0000000000002175
- (_Bool)removePTPInstanceWithIdentifier:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000002109
- (_Bool)removeDomainWithIdentifier:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000020f7
- (_Bool)addTimeOfDayPTPInstance:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x0000000000002077
- (_Bool)addPTPInstance:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x0000000000001ffa
- (_Bool)addDomain:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x0000000000001fe8
@property(readonly, retain, nonatomic) TSgPTPClock *systemDomain; // @dynamic systemDomain;
- (id)init;	// IMP=0x0000000000001b7d

@end

