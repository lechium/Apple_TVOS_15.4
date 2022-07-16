//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TILiveConversionCandidate
{
    NSString *_candidate;	// 8 = 0x8
    _Bool _inlineCandidate;	// 16 = 0x10
    _Bool _partialCandidate;	// 17 = 0x11
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000033f90
+ (int)type;	// IMP=0x0000000000033f85
- (void).cxx_destruct;	// IMP=0x0000000000033f72
@property(nonatomic, getter=isPartialCandidate) _Bool partialCandidate; // @synthesize partialCandidate=_partialCandidate;
@property(nonatomic, getter=isInlineCandidate) _Bool inlineCandidate; // @synthesize inlineCandidate=_inlineCandidate;
- (id)candidate;	// IMP=0x0000000000033f21
- (void)encodeWithCandidateResultSetCoder:(id)arg1;	// IMP=0x0000000000033e76
- (id)initWithCandidateResultSetCoder:(id)arg1;	// IMP=0x0000000000033d9a
- (unsigned long long)hash;	// IMP=0x0000000000033d3d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000033bd9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000033b13
- (id)label;	// IMP=0x0000000000033ad5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000339d1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003393e
- (id)initWithSurface:(id)arg1 input:(id)arg2 candidate:(id)arg3 mecabraCandidatePointerValue:(id)arg4;	// IMP=0x0000000000033f98

@end

