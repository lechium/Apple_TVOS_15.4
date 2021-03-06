//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface PBOSSoftwareUpdateMonitor : NSObject
{
    _Bool _isInternalBuild;	// 8 = 0x8
    _Bool _isRestore;	// 9 = 0x9
    _Bool _triggeredManually;	// 10 = 0xa
    NSURL *_baseURL;	// 16 = 0x10
    NSString *_fromOSBuild;	// 24 = 0x18
    NSString *_fromHDMI;	// 32 = 0x20
    NSString *_toOSBuild;	// 40 = 0x28
    unsigned long long _checkResult;	// 48 = 0x30
    NSString *_uuid;	// 56 = 0x38
}

+ (id)_instance;	// IMP=0x00400000001bee10
+ (unsigned long long)migrateWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bedb0
+ (id)lastRestoreFilePath;	// IMP=0x00100000001be580
+ (void)noteResourceFetchOfType:(unsigned long long)arg1 withResult:(unsigned long long)arg2;	// IMP=0x00100000001be520
+ (void)noteStage:(id)arg1;	// IMP=0x00100000001be4a0
+ (void)prepareForUpdateToOSBuild:(id)arg1 forRestore:(_Bool)arg2 triggeredManually:(_Bool)arg3;	// IMP=0x00100000001be3f0
+ (void)checkedForUpdateTriggeredManually:(_Bool)arg1 forRestore:(_Bool)arg2 result:(unsigned long long)arg3;	// IMP=0x00100000001be370
+ (void)initializeMonitoring;	// IMP=0x00100000001be330
- (void).cxx_destruct;	// IMP=0x00200000001c1bb0
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property _Bool triggeredManually; // @synthesize triggeredManually=_triggeredManually;
@property _Bool isRestore; // @synthesize isRestore=_isRestore;
@property _Bool isInternalBuild; // @synthesize isInternalBuild=_isInternalBuild;
@property(nonatomic) unsigned long long checkResult; // @synthesize checkResult=_checkResult;
@property(copy, nonatomic) NSString *toOSBuild; // @synthesize toOSBuild=_toOSBuild;
// Error: Property attributes should begin with the type ('T') attribute, property name: fromHDMI
// Property attributes: (null)

@property(copy, nonatomic) NSString *fromOSBuild; // @synthesize fromOSBuild=_fromOSBuild;
@property(copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (_Bool)_isFinalStage:(id)arg1;	// IMP=0x00100000001c1830
- (_Bool)_isFailedStage:(id)arg1;	// IMP=0x00100000001c16b0
- (_Bool)_isCancelStage:(id)arg1;	// IMP=0x00100000001c1640
- (id)_computeCacheDeleteSpaceDetails;	// IMP=0x00100000001c1420
- (id)_computeDiskSpaceDetails;	// IMP=0x00100000001c13c0
- (void)_processDailyReport;	// IMP=0x00100000001c0b70
- (void)_processAppRestart;	// IMP=0x00100000001c07c0
- (void)_processUpdateAttemptCompleted;	// IMP=0x00100000001c0630
- (void)_issueRequestForStage:(id)arg1 withData:(id)arg2 retryDelay:(long long)arg3;	// IMP=0x00100000001bfea0
- (void)_noteResourceFetchOfType:(unsigned long long)arg1 withResult:(unsigned long long)arg2;	// IMP=0x00100000001bfc50
- (void)_noteStage:(id)arg1;	// IMP=0x00100000001bf480
- (void)_processNewUpdateAttemptToOSBuild:(id)arg1 forRestore:(_Bool)arg2 triggeredManually:(_Bool)arg3;	// IMP=0x00100000001bf1b0
- (void)_checkForUpdateTriggeredManually:(_Bool)arg1 forRestore:(_Bool)arg2 result:(unsigned long long)arg3;	// IMP=0x00100000001bf060
- (id)_updateConfigurationID;	// IMP=0x00100000001bef90
- (void)_setNewUUID;	// IMP=0x00100000001beee0
- (id)init;	// IMP=0x00100000001be6b0

@end

