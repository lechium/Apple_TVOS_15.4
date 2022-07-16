//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class HMDUser, HMDUserPresenceRegion, NSDate;

@interface HMDUserPresence : HMFObject <NSSecureCoding>
{
    HMDUser *_user;	// 8 = 0x8
    HMDUserPresenceRegion *_presenceRegionStatus;	// 16 = 0x10
    NSDate *_updateTimestamp;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000007015a4
- (void).cxx_destruct;	// IMP=0x0000000000701562
@property(readonly, nonatomic) NSDate *updateTimestamp; // @synthesize updateTimestamp=_updateTimestamp;
@property(retain, nonatomic) HMDUserPresenceRegion *presenceRegionStatus; // @synthesize presenceRegionStatus=_presenceRegionStatus;
@property(readonly, nonatomic) HMDUser *user; // @synthesize user=_user;
- (id)attributeDescriptions;	// IMP=0x0000000000701276
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000070119a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000701080
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000700e97
@property(readonly, nonatomic, getter=isNotAtHome) _Bool notAtHome;
@property(readonly, nonatomic, getter=isAtHome) _Bool atHome;
- (id)initWithUser:(id)arg1 presenceRegionStatus:(id)arg2 timeStamp:(id)arg3;	// IMP=0x0000000000700b90
- (id)initWithUser:(id)arg1 presenceRegionStatus:(id)arg2;	// IMP=0x0000000000700af4

@end

