//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBBundleProperties-Protocol.h>

@class LSBundleProxy, NSDictionary, NSString, NSURL;

@interface RBLSBundleProperties : NSObject <RBBundleProperties>
{
    LSBundleProxy *_proxy;	// 8 = 0x8
    _Bool _hasPreferredJetsamBand;	// 16 = 0x10
    _Bool _supportsBackgroundContentFetching;	// 17 = 0x11
    _Bool _supportsBackgroundNetworkAuthentication;	// 18 = 0x12
    _Bool _supportsBackgroundAudio;	// 19 = 0x13
    _Bool _supportsUnboundedTaskCompletion;	// 20 = 0x14
    _Bool _usesSocketMonitoring;	// 21 = 0x15
    _Bool _continuousBackgroundMode;	// 22 = 0x16
    _Bool _isExtension;	// 23 = 0x17
    int _preferredJetsamBand;	// 24 = 0x18
    int _platform;	// 28 = 0x1c
    NSString *_identifier;	// 32 = 0x20
    NSString *_path;	// 40 = 0x28
    NSString *_executablePath;	// 48 = 0x30
    NSString *_extensionPointIdentifier;	// 56 = 0x38
    NSURL *_dataContainerURL;	// 64 = 0x40
    NSDictionary *_environmentVariables;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000459c7
@property(readonly, nonatomic) int platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) _Bool isExtension; // @synthesize isExtension=_isExtension;
@property(readonly, nonatomic) _Bool continuousBackgroundMode; // @synthesize continuousBackgroundMode=_continuousBackgroundMode;
@property(readonly, nonatomic) _Bool usesSocketMonitoring; // @synthesize usesSocketMonitoring=_usesSocketMonitoring;
@property(readonly, nonatomic) _Bool supportsUnboundedTaskCompletion; // @synthesize supportsUnboundedTaskCompletion=_supportsUnboundedTaskCompletion;
@property(readonly, nonatomic) _Bool supportsBackgroundAudio; // @synthesize supportsBackgroundAudio=_supportsBackgroundAudio;
@property(readonly, nonatomic) _Bool supportsBackgroundNetworkAuthentication; // @synthesize supportsBackgroundNetworkAuthentication=_supportsBackgroundNetworkAuthentication;
@property(readonly, nonatomic) _Bool supportsBackgroundContentFetching; // @synthesize supportsBackgroundContentFetching=_supportsBackgroundContentFetching;
@property(readonly, nonatomic) int preferredJetsamBand; // @synthesize preferredJetsamBand=_preferredJetsamBand;
@property(readonly, nonatomic) _Bool hasPreferredJetsamBand; // @synthesize hasPreferredJetsamBand=_hasPreferredJetsamBand;
@property(readonly, nonatomic) NSDictionary *environmentVariables; // @synthesize environmentVariables=_environmentVariables;
@property(readonly, nonatomic) NSURL *dataContainerURL; // @synthesize dataContainerURL=_dataContainerURL;
@property(readonly, copy, nonatomic) NSString *extensionPointIdentifier; // @synthesize extensionPointIdentifier=_extensionPointIdentifier;
@property(readonly, copy, nonatomic) NSString *executablePath; // @synthesize executablePath=_executablePath;
@property(readonly, copy, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_path;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_identifier;
- (id)bundleInfoValuesForKeys:(id)arg1;	// IMP=0x000000000004586c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

