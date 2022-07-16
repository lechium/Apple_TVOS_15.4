//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface DMFInviteUserToVPPRequest
{
    NSURL *_URL;	// 8 = 0x8
    NSString *_originator;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000029b69
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x0000000000029b61
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x0000000000029b59
+ (id)permittedPlatforms;	// IMP=0x0000000000029b4c
- (void).cxx_destruct;	// IMP=0x0000000000029dd4
@property(copy, nonatomic) NSString *originator; // @synthesize originator=_originator;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000029cbc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000029b71

@end

