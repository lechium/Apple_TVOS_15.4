//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMUser;

@interface HFAccessoryInvitationAccessoryProfileItemProvider
{
    HMUser *_user;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001cf80b
@property(readonly, nonatomic) HMUser *user; // @synthesize user=_user;
- (id)invalidationReasons;	// IMP=0x00000000001cf785
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001cf6fb
- (id)initWithHome:(id)arg1 user:(id)arg2;	// IMP=0x00000000001cf45f
- (id)initWithHome:(id)arg1;	// IMP=0x00000000001cf3aa

@end
