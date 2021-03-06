//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDistributedSync/NSCopying-Protocol.h>

@class CKAtomLocation, CKDistributedTimestamp, CKMergeableValueID;

@interface CKAtomReference : NSObject <NSCopying>
{
    unsigned char _type;	// 8 = 0x8
    CKMergeableValueID *_mergeableValueID;	// 16 = 0x10
    CKDistributedTimestamp *_timestamp;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000dbbb8
@property(retain, nonatomic) CKDistributedTimestamp *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) CKMergeableValueID *mergeableValueID; // @synthesize mergeableValueID=_mergeableValueID;
@property(nonatomic) unsigned char type; // @synthesize type=_type;
- (unsigned long long)hash;	// IMP=0x00000000000dbad3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000db891
- (_Bool)isEqualToReference:(id)arg1;	// IMP=0x00000000000db87f
@property(readonly, nonatomic) CKAtomLocation *location;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000db61e
- (id)initWithLocation:(id)arg1 timestamp:(id)arg2 type:(unsigned char)arg3;	// IMP=0x00000000000db60c
- (id)initWithLocation:(id)arg1;	// IMP=0x00000000000db5fa
- (id)initWithMergeableValueID:(id)arg1 timestamp:(id)arg2 type:(unsigned char)arg3;	// IMP=0x00000000000db556
- (id)initWithMergeableValueID:(id)arg1 timestamp:(id)arg2;	// IMP=0x00000000000db4b9
- (id)initWithMergeableValueID:(id)arg1;	// IMP=0x00000000000db4a5

@end

