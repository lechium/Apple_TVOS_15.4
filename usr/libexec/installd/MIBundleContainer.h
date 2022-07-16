//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MIBundleMetadata, MIExecutableBundle, NSURL;

@interface MIBundleContainer
{
    MIExecutableBundle *_bundle;	// 8 = 0x8
    MIBundleMetadata *_bundleMetadata;	// 16 = 0x10
}

+ (_Bool)updateiTunesMetadataForAppWithIdentifier:(id)arg1 plistData:(id)arg2 error:(id *)arg3;	// IMP=0x004000000005b34b
+ (id)updateSinfDataForAppWithIdentifier:(id)arg1 sinfData:(id)arg2 error:(id *)arg3;	// IMP=0x001000000005b096
+ (id)allVPNPluginBundleContainersWithError:(id *)arg1;	// IMP=0x001000000005b06a
+ (id)allAppBundleContainersWithError:(id *)arg1;	// IMP=0x001000000005b03e
+ (id)tempPluginKitPluginBundleContainerWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005b024
+ (id)tempVPNPluginBundleContainerWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005b00a
+ (id)tempAppBundleContainerWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005aff0
+ (id)pluginKitPluginBundleContainerWithIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2 created:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x001000000005afc3
+ (id)vpnPluginBundleContainerWithIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2 created:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x001000000005af96
+ (id)appBundleContainerWithIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2 created:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x001000000005af69
- (void).cxx_destruct;	// IMP=0x002000000005d558
@property(copy, nonatomic) MIBundleMetadata *bundleMetadata; // @synthesize bundleMetadata=_bundleMetadata;
@property(readonly, nonatomic) MIExecutableBundle *bundle; // @synthesize bundle=_bundle;
- (_Bool)stashBundleContainerContents:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005cc58
- (_Bool)transferExistingStashesFromContainer:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005c9cc
- (_Bool)cloneContentFromStashedBundleContainer:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005c3f5
- (id)stashedBundleContainerWithError:(id *)arg1;	// IMP=0x001000000005c3de
- (id)_stashedBundleContainerForIndex:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000005c1a9
- (id)_stashURLForIndex:(unsigned long long)arg1;	// IMP=0x001000000005c114
@property(readonly, nonatomic) NSURL *stashBaseURL;
@property(readonly, nonatomic) _Bool shouldHaveCorrespondingDataContainer;
@property(readonly, nonatomic) unsigned int bundleMaxLinkedSDKVersion;
- (_Bool)makeContainerLiveReplacingContainer:(id)arg1 reason:(unsigned long long)arg2 waitForDeletion:(_Bool)arg3 withError:(id *)arg4;	// IMP=0x001000000005bcfb
- (_Bool)captureBundleByMoving:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000005ba62
- (_Bool)saveBundleMetadata:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000005b996
- (id)bundleMetadataWithError:(id *)arg1;	// IMP=0x001000000005b812
@property(readonly, nonatomic) NSURL *bundleMetadataURL;
@property(readonly, nonatomic) NSURL *iTunesMetadataURL;
- (id)initWithContainer:(id)arg1;	// IMP=0x001000000005b56d
- (id)initForAppContainerWithURL:(id)arg1;	// IMP=0x001000000005b43f
- (_Bool)writeiTunesMetadata:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005b204

@end

