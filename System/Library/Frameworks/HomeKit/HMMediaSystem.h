//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMAccessorySettingsContainer-Protocol.h>
#import <HomeKit/HMAccessorySettingsContainerInternal-Protocol.h>
#import <HomeKit/HMApplicationData-Protocol.h>
#import <HomeKit/HMControllable-Protocol.h>
#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMMediaDestination-Protocol.h>
#import <HomeKit/HMMediaDestinationInternal-Protocol.h>
#import <HomeKit/HMMediaObject-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessoryCategory, HMAccessorySettings, HMAccessorySettingsDataSource, HMApplicationData, HMFUnfairLock, HMHome, HMMediaDestination, HMMediaSession, HMMutableArray, HMSymptomsHandler, NSArray, NSString, NSUUID, _HMContext;
@protocol HMMediaSystemDelegate, OS_dispatch_queue;

@interface HMMediaSystem : NSObject <HMFLogging, HMFMessageReceiver, HMControllable, HMMediaDestinationInternal, HMAccessorySettingsContainerInternal, HMObjectMerge, NSSecureCoding, HMAccessorySettingsContainer, HMApplicationData, HMMediaDestination, HMMediaObject>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    _Bool _compatible;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_configuredName;	// 32 = 0x20
    NSUUID *_uniqueIdentifier;	// 40 = 0x28
    HMAccessorySettings *_settings;	// 48 = 0x30
    id <HMMediaSystemDelegate> _delegate;	// 56 = 0x38
    HMApplicationData *_applicationData;	// 64 = 0x40
    HMHome *_home;	// 72 = 0x48
    HMSymptomsHandler *_symptomsHandler;	// 80 = 0x50
    _HMContext *_context;	// 88 = 0x58
    HMAccessorySettingsDataSource *_accessorySettingsDataSource;	// 96 = 0x60
    NSUUID *_uuid;	// 104 = 0x68
    HMMutableArray *_componentsArray;	// 112 = 0x70
    HMMediaDestination *_audioDestination;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a9af4
+ (id)logCategory;	// IMP=0x00000000000a9ac4
+ (id)mediaSystemWithDictionary:(id)arg1 home:(id)arg2;	// IMP=0x00000000000a971c
- (void).cxx_destruct;	// IMP=0x00000000000a790e
@property(retain) HMMediaDestination *audioDestination; // @synthesize audioDestination=_audioDestination;
@property(retain, nonatomic) HMMutableArray *componentsArray; // @synthesize componentsArray=_componentsArray;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) HMAccessorySettingsDataSource *accessorySettingsDataSource; // @synthesize accessorySettingsDataSource=_accessorySettingsDataSource;
@property(retain, nonatomic) _HMContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) HMSymptomsHandler *symptomsHandler; // @synthesize symptomsHandler=_symptomsHandler;
@property(nonatomic) __weak HMHome *home; // @synthesize home=_home;
- (void)updateAudioDestinationSupportedOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a7473
@property(readonly, copy) NSUUID *audioDestinationGroupIdentifier;
@property(readonly, copy) NSArray *audioDestinationMediaProfiles;
@property(readonly, copy) NSString *audioDestinationParentIdentifier;
@property(readonly) _Bool supportsAudioGroup;
@property(readonly) _Bool supportsAudioDestination;
@property(readonly, copy) NSString *audioDestinationName;
@property(readonly) long long audioDestinationType;
@property(readonly, copy) NSString *audioDestinationIdentifier;
- (void)callCompletionHandler:(CDUnknownBlockType)arg1 error:(id)arg2;	// IMP=0x00000000000a703f
- (void)callCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a702b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a7025
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a6c81
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x00000000000a6bcf
- (void)notifyDelegateOfUpdatedAudioDestination;	// IMP=0x00000000000a692f
- (void)notifyDelegateOfUpdatedMediaSession:(id)arg1;	// IMP=0x00000000000a67ab
- (void)notifyDelegateOfUpdatedSettings:(id)arg1;	// IMP=0x00000000000a6627
- (void)notifyDelegateOfUpdatedApplicationData:(id)arg1;	// IMP=0x00000000000a64a3
- (void)notifyDelegateOfUpdatedComponents:(id)arg1;	// IMP=0x00000000000a631f
- (void)notifyDelegateOfUpdatedConfiguredName:(id)arg1;	// IMP=0x00000000000a619b
- (void)notifyDelegateOfUpdatedName:(id)arg1;	// IMP=0x00000000000a6017
- (void)updateMediaSession:(id)arg1 forMediaProfile:(id)arg2;	// IMP=0x00000000000a5e59
- (_Bool)_mergeWithNewObject:(id)arg1 includeSettingsAndAppData:(_Bool)arg2;	// IMP=0x00000000000a5234
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x00000000000a521d
@property(readonly, getter=isControllable) _Bool controllable;
@property(readonly) __weak NSUUID *containerUUID;
@property(readonly) __weak HMHome *containerHome;
- (void)_handleSystemUpdatedNotification:(id)arg1;	// IMP=0x00000000000a4e97
- (void)_handleRootSettingsUpdated:(id)arg1;	// IMP=0x00000000000a4a60
- (void)_updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a45e1
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a42e7
@property(retain, nonatomic) HMApplicationData *applicationData; // @synthesize applicationData=_applicationData;
- (void)setSettings:(id)arg1;	// IMP=0x00000000000a403a
@property(readonly) HMAccessorySettings *settings; // @synthesize settings=_settings;
@property(readonly, copy) HMMediaSession *mediaSession;
@property(readonly, nonatomic) HMAccessoryCategory *category;
@property(readonly, nonatomic) NSArray *components;
@property(readonly, nonatomic, getter=isCompatible) _Bool compatible; // @synthesize compatible=_compatible;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)setConfiguredName:(id)arg1;	// IMP=0x00000000000a3a9b
@property(readonly, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
- (void)setName:(id)arg1;	// IMP=0x00000000000a38b2
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property __weak id <HMMediaSystemDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateAccessoryReference;	// IMP=0x00000000000a3406
- (void)_registerNotificationHandlers;	// IMP=0x00000000000a3326
- (void)__configureWithContext:(id)arg1 home:(id)arg2;	// IMP=0x00000000000a3108
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a304a
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)_unconfigure;	// IMP=0x00000000000a2bd2
- (void)_unconfigureContext;	// IMP=0x00000000000a2b3c
- (id)initWithHome:(id)arg1 uuid:(id)arg2 name:(id)arg3 configuredName:(id)arg4 compatible:(_Bool)arg5 components:(id)arg6 settings:(id)arg7 symptomHandler:(id)arg8;	// IMP=0x00000000000a2967

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

