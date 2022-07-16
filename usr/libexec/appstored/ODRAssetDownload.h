//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL, NSUUID;

@interface ODRAssetDownload
{
}

+ (void)updateDownloadURLWithRequest:(id)arg1;	// IMP=0x004000000000c8d8
+ (void)deleteDownloads:(id)arg1;	// IMP=0x001000000000c7ae
+ (void)deleteDownloadForRequest:(id)arg1;	// IMP=0x001000000000c62f
+ (void)deleteDownload:(id)arg1;	// IMP=0x001000000000c559
+ (id)allDownloads;	// IMP=0x001000000000c3f1
+ (void)addDownloadForRequest:(id)arg1;	// IMP=0x001000000000c1f9
+ (id)defaultProperties;	// IMP=0x001000000000c150
+ (Class)databaseEntityClass;	// IMP=0x001000000000c02c
- (id)_urlForProperty:(id)arg1;	// IMP=0x002000000000cabe
@property(readonly, nonatomic) NSString *uniqueKey;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) NSURL *sourceURL;
@property(readonly, nonatomic) _Bool isPaused;
@property(readonly, nonatomic) NSUUID *coordinatorID;
@property(readonly, nonatomic) NSString *bundleKey;
@property(readonly, nonatomic) NSString *bundleID;

@end
