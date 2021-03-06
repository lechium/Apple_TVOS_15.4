//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CTODAPlan
{
    NSString *_mcc;	// 8 = 0x8
    NSString *_mnc;	// 16 = 0x10
    NSString *_gid1;	// 24 = 0x18
    NSString *_gid2;	// 32 = 0x20
    NSString *_setupURL;	// 40 = 0x28
    NSString *_handoffToken;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000087fa5
- (void).cxx_destruct;	// IMP=0x00000000000882f1
@property(readonly, nonatomic) NSString *handoffToken; // @synthesize handoffToken=_handoffToken;
@property(readonly, nonatomic) NSString *setupURL; // @synthesize setupURL=_setupURL;
@property(readonly, nonatomic) NSString *gid2; // @synthesize gid2=_gid2;
@property(readonly, nonatomic) NSString *gid1; // @synthesize gid1=_gid1;
@property(readonly, nonatomic) NSString *mnc; // @synthesize mnc=_mnc;
@property(readonly, nonatomic) NSString *mcc; // @synthesize mcc=_mcc;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000088180
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000087fad
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000087a50
- (id)description;	// IMP=0x00000000000878f7
- (id)initWithSetupUrl:(id)arg1 mcc:(id)arg2 mnc:(id)arg3 gid1:(id)arg4 gid2:(id)arg5 handoffToken:(id)arg6;	// IMP=0x00000000000877bf

@end

