//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, NSUUID;

@interface CATNotificationMessage
{
    NSUUID *_taskUUID;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSDictionary *_userInfo;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001066c
- (void).cxx_destruct;	// IMP=0x0000000000010a70
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSUUID *taskUUID; // @synthesize taskUUID=_taskUUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000010901
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010674
- (id)initWithTaskUUID:(id)arg1 name:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000001055a
- (id)initWithName:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000001041c

@end

