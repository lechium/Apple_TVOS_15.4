//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface HMDHomeAccessCodeModel
{
}

+ (id)modelUUIDForHomeUUID:(id)arg1 accessCodeValue:(id)arg2;	// IMP=0x00000000006f748b
+ (id)properties;	// IMP=0x00000000006f745b
- (id)initWithHomeUUID:(id)arg1 value:(id)arg2 label:(id)arg3;	// IMP=0x00000000006f7373

// Remaining properties
@property(copy) NSString *label; // @dynamic label;
@property(copy) NSString *value; // @dynamic value;

@end
