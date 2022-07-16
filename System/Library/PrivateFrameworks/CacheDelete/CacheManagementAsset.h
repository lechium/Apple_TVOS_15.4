//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CacheManagementAsset : NSObject
{
    int _priority;	// 8 = 0x8
    unsigned int _assetVersion;	// 12 = 0xc
    NSString *_displayName;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_relativePath;	// 32 = 0x20
    NSString *_contentType;	// 40 = 0x28
    NSData *_metadata;	// 48 = 0x30
    double _expiration_date;	// 56 = 0x38
    double _consumed_date;	// 64 = 0x40
    double _download_start_date;	// 72 = 0x48
    double _download_completion_date;	// 80 = 0x50
    double _last_viewed_date;	// 88 = 0x58
    NSString *_absolutePath;	// 96 = 0x60
}

+ (id)assetFromPath:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x0000000000004cf8
+ (id)assetFromPath:(id)arg1 withIdentifier:(id)arg2 createIfAbsent:(_Bool)arg3;	// IMP=0x0000000000003cc2
+ (id)assetFromFile:(id)arg1 withIdentifier:(id)arg2;	// IMP=0x000000000000336d
+ (id)assetFromData:(id)arg1;	// IMP=0x000000000000331f
+ (id)assetWithRelativePath:(id)arg1 identifier:(id)arg2 expirationDate:(id)arg3 contentType:(id)arg4 metadata:(id)arg5 priority:(int)arg6;	// IMP=0x0000000000003188
- (void).cxx_destruct;	// IMP=0x0000000000006779
@property(retain) NSString *absolutePath; // @synthesize absolutePath=_absolutePath;
@property double last_viewed_date; // @synthesize last_viewed_date=_last_viewed_date;
@property double download_completion_date; // @synthesize download_completion_date=_download_completion_date;
@property double download_start_date; // @synthesize download_start_date=_download_start_date;
@property double consumed_date; // @synthesize consumed_date=_consumed_date;
@property double expiration_date; // @synthesize expiration_date=_expiration_date;
@property(readonly) unsigned int assetVersion; // @synthesize assetVersion=_assetVersion;
@property int priority; // @synthesize priority=_priority;
@property(retain, nonatomic) NSData *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *relativePath; // @synthesize relativePath=_relativePath;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)description;	// IMP=0x00000000000063e1
- (long long)sizeCached:(_Bool)arg1;	// IMP=0x00000000000062f2
- (long long)size;	// IMP=0x0000000000006261
- (int)purgeabilityScoreAtUrgency:(int)arg1;	// IMP=0x0000000000005cae
- (void)commit;	// IMP=0x000000000000574d
- (id)fullPath;	// IMP=0x0000000000005382
@property(retain, nonatomic) NSData *thumbnailData;
- (id)lastViewedDate;	// IMP=0x00000000000052ec
- (void)setLastViewedDate:(id)arg1;	// IMP=0x00000000000052aa
- (id)downloadCompletionDate;	// IMP=0x0000000000005246
- (void)setDownloadCompletionDate:(id)arg1;	// IMP=0x0000000000005204
- (id)downloadStartDate;	// IMP=0x00000000000051a0
- (void)setDownloadStartDate:(id)arg1;	// IMP=0x000000000000515e
- (id)consumedDate;	// IMP=0x00000000000050fa
- (void)setConsumedDate:(id)arg1;	// IMP=0x000000000000500e
- (id)expirationDate;	// IMP=0x0000000000004faa
- (void)setExpirationDate:(id)arg1;	// IMP=0x0000000000004ebe
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004e27
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004d63
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000004d10
- (CDStruct_1285e12c *)createFlattenedAsset:(long long *)arg1;	// IMP=0x000000000000273f
- (id)initWithFlattenedAsset:(CDStruct_1285e12c *)arg1;	// IMP=0x0000000000001fca
- (id)initWithRelativePath:(id)arg1 identifier:(id)arg2 expirationDate:(id)arg3 contentType:(id)arg4 metadata:(id)arg5 priority:(int)arg6;	// IMP=0x0000000000001d81

@end

