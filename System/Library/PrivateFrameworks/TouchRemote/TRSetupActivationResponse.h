//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

@interface TRSetupActivationResponse
{
    _Bool _activated;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000022b89
- (void).cxx_destruct;	// IMP=0x0000000000022e17
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool activated; // @synthesize activated=_activated;
- (id)description;	// IMP=0x0000000000022ceb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000022c2a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000022b91

@end

