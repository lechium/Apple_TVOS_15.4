//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKDiagnosticStoreClient-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKProxyProvider, NSString;

@interface HKDiagnosticStore : NSObject <_HKXPCExportable, HKDiagnosticStoreClient>
{
    HKProxyProvider *_proxyProvider;	// 8 = 0x8
}

+ (id)taskIdentifier;	// IMP=0x00000000001e063f
- (void).cxx_destruct;	// IMP=0x00000000001e0915
- (id)remoteInterface;	// IMP=0x00000000001e090b
- (id)exportedInterface;	// IMP=0x00000000001e0901
- (void)connectionInvalidated;	// IMP=0x00000000001e08fb
- (void)fetchURLForAnalyticsFileWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e07a6
- (void)fetchDiagnosticsForKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e0651
- (id)initWithHealthStore:(id)arg1;	// IMP=0x00000000001e0549

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

