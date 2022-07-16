//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject, NSString, NSURL, REDataSourceLoader, REFeatureSet, RELocationManager, RERelevanceProviderManagerLoader;
@protocol OS_dispatch_queue, RERelevanceEngineMetricsRecorder;

@interface REMutableRelevanceEngineConfiguration
{
}

+ (id)defaultConfiguration;	// IMP=0x000000000007bd26
+ (id)sampleUpNextConfiguration;	// IMP=0x000000000000b3d0
+ (id)defaultUpNextConfiguration;	// IMP=0x000000000000b36d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007d0fb
@property(nonatomic) _Bool disableAutomaticContentManagement; // @dynamic disableAutomaticContentManagement;
@property(nonatomic) _Bool ignoresInstalledApplications; // @dynamic ignoresInstalledApplications;
@property(retain, nonatomic) id <RERelevanceEngineMetricsRecorder> metricsRecorder; // @dynamic metricsRecorder;
@property(nonatomic) _Bool allowsDiagnosticExtension; // @dynamic allowsDiagnosticExtension;
@property(nonatomic) _Bool ignoreDeviceLockState; // @dynamic ignoreDeviceLockState;
@property(nonatomic) _Bool wantsBackup; // @dynamic wantsBackup;
@property(nonatomic) _Bool allowsRemoteTraining; // @dynamic allowsRemoteTraining;
@property(copy, nonatomic) NSString *preferenceDomain; // @dynamic preferenceDomain;
@property(nonatomic) _Bool wantsImmutableContent; // @dynamic wantsImmutableContent;
@property(copy, nonatomic) REFeatureSet *primaryFeatures; // @dynamic primaryFeatures;
- (void)removeAllInteractions;	// IMP=0x000000000007caff
- (void)removeInteractionAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007ca7e
- (long long)_indexOfInteractionWithName:(id)arg1;	// IMP=0x000000000007c966
- (void)insertInteractionWithDescriptor:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000007c7ec
- (void)addInteractionWithDescriptor:(id)arg1;	// IMP=0x000000000007c76a
- (void)removeAllSections;	// IMP=0x000000000007c6a1
- (void)removeSectionAtIndex:(unsigned long long)arg1;	// IMP=0x000000000007c620
- (void)removeSectionWithName:(id)arg1;	// IMP=0x000000000007c5db
- (long long)_indexOfSectionWithName:(id)arg1;	// IMP=0x000000000007c4c3
- (void)insertSectionWithDescriptor:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000007c349
- (void)addSectionWithDescriptor:(id)arg1;	// IMP=0x000000000007c2c7
@property(retain, nonatomic) RELocationManager *locationManager; // @dynamic locationManager;
@property(nonatomic) unsigned long long modelStorageBehavior; // @dynamic modelStorageBehavior;
@property(nonatomic) unsigned long long trainingBehavior; // @dynamic trainingBehavior;
@property(copy, nonatomic) RERelevanceProviderManagerLoader *relevanceProviderManagerLoader; // @dynamic relevanceProviderManagerLoader;
@property(copy, nonatomic) REDataSourceLoader *dataSourceLoader; // @dynamic dataSourceLoader;
@property(nonatomic) _Bool allowsUpdatingModelFile; // @dynamic allowsUpdatingModelFile;
@property(nonatomic) unsigned long long modelVersion; // @dynamic modelVersion;
@property(copy, nonatomic) NSURL *baseModelFileURL; // @dynamic baseModelFileURL;
@property(copy, nonatomic) NSURL *modelFileURL; // @dynamic modelFileURL;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // @dynamic observerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *engineQueue; // @dynamic engineQueue;

// Remaining properties
@property(copy, nonatomic) NSArray *whitelistedDataSourceClassNames; // @dynamic whitelistedDataSourceClassNames;

@end

