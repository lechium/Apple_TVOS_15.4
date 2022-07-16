//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IOKConnection, NSMutableArray, TSClock;

@interface TSClockManager : NSObject
{
    IOKConnection *_connection;	// 8 = 0x8
    NSMutableArray *_clockPersonalities;	// 16 = 0x10
    struct mach_timebase_info _timebaseInfo;	// 24 = 0x18
    _Bool _timeSyncTimeIsMachAbsoluteTime;	// 32 = 0x20
    unsigned long long _timeSyncTimeClockIdentifier;	// 40 = 0x28
    unsigned long long _translationClockIdentifier;	// 48 = 0x30
    TSClock *_timeSyncClock;	// 56 = 0x38
    TSClock *_translationClock;	// 64 = 0x40
}

+ (id)diagnosticInfoForClockService:(id)arg1;	// IMP=0x00000000000107ac
+ (id)diagnosticDescriptionForClockService:(id)arg1 withIndent:(id)arg2;	// IMP=0x000000000001035e
+ (id)diagnosticInfoForService:(id)arg1;	// IMP=0x00000000000100ce
+ (id)diagnosticDescriptionForService:(id)arg1 withIndent:(id)arg2;	// IMP=0x000000000000fe95
+ (id)defaultClockPersonalities;	// IMP=0x000000000000ed5e
+ (id)clockManager;	// IMP=0x000000000000ed12
+ (id)sharedClockManagerSyncWithTimeout:(unsigned long long)arg1;	// IMP=0x000000000000ebda
+ (id)sharedClockManager;	// IMP=0x000000000000ead8
+ (id)timeSyncAudioClockDeviceUIDForClockIdentifier:(unsigned long long)arg1;	// IMP=0x000000000000eab3
+ (void)notifyWhenClockManagerIsAvailable:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e631
- (void).cxx_destruct;	// IMP=0x0000000000010bd5
@property(readonly, nonatomic) TSClock *translationClock; // @synthesize translationClock=_translationClock;
@property(readonly, nonatomic) TSClock *timeSyncClock; // @synthesize timeSyncClock=_timeSyncClock;
@property(readonly, nonatomic) _Bool timeSyncTimeIsMachAbsoluteTime; // @synthesize timeSyncTimeIsMachAbsoluteTime=_timeSyncTimeIsMachAbsoluteTime;
@property(readonly, nonatomic) unsigned long long translationClockIdentifier; // @synthesize translationClockIdentifier=_translationClockIdentifier;
@property(readonly, nonatomic) unsigned long long timeSyncTimeClockIdentifier; // @synthesize timeSyncTimeClockIdentifier=_timeSyncTimeClockIdentifier;
- (unsigned long long)machAbsoluteNanosecondsToTicks:(unsigned long long)arg1;	// IMP=0x000000000000fe4d
- (unsigned long long)nanosecondsToMachAbsolute:(unsigned long long)arg1;	// IMP=0x000000000000fe3b
- (unsigned long long)machAbsoluteTicksToNanoseconds:(unsigned long long)arg1;	// IMP=0x000000000000fdf3
- (unsigned long long)machAbsoluteToNanoseconds:(unsigned long long)arg1;	// IMP=0x000000000000fde1
- (_Bool)removeUserFilteredClockWithIdentifier:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000000fd75
- (unsigned long long)addUserFilteredClockWithMachInterval:(unsigned long long)arg1 domainInterval:(unsigned long long)arg2 usingFilterShift:(unsigned char)arg3 isAdaptive:(_Bool)arg4 error:(id *)arg5;	// IMP=0x000000000000fce0
- (id)clockWithClockIdentifier:(unsigned long long)arg1;	// IMP=0x000000000000f822
- (id)availableClockIdentifiers;	// IMP=0x000000000000f765
- (_Bool)removeTSNCaptureServicesWithError:(id *)arg1;	// IMP=0x000000000000f728
- (_Bool)addTSNCaptureServicesWithError:(id *)arg1;	// IMP=0x000000000000f6eb
- (_Bool)removegPTPServicesWithError:(id *)arg1;	// IMP=0x000000000000f6ae
- (_Bool)addgPTPServicesWithError:(id *)arg1;	// IMP=0x000000000000f671
- (_Bool)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000000f605
- (_Bool)addMappingFromClockID:(unsigned long long)arg1 toCoreAudioClockDomain:(unsigned int *)arg2 error:(id *)arg3;	// IMP=0x000000000000f57d
- (_Bool)releaseDynamicClockID:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000000f511
- (_Bool)nextAvailableDynamicClockID:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x000000000000f491
- (_Bool)getTimeSyncTimeIsMachAbsolute:(_Bool *)arg1 error:(id *)arg2;	// IMP=0x000000000000f409
- (_Bool)getTimeSyncTimeClockID:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x000000000000f385
- (void)removeClockPersonality:(id)arg1;	// IMP=0x000000000000f36e
- (void)addClockPersonality:(id)arg1;	// IMP=0x000000000000f357
- (id)init;	// IMP=0x000000000000f001

@end
