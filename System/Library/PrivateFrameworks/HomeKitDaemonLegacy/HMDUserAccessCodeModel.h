//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSUUID;

@interface HMDUserAccessCodeModel
{
}

+ (id)modelUUIDWithUUID:(id)arg1;	// IMP=0x000000000076f76f
+ (id)properties;	// IMP=0x000000000076f73f
- (id)initWithUserUUID:(id)arg1;	// IMP=0x000000000076f93e

// Remaining properties
@property(retain) NSUUID *changedByUserUUID; // @dynamic changedByUserUUID;
@property(copy) NSString *value; // @dynamic value;

@end

