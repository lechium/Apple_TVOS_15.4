//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSFastEnumeration-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CPLChangeBatch : NSObject <NSSecureCoding, NSCopying, NSFastEnumeration>
{
    NSMutableArray *_records;	// 8 = 0x8
    NSMutableDictionary *_additionalRecords;	// 16 = 0x10
    NSMutableDictionary *_localResources;	// 24 = 0x18
    _Bool _calculateEstimatedBatchSize;	// 32 = 0x20
    unsigned long long _estimatedBatchSize;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000054499
- (void).cxx_destruct;	// IMP=0x0000000000146514
- (unsigned long long)estimatedBatchSize;	// IMP=0x000000000014628a
- (id)redactedDescription;	// IMP=0x0000000000146273
- (id)description;	// IMP=0x000000000014625f
- (id)_descriptionRedacted:(_Bool)arg1;	// IMP=0x0000000000145f5a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000145bc6
- (void)appendLocalResources:(id)arg1 forItemWithCloudScopedIdentifier:(id)arg2;	// IMP=0x000000000014593b
- (id)localResourceOfType:(unsigned long long)arg1 forItemWithCloudScopedIdentifier:(id)arg2;	// IMP=0x00000000001458a5
- (id)summaryDescription;	// IMP=0x0000000000145439
- (void)_setRecords:(id)arg1;	// IMP=0x0000000000145411
- (unsigned long long)count;	// IMP=0x00000000001453fb
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x00000000001453e5
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000001453cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000145348
- (void)_addAdditionalRecord:(id)arg1;	// IMP=0x0000000000145297
- (id)_additionalRecords;	// IMP=0x0000000000145281
- (void)_setAdditionalRecords:(id)arg1;	// IMP=0x0000000000145061
- (id)additionalRecordWithIdentifier:(id)arg1;	// IMP=0x0000000000144fd8
- (id)additionalRecordWithScopedIdentifier:(id)arg1;	// IMP=0x0000000000144fc2
- (id)filterScopeChangeFromBatch;	// IMP=0x0000000000144de7
- (_Bool)hasChangeWithIdentifier:(id)arg1;	// IMP=0x0000000000144d6c
- (id)recordWithScopedIdentifier:(id)arg1;	// IMP=0x0000000000144ba7
- (_Bool)hasChangeWithScopedIdentifier:(id)arg1;	// IMP=0x0000000000144a00
@property(readonly, nonatomic) NSArray *records;
- (void)removeRecordWithIdentifier:(id)arg1;	// IMP=0x000000000014497c
- (void)removeRecordWithScopedIdentifier:(id)arg1;	// IMP=0x0000000000144864
- (void)addRecordsFromBatch:(id)arg1;	// IMP=0x00000000001446c2
- (void)addRecord:(id)arg1;	// IMP=0x000000000014453f
- (id)_initWithRecords:(id)arg1;	// IMP=0x00000000001444e5
- (id)initWithRecords:(id)arg1;	// IMP=0x0000000000144488
- (id)init;	// IMP=0x0000000000144432
- (id)cplFullDescription;	// IMP=0x0000000000054115
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000053d13
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000053c54
- (void)extractInitialDownloadBatch:(id *)arg1 shouldConsiderRecordFilter:(CDUnknownBlockType)arg2;	// IMP=0x000000000009bdde
- (_Bool)sortBatchWithError:(id *)arg1;	// IMP=0x000000000009b18b
- (void)_addChange:(id)arg1 resultBatch:(id)arg2 changesPerScopedIdentifier:(id)arg3 changesPerClass:(id)arg4;	// IMP=0x000000000009b00d

@end

