//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDBackingStoreRecordMapping-Protocol.h>

@class HMDBackingStoreCacheGroup, NSString, NSUUID;

@interface HMDBackingStoreCacheFetchRecordMappingResult : HMFObject <HMDBackingStoreRecordMapping>
{
    NSString *_recordName;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
    NSUUID *_parentUuid;	// 24 = 0x18
    NSString *_type;	// 32 = 0x20
    HMDBackingStoreCacheGroup *_group;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001dddff
@property(readonly, nonatomic) HMDBackingStoreCacheGroup *group; // @synthesize group=_group;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSUUID *parentUuid; // @synthesize parentUuid=_parentUuid;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
@property(readonly, copy) NSString *description;
- (id)initWithGroup:(id)arg1 recordName:(id)arg2 uuid:(id)arg3 parentUuid:(id)arg4 type:(id)arg5;	// IMP=0x00000000001ddab0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

