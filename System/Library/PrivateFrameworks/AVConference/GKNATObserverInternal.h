//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKNATObserver_SCContext, NSMutableDictionary, NSObject, NSRecursiveLock;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface GKNATObserverInternal
{
    id _delegate;	// 8 = 0x8
    struct __SCDynamicStore *_dynamicStore;	// 16 = 0x10
    NSRecursiveLock *_xNATCheck;	// 24 = 0x18
    int _lastReportedNATType;	// 32 = 0x20
    int _lastReportedCarrierNATType;	// 36 = 0x24
    int _lastReportedNonCarrierNATType;	// 40 = 0x28
    NSMutableDictionary *_interfaceInfoDictionary;	// 48 = 0x30
    _Bool _nonCarrierInterfacesOnly;	// 56 = 0x38
    _Bool _checkTCPAndSSL;	// 57 = 0x39
    _Bool _favorNonCarrier;	// 58 = 0x3a
    _Bool _newCarrierType;	// 59 = 0x3b
    _Bool _addInRangeFlag;	// 60 = 0x3c
    _Bool _addCarrierFlag;	// 61 = 0x3d
    _Bool _ignoreNatTypeCache;	// 62 = 0x3e
    _Bool _ignoreCarrierBundle;	// 63 = 0x3f
    int _NATCheckRetryCount;	// 64 = 0x40
    double _NATCheckRetryDelay;	// 72 = 0x48
    NSMutableDictionary *_currentNetworkNames;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_natCheckQueue;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_reportNATQueue;	// 96 = 0x60
    NSObject<OS_dispatch_group> *_natCheckGroup;	// 104 = 0x68
    NSObject<OS_dispatch_semaphore> *_natCheckNetNameSema;	// 112 = 0x70
    _Bool _fNATCheckQueued;	// 120 = 0x78
    _Bool _fNATCheckInProgress;	// 121 = 0x79
    GKNATObserver_SCContext *_sccontext;	// 128 = 0x80
    _Bool _hasNATCheckStarted;	// 136 = 0x88
    _Bool _hasNATCheckEnded;	// 137 = 0x89
}

- (void)registerForNetworkChanges;	// IMP=0x0000000000037712
- (id)nameForNetworkWithIPPort:(struct tagIPPORT *)arg1 interfaceName:(id)arg2;	// IMP=0x00000000000373fb
- (void)tryNATCheckWithDelay:(double)arg1;	// IMP=0x0000000000035b89
- (void)clearRetries;	// IMP=0x0000000000035a23
- (void)HTTPSCheckWithIPPort:(struct tagIPPORT *)arg1 ipv6Prefix:(const CDStruct_c3d3b44c *)arg2 useCache:(_Bool)arg3;	// IMP=0x000000000003585a
- (void)HTTPCheckWithIPPort:(struct tagIPPORT *)arg1 ipv6Prefix:(const CDStruct_c3d3b44c *)arg2 useCache:(_Bool)arg3;	// IMP=0x0000000000035694
- (void)NATCheckWithIPPort:(struct tagIPPORT *)arg1 ipv6Prefix:(const CDStruct_c3d3b44c *)arg2 useCache:(_Bool)arg3;	// IMP=0x0000000000034d06
- (void)cacheNATFlags:(id)arg1 forNetwork:(id)arg2;	// IMP=0x00000000000347ad
- (id)lookupCachedNATFlagsForNetwork:(id)arg1;	// IMP=0x00000000000346e4
- (void)updateNatTypeCache:(id)arg1;	// IMP=0x00000000000346d2
- (id)copyNatTypeCache;	// IMP=0x00000000000346c0
- (void)updateNatTypeCache_OSXGamedScheme:(id)arg1;	// IMP=0x0000000000034693
- (id)copyNatTypeCache_OSXGamedScheme;	// IMP=0x0000000000034669
- (void)updateNatTypeCache_CachePlistScheme:(id)arg1;	// IMP=0x00000000000345b3
- (id)copyNatTypeCachePlistScheme;	// IMP=0x000000000003449f
- (_Bool)ensureNatCachePathExists;	// IMP=0x00000000000343a0
- (int)callHTTPTestFromIPPort:(struct tagIPPORT *)arg1 ipv6Prefix:(const CDStruct_c3d3b44c *)arg2 ToServer:(id)arg3 isSSL:(_Bool)arg4;	// IMP=0x000000000003342b
- (struct tagCommNATInfo *)callCommNATTestFromIPPort:(struct tagIPPORT *)arg1 ipv6Prefix:(const CDStruct_c3d3b44c *)arg2;	// IMP=0x0000000000032e57
- (id)delegate;	// IMP=0x0000000000032e46
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000032d71
- (void)reportNATType;	// IMP=0x0000000000032496
- (void)shouldTryNATCheck;	// IMP=0x0000000000032418
- (int)currentNATType;	// IMP=0x00000000000322b5
- (void)calculateSummmaryNATType:(int *)arg1 andCarrierNATType:(int *)arg2 andNonCarrierNATType:(int *)arg3 copyInterfaceInfoDictionary:(id *)arg4;	// IMP=0x0000000000031f90
- (unsigned int)setSSLFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(_Bool)arg3;	// IMP=0x0000000000031f67
- (unsigned int)setTCPFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(_Bool)arg3;	// IMP=0x0000000000031f3e
- (unsigned int)setCommNATFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(_Bool)arg3;	// IMP=0x0000000000031f15
- (unsigned int)setFlags:(unsigned int)arg1 forInterface:(id)arg2 isCached:(_Bool)arg3 isCachedKey:(id)arg4 mask:(unsigned int)arg5;	// IMP=0x0000000000031cc9
- (int)natTypeForCommNATFlags:(unsigned int)arg1 isCarrier:(_Bool)arg2;	// IMP=0x0000000000031bfb
- (void)dealloc;	// IMP=0x0000000000031a52
- (oneway void)release;	// IMP=0x00000000000319cc
- (id)initWithOptions:(id)arg1;	// IMP=0x00000000000314cf
- (id)init;	// IMP=0x00000000000314bb

@end

