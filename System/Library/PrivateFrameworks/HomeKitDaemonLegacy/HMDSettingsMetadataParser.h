//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDSettingsMetadataParserProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSString;
@protocol HMDSettingsControllerDependency;

@interface HMDSettingsMetadataParser : NSObject <HMFLogging, HMDSettingsMetadataParserProtocol>
{
    id <HMDSettingsControllerDependency> _dependency;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x000000000041f82a
- (void).cxx_destruct;	// IMP=0x000000000041f81c
@property(readonly) __weak id <HMDSettingsControllerDependency> dependency; // @synthesize dependency=_dependency;
- (id)logIdentifier;	// IMP=0x000000000041f78c
- (id)modelsFromMetadata:(id)arg1;	// IMP=0x000000000041dbc5
- (id)initWithDependency:(id)arg1;	// IMP=0x000000000041db61

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

