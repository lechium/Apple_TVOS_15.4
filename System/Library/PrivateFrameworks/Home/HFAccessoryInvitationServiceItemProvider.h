//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMUser;

@interface HFAccessoryInvitationServiceItemProvider
{
    HMUser *_user;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000023288a
@property(readonly, nonatomic) HMUser *user; // @synthesize user=_user;
- (id)invalidationReasons;	// IMP=0x0000000000232804
- (CDUnknownBlockType)filter;	// IMP=0x000000000023257f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002324f5
- (id)initWithHome:(id)arg1 user:(id)arg2;	// IMP=0x000000000023247b
- (id)initWithHome:(id)arg1 serviceTypes:(id)arg2;	// IMP=0x00000000002323c6

@end

