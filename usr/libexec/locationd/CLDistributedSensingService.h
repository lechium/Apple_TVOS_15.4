//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSString;

@interface CLDistributedSensingService : CLIntersiloService
{
}

+ (_Bool)isSupported;	// IMP=0x00200000000f7750
+ (id)getSilo;	// IMP=0x00100000000f76f4
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f76db
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000000f767e
- (void)unregisterClient:(byref id)arg1 forNotification:(int)arg2;	// IMP=0x00200000000f77d6
- (void)registerClient:(byref id)arg1 forNotification:(int)arg2;	// IMP=0x00100000000f77d0
- (void)endService;	// IMP=0x00100000000f77ca
- (void)beginService;	// IMP=0x00100000000f77c4
- (void)dealloc;	// IMP=0x00100000000f7795
- (id)init;	// IMP=0x00100000000f7758

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

