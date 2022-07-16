//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class NSString, TRIClient;

@interface HMITuriTrialManager : HMFObject <HMFLogging>
{
    TRIClient *_trialClient;	// 8 = 0x8
    NSString *_compiledModelArchivePath;	// 16 = 0x10
    double _personThresholdHigh;	// 24 = 0x18
    double _personThresholdMedium;	// 32 = 0x20
    double _petThresholdHigh;	// 40 = 0x28
    double _petThresholdMedium;	// 48 = 0x30
    double _vehicleThresholdHigh;	// 56 = 0x38
    double _vehicleThresholdMedium;	// 64 = 0x40
    double _faceThreshold;	// 72 = 0x48
    NSString *_modelPath;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x000000000008e7ed
+ (id)sharedInstance;	// IMP=0x000000000008e051
- (void).cxx_destruct;	// IMP=0x000000000008e88b
@property(readonly) NSString *modelPath; // @synthesize modelPath=_modelPath;
@property(readonly) double faceThreshold; // @synthesize faceThreshold=_faceThreshold;
@property(readonly) double vehicleThresholdMedium; // @synthesize vehicleThresholdMedium=_vehicleThresholdMedium;
@property(readonly) double vehicleThresholdHigh; // @synthesize vehicleThresholdHigh=_vehicleThresholdHigh;
@property(readonly) double petThresholdMedium; // @synthesize petThresholdMedium=_petThresholdMedium;
@property(readonly) double petThresholdHigh; // @synthesize petThresholdHigh=_petThresholdHigh;
@property(readonly) double personThresholdMedium; // @synthesize personThresholdMedium=_personThresholdMedium;
@property(readonly) double personThresholdHigh; // @synthesize personThresholdHigh=_personThresholdHigh;
- (void)updateLevels;	// IMP=0x000000000008e545
- (void)submitUpdateModelTask;	// IMP=0x000000000008e34f
- (void)registerForTrialUpdates;	// IMP=0x000000000008e260
- (void)configure;	// IMP=0x000000000008e209
- (_Bool)loadModelFromTrialWithError:(id *)arg1;	// IMP=0x000000000008e0ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
