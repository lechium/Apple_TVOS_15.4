//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecord, HMDBackingStoreCacheGroup, HMDBackingStoreModelObject, NSData, NSString;

@interface HMDBackingStoreCacheUpdateRecordOperation
{
    HMDBackingStoreCacheGroup *_group;	// 8 = 0x8
    NSString *_recordName;	// 16 = 0x10
    CKRecord *_record;	// 24 = 0x18
    NSData *_data;	// 32 = 0x20
    HMDBackingStoreModelObject *_model;	// 40 = 0x28
    unsigned long long _encoding;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001db232
@property(readonly) unsigned long long encoding; // @synthesize encoding=_encoding;
@property(readonly) HMDBackingStoreModelObject *model; // @synthesize model=_model;
@property(readonly) NSData *data; // @synthesize data=_data;
@property(readonly) CKRecord *record; // @synthesize record=_record;
@property(readonly) NSString *recordName; // @synthesize recordName=_recordName;
@property(readonly) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
- (id)mainReturningError;	// IMP=0x00000000001daf17
- (id)initWithGroup:(id)arg1 name:(id)arg2 model:(id)arg3 resultBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000001daeeb
- (id)initWithGroup:(id)arg1 record:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000001dad50
- (id)initWithGroup:(id)arg1 record:(id)arg2 data:(id)arg3 encoding:(unsigned long long)arg4 resultBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000001dad24
- (id)initWithGroup:(id)arg1 name:(id)arg2 record:(id)arg3 data:(id)arg4 encoding:(unsigned long long)arg5 model:(id)arg6 resultBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000000001dabcd

@end

