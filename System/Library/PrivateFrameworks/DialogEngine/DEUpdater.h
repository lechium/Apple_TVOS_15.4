//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DEManifest, DEUpdaterState, DEWorkQueues, NSDate, NSString, NSURL;

@interface DEUpdater : NSObject
{
    _Bool _manifestSyncing;	// 8 = 0x8
    _Bool _disableManifestSync;	// 9 = 0x9
    _Bool _foregroundManifestSync;	// 10 = 0xa
    _Bool _logToCoreAnalytics;	// 11 = 0xb
    NSString *_distribution;	// 16 = 0x10
    NSURL *_publicationURL;	// 24 = 0x18
    NSDate *_publicationErrorTime;	// 32 = 0x20
    double _publicationErrorTTL;	// 40 = 0x28
    NSURL *_downloadURLPrefix;	// 48 = 0x30
    NSURL *_builtinDir;	// 56 = 0x38
    NSURL *_updateDir;	// 64 = 0x40
    NSURL *_storageBase;	// 72 = 0x48
    NSURL *_overlayBase;	// 80 = 0x50
    NSURL *_tmpBase;	// 88 = 0x58
    DEManifest *_builtinManifest;	// 96 = 0x60
    DEManifest *_latestManifest;	// 104 = 0x68
    DEWorkQueues *_queues;	// 112 = 0x70
    DEWorkQueues *_syncQueues;	// 120 = 0x78
    DEUpdaterState *_state;	// 128 = 0x80
}

