//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSString;

@interface CLHRequestArchive : NSObject
{
    NSString *_directory;	// 8 = 0x8
    unsigned int _requestCode;	// 16 = 0x10
    double _rotationInterval;	// 24 = 0x18
    double _lastRotationTime;	// 32 = 0x20
    unsigned long long _count;	// 40 = 0x28
    unsigned long long _totalCount;	// 48 = 0x30
    NSString *_secondaryPath;	// 56 = 0x38
    NSFileHandle *_secondaryFileHandle;	// 64 = 0x40
}

@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSFileHandle *secondaryFileHandle; // @synthesize secondaryFileHandle=_secondaryFileHandle;
@property(retain, nonatomic) NSString *secondaryPath; // @synthesize secondaryPath=_secondaryPath;
@property(readonly) unsigned int requestCode; // @synthesize requestCode=_requestCode;
@property(nonatomic) double rotationInterval; // @synthesize rotationInterval=_rotationInterval;
- (id)jsonObject;	// IMP=0x0010000000839258
- (void)eraseAllData;	// IMP=0x0010000000839138
- (unsigned long long)totalSecondaryPointsUnderAllSubArchives;	// IMP=0x0010000000838e10
- (id)secondaryFileURLs;	// IMP=0x0010000000838ca5
- (id)pathForSecondaryData;	// IMP=0x0010000000838c76
- (id)pathForPrimaryData;	// IMP=0x0010000000838c59
- (void)updateCount;	// IMP=0x0010000000838b20
- (id)inactiveSubArchives;	// IMP=0x001000000083876e
- (_Bool)isActiveSubArchive;	// IMP=0x0010000000838730
- (_Bool)deleteSubArchiveIfInactive:(id)arg1;	// IMP=0x00100000008384c0
- (void)iterateSubArchivesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000083831b
- (void)generateNewSubArchive;	// IMP=0x0010000000837f96
- (void)iterateSecondaryData:(id)arg1 forField:(unsigned int)arg2 withHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000837eaf
- (id)pruneAndGetSecondaryDataOlderThan:(double)arg1;	// IMP=0x0010000000837c95
- (void)pruneSecondaryDataOlderThan:(double)arg1;	// IMP=0x0010000000837b0c
- (id)mappedSecondaryData;	// IMP=0x001000000083798f
- (id)mappedSecondaryDataByDestructivelyCombiningAllSecondaryData;	// IMP=0x00100000008377da
- (void)writeSecondaryData:(id)arg1 toField:(unsigned int)arg2;	// IMP=0x0010000000837641
- (void)writeSecondaryObject:(id)arg1 toField:(unsigned int)arg2;	// IMP=0x00100000008375fe
- (void)incrementCountBy:(unsigned long long)arg1;	// IMP=0x00100000008373e7
- (_Bool)primaryDataExists;	// IMP=0x0010000000837396
- (id)mappedPrimaryData;	// IMP=0x001000000083737a
- (void)overwritePrimaryObject:(id)arg1;	// IMP=0x0010000000837346
- (void)overwritePrimaryData:(id)arg1;	// IMP=0x0010000000836db1
- (id)mappedDataByDestructivelyCombiningPrimaryAndSecondaryData;	// IMP=0x0010000000836854
- (unsigned int)secondaryDataSize;	// IMP=0x00100000008366c8
- (unsigned int)primaryDataSize;	// IMP=0x0010000000836656
@property(readonly) unsigned long long fileCount;
- (id)directory;	// IMP=0x0010000000836621
- (unsigned long long)totalCountIncludingAllSubArchives;	// IMP=0x00100000008365fc
@property(readonly) unsigned long long count; // @synthesize count=_count;
- (void)rotateSecondaryFile;	// IMP=0x001000000083641a
- (void)dealloc;	// IMP=0x0010000000836368
- (id)initWithDirectory:(id)arg1 requestCode:(int)arg2 itemCountThresholdForAutoCleanUp:(int)arg3;	// IMP=0x00100000008359f3
- (id)initWithDirectory:(id)arg1 itemCountThresholdForAutoCleanUp:(int)arg2;	// IMP=0x00100000008359dc
- (id)initWithDirectory:(id)arg1 requestCode:(int)arg2;	// IMP=0x00100000008359c4
- (id)initWithDirectory:(id)arg1;	// IMP=0x00100000008359aa
- (id)init;	// IMP=0x001000000083597f
- (void)setCount:(unsigned long long)arg1;	// IMP=0x0010000000835812

@end
