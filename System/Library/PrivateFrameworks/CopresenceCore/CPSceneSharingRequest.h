//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUserActivity;

@interface CPSceneSharingRequest
{
    NSUserActivity *_userActivity;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000011a47
- (void).cxx_destruct;	// IMP=0x0000000000011c34
@property(retain, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011b98
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000011afd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011a4f

@end
