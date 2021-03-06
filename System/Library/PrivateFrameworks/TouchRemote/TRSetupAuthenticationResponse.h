//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSSet;

@interface TRSetupAuthenticationResponse
{
    NSSet *_unauthenticatedAccountServices;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000c5e3
- (void).cxx_destruct;	// IMP=0x000000000000c8f6
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSSet *unauthenticatedAccountServices; // @synthesize unauthenticatedAccountServices=_unauthenticatedAccountServices;
- (id)description;	// IMP=0x000000000000c7b4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000c689
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000c5eb

@end

