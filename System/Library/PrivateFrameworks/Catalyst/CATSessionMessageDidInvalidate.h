//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

@interface CATSessionMessageDidInvalidate
{
    NSError *_error;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002202a
- (void).cxx_destruct;	// IMP=0x00000000000221c6
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000022109
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000022032
- (id)initWithError:(id)arg1;	// IMP=0x0000000000021fbc

@end

