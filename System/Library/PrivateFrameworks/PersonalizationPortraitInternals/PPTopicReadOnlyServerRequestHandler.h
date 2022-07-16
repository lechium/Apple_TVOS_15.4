//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PersonalizationPortraitInternals/PPTopicReadOnlyServerProtocol-Protocol.h>

@class NSString, PPXPCServerPipelinedBatchQueryManager, _PASBundleIdResolver;
@protocol PPTopicClientProtocol;

@interface PPTopicReadOnlyServerRequestHandler : NSObject <PPTopicReadOnlyServerProtocol>
{
    id <PPTopicClientProtocol> _clientProxy;	// 8 = 0x8
    PPXPCServerPipelinedBatchQueryManager *_queryManager;	// 16 = 0x10
    NSString *_clientProcessName;	// 24 = 0x18
    _PASBundleIdResolver *_bundleIdResolver;	// 32 = 0x20
}

+ (id)filterQIDDictionary:(id)arg1 withAllowlistOfProcess:(id)arg2 allowlist:(id)arg3;	// IMP=0x00000000000da5af
+ (id)filterTopicRecordsNotInAllowlist:(id)arg1 withAllowlistOfProcess:(id)arg2 allowlist:(id)arg3;	// IMP=0x00000000000da3aa
+ (id)filterScoredTopicsNotInAllowlist:(id)arg1 withAllowlistOfProcess:(id)arg2 allowlist:(id)arg3;	// IMP=0x00000000000da1a5
- (void).cxx_destruct;	// IMP=0x00000000000d85a3
@property(retain, nonatomic) _PASBundleIdResolver *bundleIdResolver; // @synthesize bundleIdResolver=_bundleIdResolver;
@property(copy, nonatomic) NSString *clientProcessName; // @synthesize clientProcessName=_clientProcessName;
- (void)topicCacheSandboxExtensionToken:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d8474
- (void)cachePath:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d8379
- (void)registerUniversalSearchSpotlightFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d82ef
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d81d2
- (void)unmapMappedTopicIdentifier:(id)arg1 mappingIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d7d63
- (void)scoresForTopicMapping:(id)arg1 query:(id)arg2 queryId:(unsigned long long)arg3;	// IMP=0x00000000000d7b51
- (void)topicExtractionsFromText:(id)arg1 queryId:(unsigned long long)arg2;	// IMP=0x00000000000d79ae
- (void)topicRecordsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;	// IMP=0x00000000000d77ef
- (void)rankedTopicsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;	// IMP=0x00000000000d7630
- (void)unblockPendingQueries;	// IMP=0x00000000000d761a
- (void)setRemoteObjectProxy:(id)arg1;	// IMP=0x00000000000d7609
- (id)init;	// IMP=0x00000000000d758e

@end
