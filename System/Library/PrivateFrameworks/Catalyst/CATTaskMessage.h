//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

@interface CATTaskMessage
{
    NSUUID *_taskUUID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000301ea
- (void).cxx_destruct;	// IMP=0x0000000000030477
@property(copy, nonatomic) NSUUID *taskUUID; // @synthesize taskUUID=_taskUUID;
- (id)description;	// IMP=0x0000000000030364
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000302c9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000301f2
- (id)initWithTaskUUID:(id)arg1;	// IMP=0x0000000000030112

@end

