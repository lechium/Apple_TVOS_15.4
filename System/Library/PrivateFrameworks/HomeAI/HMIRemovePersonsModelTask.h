//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

@interface HMIRemovePersonsModelTask
{
    NSUUID *_sourceUUID;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00000000000614e1
- (void).cxx_destruct;	// IMP=0x0000000000061501
@property(readonly) NSUUID *sourceUUID; // @synthesize sourceUUID=_sourceUUID;
- (id)logIdentifier;	// IMP=0x000000000006144e
- (void)mainInsideAutoreleasePool;	// IMP=0x00000000000611e7
- (id)initWithTaskID:(int)arg1 homeUUID:(id)arg2 sourceUUID:(id)arg3;	// IMP=0x000000000006115d

@end

