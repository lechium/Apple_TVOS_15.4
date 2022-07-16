//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFObject-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>
#import <HomeKitDaemonLegacy/NSURLSessionDownloadDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/SZExtractorDelegate-Protocol.h>

@class HMSoftwareUpdateDocumentation, HMSoftwareUpdateDocumentationMetadata, NSArray, NSInputStream, NSObject, NSString, NSURL, NSURLSession, NSUUID, SZExtractor;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDSoftwareUpdateDocumentationAsset : HMFObject <HMFLogging, HMFObject, NSURLSessionDownloadDelegate, SZExtractorDelegate, NSSecureCoding>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _shouldAutomaticallyCache;	// 24 = 0x18
    long long _state;	// 32 = 0x20
    NSUUID *_identifier;	// 40 = 0x28
    HMSoftwareUpdateDocumentationMetadata *_metadata;	// 48 = 0x30
    NSURLSession *_URLSession;	// 56 = 0x38
    SZExtractor *_extrator;	// 64 = 0x40
    NSInputStream *_archivedFileStream;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000006f1e9b
+ (id)logCategory;	// IMP=0x00000000006f1e6b
+ (id)assetWithURL:(id)arg1;	// IMP=0x00000000006f194f
+ (id)assetDirectoryURL;	// IMP=0x00000000006f191f
- (void).cxx_destruct;	// IMP=0x00000000006ef6a4
@property(retain, nonatomic) NSInputStream *archivedFileStream; // @synthesize archivedFileStream=_archivedFileStream;
@property(retain, nonatomic) SZExtractor *extrator; // @synthesize extrator=_extrator;
@property(retain, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(readonly) HMSoftwareUpdateDocumentationMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)setExtractionProgress:(double)arg1;	// IMP=0x00000000006ef523
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x00000000006ef246
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;	// IMP=0x00000000006ef148
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00000000006ef03c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006eef44
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006eee39
- (id)logIdentifier;	// IMP=0x00000000006eede9
- (void)finishUnarchive;	// IMP=0x00000000006eed97
- (void)cancelUnarchive;	// IMP=0x00000000006eed45
- (void)startUnarchive;	// IMP=0x00000000006eecf3
- (void)finishDownload;	// IMP=0x00000000006eeca1
- (void)cancelDownload;	// IMP=0x00000000006eec4f
- (void)startDownload;	// IMP=0x00000000006eebfd
- (_Bool)purgeWithError:(id *)arg1;	// IMP=0x00000000006eeab3
- (void)startCaching;	// IMP=0x00000000006eea45
- (_Bool)saveWithError:(id *)arg1;	// IMP=0x00000000006ee6cc
@property(readonly, copy) HMSoftwareUpdateDocumentation *documentation;
- (id)bundleURL;	// IMP=0x00000000006ee3dd
- (id)archiveURL;	// IMP=0x00000000006ee386
- (id)metadataURL;	// IMP=0x00000000006ee32f
@property(readonly, copy) NSURL *URL;
- (void)setState:(long long)arg1;	// IMP=0x00000000006ee040
@property(readonly) long long state; // @synthesize state=_state;
@property _Bool shouldAutomaticallyCache; // @synthesize shouldAutomaticallyCache=_shouldAutomaticallyCache;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006edc38
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithDocumentationMetadata:(id)arg1;	// IMP=0x00000000006ed8c6
- (id)init;	// IMP=0x00000000006ed81e

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly) Class superclass;

@end

