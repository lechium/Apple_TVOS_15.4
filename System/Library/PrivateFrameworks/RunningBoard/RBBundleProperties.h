//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBBundleProperties-Protocol.h>

@class NSDictionary, NSString, NSURL, RBBundlePropertiesBSXPCProvider, RBBundlePropertiesLSProvider, RBLSBundleProperties, RBSProcessIdentifier, RBSProcessIdentity, RBXPCBundleProperties;

@interface RBBundleProperties : NSObject <RBBundleProperties>
{
    RBBundlePropertiesLSProvider *_lsProvider;	// 8 = 0x8
    RBBundlePropertiesBSXPCProvider *_xpcProvider;	// 16 = 0x10
    RBSProcessIdentifier *_processIdentifier;	// 24 = 0x18
    RBSProcessIdentity *_processIdentity;	// 32 = 0x20
    RBLSBundleProperties *_lsBundleProperties;	// 40 = 0x28
    RBXPCBundleProperties *_xpcBundleProperties;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000017cf5
@property(readonly, copy) NSString *debugDescription;
- (id)bundleInfoValuesForKeys:(id)arg1;	// IMP=0x0000000000017bfc
@property(readonly, nonatomic) NSDictionary *environmentVariables;
@property(readonly, nonatomic) NSURL *dataContainerURL;
@property(readonly, nonatomic) int preferredJetsamBand;
@property(readonly, nonatomic) int platform;
@property(readonly, nonatomic) _Bool isExtension;
@property(readonly, nonatomic) _Bool hasPreferredJetsamBand;
@property(readonly, nonatomic) _Bool continuousBackgroundMode;
@property(readonly, nonatomic) _Bool usesSocketMonitoring;
@property(readonly, nonatomic) _Bool supportsUnboundedTaskCompletion;
@property(readonly, nonatomic) _Bool supportsBackgroundAudio;
@property(readonly, nonatomic) _Bool supportsBackgroundNetworkAuthentication;
@property(readonly, nonatomic) _Bool supportsBackgroundContentFetching;
@property(readonly, copy, nonatomic) NSString *extensionPointIdentifier;
@property(readonly, copy, nonatomic) NSString *executablePath;
@property(readonly, copy, nonatomic) NSString *bundlePath;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier;
- (id)initWithLSProvider:(id)arg1 xpcProvider:(id)arg2 processIdentity:(id)arg3 processIdentifier:(id)arg4;	// IMP=0x000000000001760c

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

