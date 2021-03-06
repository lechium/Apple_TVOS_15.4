//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DTXConnectionServices/DTXService.h>

#import <DVTInstrumentsFoundation/DTDeviceInfoServiceAuthorizedAPI-Protocol.h>

@class DTDSCSymbolicatorCache, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface DTDeviceInfoService : DTXService <DTDeviceInfoServiceAuthorizedAPI>
{
    NSMutableDictionary *_peerTrackingSelectorsByPid;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_trackingSymbolicatorQueue;	// 16 = 0x10
    struct TFPPidWatcher _dtsecurityPidWatcher;	// 24 = 0x18
    _Bool _expiredPidTrackingEnabled;	// 28 = 0x1c
    DTDSCSymbolicatorCache *_sharedCacheSymbolicators;	// 32 = 0x20
}

+ (_Bool)isApplication:(id)arg1;	// IMP=0x000000000000631d
+ (void)registerCapabilities:(id)arg1;	// IMP=0x0000000000006012
- (void).cxx_destruct;	// IMP=0x0000000000009d7b
- (id)sysmonCoalitionAttributes;	// IMP=0x0000000000009d73
- (id)sysmonSystemAttributes;	// IMP=0x0000000000009d6b
- (id)sysmonProcessAttributes;	// IMP=0x0000000000009d63
- (id)kpepDatabase;	// IMP=0x0000000000009d5b
- (id)traceCodesFile;	// IMP=0x0000000000009d53
- (id)networkInformation;	// IMP=0x0000000000009d4b
- (id)_configurationProperties;	// IMP=0x0000000000009bfc
- (id)productVersion;	// IMP=0x0000000000009b97
- (id)uniqueID;	// IMP=0x0000000000009b01
- (id)_getIOMFBProperties;	// IMP=0x0000000000009838
- (id)_lookupInt64Sysctl:(const char *)arg1;	// IMP=0x00000000000097d5
- (id)_lookupInt32Sysctl:(const char *)arg1;	// IMP=0x0000000000009774
- (id)lookupSysctl:(const char *)arg1;	// IMP=0x00000000000096f2
- (id)hardwareInformation;	// IMP=0x00000000000094f8
- (int)hwCPU64BitCapable;	// IMP=0x00000000000094ea
- (int)hwCPUtype;	// IMP=0x00000000000094b6
- (int)hwCPUsubtype;	// IMP=0x0000000000009482
- (int)numberOfCpus;	// IMP=0x000000000000946d
- (int)numberOfPhysicalCpus;	// IMP=0x0000000000009438
- (id)createSignatureFromLibraryUUID:(id)arg1 sharedCacheUUID:(id)arg2 andPath:(id)arg3;	// IMP=0x00000000000090f4
- (id)iconDescriptionForIconPath:(id)arg1;	// IMP=0x0000000000008c7f
- (id)iconDescriptionFileForAppPath:(id)arg1;	// IMP=0x0000000000008249
- (id)directoryListingForPath:(id)arg1;	// IMP=0x00000000000081b7
- (id)symbolicatorSignaturesForExpiredPids;	// IMP=0x0000000000008160
- (void)enableExpiredPidTracking:(id)arg1;	// IMP=0x00000000000080c2
- (void)unregisterSignatureTrackingForPid:(id)arg1;	// IMP=0x0000000000008009
- (id)symbolicatorSignatureForPid:(id)arg1 trackingSelector:(id)arg2;	// IMP=0x0000000000007c70
- (id)deepSymbolOwnerSignatureForPid:(id)arg1 uuid:(id)arg2;	// IMP=0x0000000000007a12
- (id)machKernelName;	// IMP=0x00000000000078bb
- (id)isRunningPid:(id)arg1;	// IMP=0x0000000000007819
- (id)execnameForPid:(id)arg1;	// IMP=0x0000000000007621
- (id)nameForGID:(id)arg1;	// IMP=0x0000000000007529
- (id)nameForUID:(id)arg1;	// IMP=0x0000000000007359
- (id)runningProcesses;	// IMP=0x0000000000006cd9
- (id)machTimeInfo;	// IMP=0x0000000000006ae5
- (void)messageReceived:(id)arg1;	// IMP=0x000000000000675e
- (id)initWithChannel:(id)arg1;	// IMP=0x0000000000006412

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

