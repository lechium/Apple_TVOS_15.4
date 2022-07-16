//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveSupport/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_source;

@interface _PASRTCLogging : NSObject <NSSecureCoding>
{
    struct _opaque_pthread_mutex_t _lock;	// 8 = 0x8
    NSString *_path;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_persistenceTimerSource;	// 80 = 0x50
    double _storeCreationDate;	// 88 = 0x58
    NSMutableArray *_aggregators;	// 96 = 0x60
    NSMutableArray *_logQueue;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000022107
+ (id)loggerForPath:(id)arg1;	// IMP=0x0000000000021ced
+ (id)dateByAppendingDaysToCurrentDate:(double)arg1;	// IMP=0x0000000000022316
+ (unsigned long long)numberOfDaysBetweenDate:(id)arg1 andDate:(id)arg2;	// IMP=0x0000000000022254
+ (double)round:(double)arg1 toSignificantFigures:(long long)arg2;	// IMP=0x00000000000221bf
+ (unsigned long long)bucketizeInteger:(unsigned long long)arg1 withBucketSize:(unsigned long long)arg2 limit:(unsigned long long)arg3;	// IMP=0x000000000002210f
- (void).cxx_destruct;	// IMP=0x00000000000214ea
@property(retain) NSMutableArray *logQueue; // @synthesize logQueue=_logQueue;
- (void)dealloc;	// IMP=0x000000000002143e
- (double)_storeAge;	// IMP=0x00000000000213f0
- (_Bool)resetLogs;	// IMP=0x00000000000213a4
- (void)updateAndScheduleDiskWrite;	// IMP=0x0000000000021322
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000021266
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000021016
- (id)whitelistedLogFromLog:(id)arg1;	// IMP=0x0000000000020fc0
- (_Bool)_removeSentLogsAndResetStoreAge:(id)arg1;	// IMP=0x0000000000020f44
- (void)sendRTCLogsWithClientName:(id)arg1 serviceName:(id)arg2 assetVersion:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000209d8
- (void)logAggregateEvent:(id)arg1 category:(unsigned short)arg2 type:(unsigned short)arg3;	// IMP=0x00000000000206b5
- (void)expireLogs;	// IMP=0x000000000002047d
- (void)registerBeforeSendProcessor:(id)arg1;	// IMP=0x0000000000020443
- (void)enqueueRTCLog:(id)arg1 category:(unsigned short)arg2 type:(unsigned short)arg3;	// IMP=0x00000000000202bf
- (id)_createRTCReportingWithClientName:(id)arg1 serviceName:(id)arg2 assetVersion:(unsigned long long)arg3;	// IMP=0x0000000000020091
- (_Bool)_storeToDisk;	// IMP=0x000000000001ff9e
- (id)initWithFileName:(id)arg1;	// IMP=0x000000000001ff44
- (id)init;	// IMP=0x000000000001fd74

@end
