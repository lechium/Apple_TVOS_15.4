//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CLAvengerScannerPolicyDelegate;

@interface CLAvengerScannerPolicy : NSObject
{
    id <CLAvengerScannerPolicyDelegate> _delegate;	// 8 = 0x8
    struct CLAvengerScannerPolicyContext _currentContext;	// 16 = 0x10
    long long _currentScanType;	// 88 = 0x58
}

+ (id)convertCLAvengerScannerPolicyScanTypeToString:(long long)arg1;	// IMP=0x004000000010f878
- (id).cxx_construct;	// IMP=0x002000000010f93a
@property(readonly, nonatomic) long long currentScanType; // @synthesize currentScanType=_currentScanType;
@property(readonly, nonatomic) struct CLAvengerScannerScanParameters currentScanParameters;
@property(nonatomic) unsigned long long totalAdvertisementBuffersAvailable;
@property(readonly, nonatomic) _Bool downgradedDuringCoexFriendlyAggressiveDiscoveryScan;
@property(nonatomic) _Bool bluetoothAudioActive;
@property(nonatomic) _Bool wifi2GHzCriticalState;
@property(nonatomic) _Bool associatedTo2GHzWiFi;
@property(nonatomic) _Bool optedIn;
- (_Bool)hasActiveBTFindingScan;	// IMP=0x001000000010f54e
- (void)stopHawkeyeLowEnergyScan;	// IMP=0x001000000010f487
- (void)startHawkeyeLowEnergyScan;	// IMP=0x001000000010f360
- (void)stopWatchAdvertisementBufferScan;	// IMP=0x001000000010f2e3
- (void)startWatchAdvertisementBufferScan;	// IMP=0x001000000010f265
- (void)stopBTFindingScan;	// IMP=0x001000000010f19e
- (void)startBTFindingScan;	// IMP=0x001000000010f074
- (_Bool)hasActiveAggressiveScan;	// IMP=0x001000000010f05d
- (void)stopCoexFriendlyAggressiveScan;	// IMP=0x001000000010ef52
- (void)startCoexFriendlyAggressiveScan;	// IMP=0x001000000010ee5f
- (void)stopAggressiveScan;	// IMP=0x001000000010ed64
- (void)startAggressiveScan;	// IMP=0x001000000010ec69
- (void)updateContext:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x001000000010ebb7
- (long long)resolveNewScanTypeWithNewContext:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x001000000010e8c3
- (long long)desiredHawkeyeLowEnergyScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x001000000010e8ad
- (long long)desiredWatchAdvertisementBufferScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x001000000010e887
- (long long)desiredBTFindingDiscoveryScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x001000000010e854
- (long long)desiredCoexFriendlyAggressiveDiscoveryScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x001000000010e763
- (long long)desiredAggressiveDiscoveryScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x001000000010e74d
- (long long)desiredDefaultScanParameters:(struct CLAvengerScannerPolicyContext)arg1;	// IMP=0x001000000010e6fd
- (id)initWithDelegate:(id)arg1 platformType:(long long)arg2 supportsPerTypeDuplicateFilter:(_Bool)arg3;	// IMP=0x001000000010e660

@end

