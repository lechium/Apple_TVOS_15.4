//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TIKeyboardCandidate;

@interface TITypologyRecordCandidateRejected
{
    TIKeyboardCandidate *_candidate;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000002362
- (void).cxx_destruct;	// IMP=0x000000000000234f
@property(retain, nonatomic) TIKeyboardCandidate *candidate; // @synthesize candidate=_candidate;
- (id)shortDescription;	// IMP=0x0000000000002295
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002218
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000217d
- (void)applyToStatistic:(id)arg1;	// IMP=0x000000000003b1ad

@end

