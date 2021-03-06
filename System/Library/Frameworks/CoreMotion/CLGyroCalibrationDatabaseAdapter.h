//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreMotion/CLGyroCalibrationDatabaseProtocol-Protocol.h>

@class NSString;

@interface CLGyroCalibrationDatabaseAdapter <CLGyroCalibrationDatabaseProtocol>
{
}

+ (_Bool)isSupported;	// IMP=0x00000000001818b2
+ (id)getSilo;	// IMP=0x0000000000181574
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x000000000018155b
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00000000001814fe
- (int)syncgetNumTemperatures;	// IMP=0x0000000000181b3a
- (_Bool)syncgetWipeDatabase;	// IMP=0x0000000000181b1c
- (void)dumpDatabase:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000181ae3
- (_Bool)syncgetInsertWithBias:(const CDStruct_03942939 *)arg1 variance:(const CDStruct_03942939 *)arg2 temperature:(float)arg3 timestamp:(double)arg4;	// IMP=0x0000000000181a94
- (double)syncgetLastMiniCalibration;	// IMP=0x0000000000181a5c
- (_Bool)syncgetSupportsMiniCalibration;	// IMP=0x0000000000181a3e
- (int)syncgetNonFactoryRoundCount;	// IMP=0x0000000000181a20
- (_Bool)syncgetBiasFit:(CDStruct_8d89f794 *)arg1;	// IMP=0x00000000001819f2
- (void)startFactoryGYTT;	// IMP=0x00000000001819d4
- (int)syncgetMaxDynamicTemperature;	// IMP=0x00000000001819b6
- (_Bool)syncgetGyroStatsWithBias:(CDStruct_03942939 *)arg1 slope:(CDStruct_03942939 *)arg2 l2Error:(CDStruct_03942939 *)arg3 isDynamic:(_Bool)arg4 deltaBias:(CDStruct_03942939 *)arg5 deltaSlope:(CDStruct_03942939 *)arg6 deltaError:(CDStruct_03942939 *)arg7 isDeltaDynamic:(_Bool)arg8;	// IMP=0x00000000001818fd
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x000000000018188a
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000000018185d
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0000000000181835
- (void *)adaptee;	// IMP=0x0000000000181802
- (void)endService;	// IMP=0x00000000001817e7
- (void)beginService;	// IMP=0x000000000018160d
- (id)init;	// IMP=0x00000000001815d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

