//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IMLogDump : NSObject
{
    _Bool _shouldCollectPowerWifiStats;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_logDumpQueue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000001cb4a
- (void).cxx_destruct;	// IMP=0x000000000001f26a
@property(readonly, nonatomic) _Bool shouldCollectPowerWifiStats; // @synthesize shouldCollectPowerWifiStats=_shouldCollectPowerWifiStats;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *logDumpQueue; // @synthesize logDumpQueue=_logDumpQueue;
- (id)createTodaysStatisticDictionaryIfNeeded;	// IMP=0x000000000001f24f
- (void)_noteSyncEndedForDurationKey:(id)arg1 dateKey:(id)arg2;	// IMP=0x000000000001f0d0
- (void)noteAHDASyncEnded;	// IMP=0x000000000001f0aa
- (void)noteCoreDuetSyncEnded;	// IMP=0x000000000001f084
- (void)_incrementSyncAttemptsWithKey:(id)arg1 syncDateKey:(id)arg2;	// IMP=0x000000000001eefc
- (void)incrementAHDASyncAttempts;	// IMP=0x000000000001eed6
- (void)incrementCoreDuetSyncAttempts;	// IMP=0x000000000001eeb0
- (void)printPowerAndWifiStats;	// IMP=0x000000000001ec00
- (id)_calculatePowerAndWifiConnectedTimeInMinutesForDictionary:(id)arg1;	// IMP=0x000000000001e79c
- (void)_calculateConnectedMinutesForDateKey:(id)arg1 durationKey:(id)arg2 daysDictionary:(id)arg3 totalDurationDictionary:(id)arg4 totalDurationKey:(id)arg5;	// IMP=0x000000000001e4df
- (_Bool)_isOnPower;	// IMP=0x000000000001e494
- (_Bool)_isWifiUsable;	// IMP=0x000000000001e449
- (id)_dictionaryForDayKey:(id)arg1;	// IMP=0x000000000001e432
- (void)printSyncDurationStats;	// IMP=0x000000000001e26d
- (double)_calculateMinutesSyncingWithDurationKey:(id)arg1 attemptDateKey:(id)arg2;	// IMP=0x000000000001e15e
- (void)printIfWeAreInTheMiddleOfASync;	// IMP=0x000000000001e0ac
- (void)clearSyncStats;	// IMP=0x000000000001df80
- (void)_includeCloudKitDebugFilesAtPath:(id)arg1;	// IMP=0x000000000001df7a
- (id)logShowCommandToFilePath:(id)arg1 lastHours:(int)arg2 predicate:(id)arg3;	// IMP=0x000000000001de58
- (void)dumpLogsToFolderAtPath:(id)arg1 withFileName:(id)arg2 lastHours:(int)arg3 predicate:(id)arg4 includeCKDebug:(_Bool)arg5 withCompletion:(CDUnknownBlockType)arg6;	// IMP=0x000000000001d7da
- (_Bool)_checkArgumentValidity:(id)arg1 withFileName:(id)arg2 withPredicate:(id)arg3 withError:(id *)arg4;	// IMP=0x000000000001d383
- (void)_compressAndDeleteFilesAtPath:(id)arg1 destinationFilePath:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001d0bd
- (void)dumpMOCLoggingMetaData;	// IMP=0x000000000001cc40
- (id)_lastHoursToAppend:(int)arg1;	// IMP=0x000000000001cc1c
- (id)_predicateToAppend:(id)arg1;	// IMP=0x000000000001cbf7
- (id)init;	// IMP=0x000000000001cb9f

@end
