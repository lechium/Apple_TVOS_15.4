//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetricKit/MXXPCClient-Protocol.h>

@class NSArray, NSHashTable, NSXPCConnection;
@protocol OS_dispatch_queue, OS_os_log;

@interface MXMetricManager : NSObject <MXXPCClient>
{
    int _metricToken;	// 8 = 0x8
    NSArray *_pastPayloads;	// 16 = 0x10
    NSArray *_pastDiagnosticPayloads;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_iVarQueue;	// 32 = 0x20
    NSObject<OS_os_log> *_managerLogHandle;	// 40 = 0x28
    NSXPCConnection *_connection;	// 48 = 0x30
    NSHashTable *_subscribers;	// 56 = 0x38
}

+ (id)makeLogHandleWithCategory:(id)arg1;	// IMP=0x000000000000d00d
+ (id)sharedManager;	// IMP=0x000000000000cf7c
- (void).cxx_destruct;	// IMP=0x000000000000ef4a
@property(retain, nonatomic) NSHashTable *subscribers; // @synthesize subscribers=_subscribers;
@property(nonatomic) int metricToken; // @synthesize metricToken=_metricToken;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_os_log> *managerLogHandle; // @synthesize managerLogHandle=_managerLogHandle;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *iVarQueue; // @synthesize iVarQueue=_iVarQueue;
@property(retain) NSArray *pastDiagnosticPayloads; // @synthesize pastDiagnosticPayloads=_pastDiagnosticPayloads;
@property(retain) NSArray *pastPayloads; // @synthesize pastPayloads=_pastPayloads;
- (id)mergeDiagnosticsAtLocation:(id)arg1;	// IMP=0x000000000000e53c
- (void)registrationProcessed;	// IMP=0x000000000000e536
- (void)_checkAndDeliverDiagnosticReports;	// IMP=0x000000000000dd9e
- (void)_checkAndDeliverMetricReports;	// IMP=0x000000000000d536
- (_Bool)_cachedPayloadAvailable;	// IMP=0x000000000000d52e
- (id)_createXPCConnection;	// IMP=0x000000000000d41c
- (void)removeSubscriber:(id)arg1;	// IMP=0x000000000000d340
- (void)addSubscriber:(id)arg1;	// IMP=0x000000000000d041
- (void)dealloc;	// IMP=0x000000000000cf43
- (id)init;	// IMP=0x000000000000ccba

@end