+ (_Bool)updatesExistFor:(id)arg1 updateDir:(id)arg2;	// IMP=0x00000000000bdad0
+ (id)getUpdatedURLFor:(id)arg1 updateDir:(id)arg2;	// IMP=0x00000000000bd956
+ (void)remove:(id)arg1 from:(id)arg2;	// IMP=0x00000000000bd463
+ (id)getUpdateDirFor:(id)arg1 base:(id)arg2;	// IMP=0x00000000000bcf70
+ (id)loadPublication:(id)arg1 defaultTag:(id)arg2 allowAllKeys:(_Bool)arg3;	// IMP=0x00000000000bcb69
+ (id)appendPublicationName:(id)arg1;	// IMP=0x00000000000bcb2d
+ (_Bool)prepareDistribution:(id)arg1 disabled:(_Bool)arg2 in:(id)arg3 tag:(id)arg4 keyId:(unsigned long long)arg5 privateKey:(id)arg6;	// IMP=0x00000000000bc36e
+ (_Bool)packageDirectory:(id)arg1 src:(id)arg2 contents:(id)arg3 summary:(id)arg4 dest:(id)arg5 manifestDest:(id)arg6 downloadType:(unsigned long long)arg7 keyId:(unsigned long long)arg8 privateKey:(id)arg9 updating:(id)arg10;	// IMP=0x00000000000bc321
+ (_Bool)package:(id)arg1 src:(id)arg2 contents:(id)arg3 summary:(id)arg4 dest:(id)arg5 manifestDest:(id)arg6 overrides:(id)arg7 keyId:(unsigned long long)arg8 privateKey:(id)arg9 updating:(id)arg10;	// IMP=0x00000000000bc2cb
+ (_Bool)package:(id)arg1 src:(id)arg2 contents:(id)arg3 summary:(id)arg4 dest:(id)arg5 manifestDest:(id)arg6 overrides:(id)arg7 dirDownloadType:(unsigned long long)arg8 keyId:(unsigned long long)arg9 privateKey:(id)arg10 updating:(id)arg11 publicationURL:(id)arg12 downloadURLPrefix:(id)arg13;	// IMP=0x00000000000bb1b0
+ (_Bool)putDirectoryManifest:(id)arg1 src:(id)arg2 contents:(id)arg3 summary:(id)arg4 downloadType:(unsigned long long)arg5;	// IMP=0x00000000000bb18d
+ (_Bool)putManifest:(id)arg1 src:(id)arg2 contents:(id)arg3 summary:(id)arg4 overrides:(id)arg5;	// IMP=0x00000000000bb16a
+ (_Bool)putManifest:(id)arg1 src:(id)arg2 contents:(id)arg3 summary:(id)arg4 overrides:(id)arg5 dirDownloadType:(unsigned long long)arg6;	// IMP=0x00000000000baa56
+ (id)summarize:(id)arg1 filter:(id)arg2;	// IMP=0x00000000000ba3b2
+ (_Bool)copyFrom:(id)arg1 to:(id)arg2;	// IMP=0x00000000000ba11a
+ (id)getPublicationPath:(id)arg1 category:(id)arg2 URLVersion:(unsigned long long)arg3;	// IMP=0x00000000000ba064
+ (id)getDownloadURLPrefix:(id)arg1;	// IMP=0x00000000000b9ea6
+ (id)getPublicationURL:(id)arg1;	// IMP=0x00000000000b9b75
+ (_Bool)hasDefaultURLs:(id)arg1 publicationURL:(id)arg2 downloadURLPrefix:(id)arg3;	// IMP=0x00000000000b98e5
+ (id)getDefaultCategory;	// IMP=0x00000000000b98b7
+ (id)getPublicationURL:(id)arg1 prefixURL:(id)arg2 category:(id)arg3;	// IMP=0x00000000000b9783
+ (id)getPublicationPath:(id)arg1 category:(id)arg2;	// IMP=0x00000000000b95ee
+ (id)getURLParams:(id)arg1;	// IMP=0x00000000000b95c3
+ (id)getURLParams:(id)arg1 URLVersion:(unsigned long long)arg2;	// IMP=0x00000000000b9597
+ (id)getURLParams:(id)arg1 URLVersion:(unsigned long long)arg2 manifest:(id)arg3;	// IMP=0x00000000000b8e10
+ (id)getVersionSeed:(unsigned long long)arg1;	// IMP=0x00000000000b8da6
+ (_Bool)manifestExists:(id)arg1;	// IMP=0x00000000000b8c8d
+ (void)clearURLParamsCache;	// IMP=0x00000000000b8c29
+ (id)getManifestName;	// IMP=0x00000000000b8c1c
+ (id)getDispatchQueue;	// IMP=0x00000000000b8ba1
- (void).cxx_destruct;	// IMP=0x00000000000c8161
@property(nonatomic) _Bool logToCoreAnalytics; // @synthesize logToCoreAnalytics=_logToCoreAnalytics;
@property(nonatomic) _Bool foregroundManifestSync; // @synthesize foregroundManifestSync=_foregroundManifestSync;
@property(nonatomic) _Bool disableManifestSync; // @synthesize disableManifestSync=_disableManifestSync;
@property _Bool manifestSyncing; // @synthesize manifestSyncing=_manifestSyncing;
@property(retain, nonatomic) DEUpdaterState *state; // @synthesize state=_state;
@property(retain, nonatomic) DEWorkQueues *syncQueues; // @synthesize syncQueues=_syncQueues;
@property(retain, nonatomic) DEWorkQueues *queues; // @synthesize queues=_queues;
@property(retain, nonatomic) DEManifest *latestManifest; // @synthesize latestManifest=_latestManifest;
@property(retain, nonatomic) DEManifest *builtinManifest; // @synthesize builtinManifest=_builtinManifest;
@property(retain, nonatomic) NSURL *tmpBase; // @synthesize tmpBase=_tmpBase;
@property(retain, nonatomic) NSURL *overlayBase; // @synthesize overlayBase=_overlayBase;
@property(retain, nonatomic) NSURL *storageBase; // @synthesize storageBase=_storageBase;
@property(retain, nonatomic) NSURL *updateDir; // @synthesize updateDir=_updateDir;
@property(retain, nonatomic) NSURL *builtinDir; // @synthesize builtinDir=_builtinDir;
@property(retain, nonatomic) NSURL *downloadURLPrefix; // @synthesize downloadURLPrefix=_downloadURLPrefix;
@property(nonatomic) double publicationErrorTTL; // @synthesize publicationErrorTTL=_publicationErrorTTL;
@property(retain, nonatomic) NSDate *publicationErrorTime; // @synthesize publicationErrorTime=_publicationErrorTime;
@property(retain, nonatomic) NSURL *publicationURL; // @synthesize publicationURL=_publicationURL;
@property(retain, nonatomic) NSString *distribution; // @synthesize distribution=_distribution;
- (id)findDirectory:(_Bool)arg1 status:(id *)arg2;	// IMP=0x00000000000c7ef8
- (void)findDirectory:(_Bool)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c7e4c
- (id)findDirectory:(_Bool)arg1 downloadType:(unsigned long long)arg2 status:(id *)arg3;	// IMP=0x00000000000c7ba3
- (void)findDirectory:(_Bool)arg1 downloadType:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c7841
- (void)findDirectoryLocally:(_Bool)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c76dd
- (id)findDirectoryLocally:(_Bool)arg1 status:(id *)arg2;	// IMP=0x00000000000c7313
- (_Bool)applyUpdate;	// IMP=0x00000000000c69f6
- (_Bool)updateIsReady;	// IMP=0x00000000000c67db
- (id)find:(id)arg1 status:(id *)arg2;	// IMP=0x00000000000c66e8
- (void)find:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c6617
- (id)find:(id)arg1 downloadType:(unsigned long long)arg2 status:(id *)arg3;	// IMP=0x00000000000c628a
- (void)find:(id)arg1 downloadType:(unsigned long long)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c5f9b
- (void)findLocally:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c5e08
- (id)findLocally:(id)arg1 status:(id *)arg2;	// IMP=0x00000000000c5b18
- (id)getOutOfDateVersion:(id)arg1;	// IMP=0x00000000000c5803
- (_Bool)nameKnown:(id)arg1 blockRequired:(_Bool *)arg2;	// IMP=0x00000000000c5758
- (void)update:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c551f
- (void)unorderedUpdate:(id)arg1 block:(CDUnknownBlockType)arg2 syncBlock:(CDUnknownBlockType)arg3 syncInForeground:(id)arg4;	// IMP=0x00000000000c3e09
- (_Bool)checkManifest:(id)arg1 manifestURL:(id)arg2;	// IMP=0x00000000000c3ae1
- (void)sync:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c378c
- (void)unorderedSync:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c2e6c
- (_Bool)syncNeeded;	// IMP=0x00000000000c2ce9
- (void)runSyncBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c2caa
- (void)prepare:(id)arg1 version:(id)arg2 encryptedVersion:(id)arg3 linkIfLatest:(_Bool)arg4 publication:(id)arg5 block:(CDUnknownBlockType)arg6;	// IMP=0x00000000000c2880
- (void)unorderedPrepare:(id)arg1 version:(id)arg2 encryptedVersion:(id)arg3 linkIfLatest:(_Bool)arg4 publication:(id)arg5 block:(CDUnknownBlockType)arg6;	// IMP=0x00000000000c1c9b
- (void)removeFromOverlay:(id)arg1;	// IMP=0x00000000000c1bf2
- (void)removeFromStorage:(id)arg1;	// IMP=0x00000000000c1bd1
- (id)store:(id)arg1 version:(id)arg2 encryptedVersion:(id)arg3 from:(id)arg4 src:(id)arg5;	// IMP=0x00000000000c1845
- (id)prepared:(id)arg1 version:(id)arg2;	// IMP=0x00000000000c1444
- (_Bool)matches:(id)arg1 filter:(id)arg2;	// IMP=0x00000000000c11d0
- (id)init;	// IMP=0x00000000000c11c2
- (id)initPlaceholder;	// IMP=0x00000000000c1193
- (id)initWithBuiltinDir:(id)arg1;	// IMP=0x00000000000c1166
- (id)initWithBuiltinDir:(id)arg1 filter:(id)arg2;	// IMP=0x00000000000c113d
- (id)initWithBuiltinDir:(id)arg1 updateDir:(id)arg2;	// IMP=0x00000000000c1110
- (id)initWithPublicationURL:(id)arg1 downloadURLPrefix:(id)arg2 builtinDir:(id)arg3;	// IMP=0x00000000000c10ea
- (id)initWithPublicationURL:(id)arg1 downloadURLPrefix:(id)arg2 builtinDir:(id)arg3 updateDir:(id)arg4 filter:(id)arg5;	// IMP=0x00000000000c0a22
- (void)setUpdatesExist;	// IMP=0x00000000000c063c
- (void)prepareLatestManifest;	// IMP=0x00000000000c04c1
- (id)chooseURLFor:(id)arg1 version:(id)arg2 versionFound:(_Bool *)arg3;	// IMP=0x00000000000bfed7
- (_Bool)prepareBuiltinManifest:(_Bool)arg1 filter:(id)arg2;	// IMP=0x00000000000bf3e5
- (_Bool)saveState;	// IMP=0x00000000000bf1c6
- (_Bool)resetState;	// IMP=0x00000000000bf042
- (_Bool)loadState;	// IMP=0x00000000000bed2f
- (_Bool)linkToOverlay:(id)arg1 from:(id)arg2 replace:(_Bool)arg3;	// IMP=0x00000000000bed19
- (_Bool)linkToOverlay:(id)arg1 from:(id)arg2 replace:(_Bool)arg3 shouldSymlink:(_Bool)arg4;	// IMP=0x00000000000be40c
- (void)checkOverlay:(id)arg1 version:(id)arg2;	// IMP=0x00000000000be0af
- (id)chooseOverlayBase;	// IMP=0x00000000000bdfcb
- (id)getDownloadURLFor:(id)arg1 encryptedVersion:(id)arg2;	// IMP=0x00000000000bdf9b
- (id)getStorageURLFor:(id)arg1 version:(id)arg2;	// IMP=0x00000000000bdf6b
- (id)getVersionFor:(id)arg1;	// IMP=0x00000000000bdf47
- (id)getVersionFor:(id)arg1 encryptedVersion:(id *)arg2;	// IMP=0x00000000000bdda0
- (id)getLatestManifestAsset:(id)arg1;	// IMP=0x00000000000bdcca
- (id)getLatestManifestVersion;	// IMP=0x00000000000bdc5d
- (_Bool)directoryDistributionValid;	// IMP=0x00000000000bdc18
- (_Bool)individualDistributionValid;	// IMP=0x00000000000bdbd0
- (_Bool)isDirectoryDistribution;	// IMP=0x00000000000bdbb2

@end
