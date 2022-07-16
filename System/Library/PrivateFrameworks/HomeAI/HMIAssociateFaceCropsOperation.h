//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

@class NSSet, NSUUID;
@protocol HMIHomePersonManagerDataSource;

@interface HMIAssociateFaceCropsOperation : HMFOperation
{
    id <HMIHomePersonManagerDataSource> _dataSource;	// 8 = 0x8
    NSSet *_faceCropUUIDs;	// 16 = 0x10
    NSUUID *_personUUID;	// 24 = 0x18
    long long _source;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00000000000bd561
- (void).cxx_destruct;	// IMP=0x00000000000bd5be
@property(readonly) long long source; // @synthesize source=_source;
@property(readonly, copy) NSUUID *personUUID; // @synthesize personUUID=_personUUID;
@property(readonly, copy) NSSet *faceCropUUIDs; // @synthesize faceCropUUIDs=_faceCropUUIDs;
@property(readonly) id <HMIHomePersonManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)mainInsideAutoreleasePool;	// IMP=0x00000000000bd0e0
- (void)main;	// IMP=0x00000000000bd0b2
- (id)initWithDataSource:(id)arg1 faceCropUUIDs:(id)arg2 personUUID:(id)arg3 source:(long long)arg4;	// IMP=0x00000000000bcfd1

@end

