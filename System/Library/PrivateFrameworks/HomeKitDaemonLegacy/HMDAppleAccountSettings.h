//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSString;

@interface HMDAppleAccountSettings : HMFObject <HMFLogging>
{
}

+ (_Bool)supportsCloudSettings;	// IMP=0x000000000066bee9
+ (id)sharedSettings;	// IMP=0x000000000066beb9
+ (id)logCategory;	// IMP=0x0000000000184960
- (void)updateHomeEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000066be4b
- (void)synchronize;	// IMP=0x000000000066be45
@property(readonly, getter=isEphemeral) _Bool ephemeral;
@property(readonly, getter=isManaged) _Bool managed;
@property(readonly, getter=isKeychainSyncEnabled) _Bool keychainSyncEnabled;
@property(readonly, getter=isHomeEnabled) _Bool homeEnabled;
- (id)attributeDescriptions;	// IMP=0x0000000000184775
@property(readonly, getter=isEducationMode) _Bool educationMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

