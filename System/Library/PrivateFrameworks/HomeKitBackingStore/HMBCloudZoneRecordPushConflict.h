//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CKRecord, CKRecordID;

@interface HMBCloudZoneRecordPushConflict : HMFObject
{
    CKRecordID *_recordID;	// 8 = 0x8
    CKRecord *_clientRecord;	// 16 = 0x10
    CKRecord *_serverRecord;	// 24 = 0x18
    CKRecord *_ancestorRecord;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000062871
@property(readonly) CKRecord *ancestorRecord; // @synthesize ancestorRecord=_ancestorRecord;
@property(readonly) CKRecord *serverRecord; // @synthesize serverRecord=_serverRecord;
@property(readonly) CKRecord *clientRecord; // @synthesize clientRecord=_clientRecord;
@property(readonly) CKRecordID *recordID; // @synthesize recordID=_recordID;
- (id)attributeDescriptions;	// IMP=0x00000000000625c7
- (unsigned long long)hash;	// IMP=0x0000000000062583
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000062374
- (id)initWithRecordID:(id)arg1 clientRecord:(id)arg2 serverRecord:(id)arg3 ancestorRecord:(id)arg4;	// IMP=0x0000000000062260
- (id)initWithRecordID:(id)arg1 error:(id)arg2;	// IMP=0x0000000000061ba4

@end

