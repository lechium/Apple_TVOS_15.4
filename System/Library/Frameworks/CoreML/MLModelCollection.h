//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, TRIClient;

@interface MLModelCollection : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSDictionary *_entries;	// 16 = 0x10
    NSString *_deploymentID;	// 24 = 0x18
    NSString *_namespaceName;	// 32 = 0x20
    TRIClient *_trialClient;	// 40 = 0x28
}

+ (id)_namespaceNameFromCollectionIdentifier:(id)arg1;	// IMP=0x0000000000023a09
+ (Class)getTrialFactorClass;	// IMP=0x00000000000239d9
+ (Class)getTrialFileClass;	// IMP=0x00000000000239a9
+ (Class)getTrialLevelClass;	// IMP=0x0000000000023979
+ (Class)getTrialFactorLevelClass;	// IMP=0x0000000000023949
+ (Class)getTrialDownloadOptionsClass;	// IMP=0x0000000000023919
+ (Class)getTrialExperimentIdentifiersClass;	// IMP=0x00000000000238e9
+ (Class)getTrialClientClass;	// IMP=0x00000000000238b9
+ (void)endAccessingModelCollectionWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000237f0
+ (id)beginAccessingModelCollectionWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023644
- (void).cxx_destruct;	// IMP=0x000000000002329c
@property(readonly, nonatomic) TRIClient *trialClient; // @synthesize trialClient=_trialClient;
@property(readonly, nonatomic) NSString *namespaceName; // @synthesize namespaceName=_namespaceName;
@property(copy, nonatomic) NSString *deploymentID; // @synthesize deploymentID=_deploymentID;
@property(copy, nonatomic) NSDictionary *entries; // @synthesize entries=_entries;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_populateEntries;	// IMP=0x0000000000022c34
- (void)_setDeploymentID;	// IMP=0x00000000000229d9
- (void)_handleTrialUpdateForNamespaceName:(id)arg1;	// IMP=0x0000000000022740
- (_Bool)_endAccess;	// IMP=0x0000000000022596
- (void)_registerForUpdates;	// IMP=0x0000000000022497
- (id)_downloadOptions;	// IMP=0x0000000000022374
- (_Bool)_downloadWithProgress:(CDUnknownBlockType)arg1;	// IMP=0x00000000000220c5
- (_Bool)_register;	// IMP=0x0000000000021f11
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000021d50

@end

