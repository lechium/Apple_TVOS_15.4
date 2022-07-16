//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TIMecabraFacemarkCandidate
{
    NSString *_category;	// 72 = 0x48
}

+ (int)type;	// IMP=0x000000000004e62e
+ (id)candidateWithCandidate:(id)arg1 category:(id)arg2 input:(id)arg3 mecabraCandidatePointerValue:(id)arg4;	// IMP=0x000000000004e584
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004e57c
- (void).cxx_destruct;	// IMP=0x000000000004e569
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;	// IMP=0x000000000004e4b3
- (id)initWithCandidateResultSetCoder:(id)arg1;	// IMP=0x000000000004e408
- (id)description;	// IMP=0x000000000004e331
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004e226
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004e1b2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004e0f1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004e07a
- (_Bool)isFacemarkCandidate;	// IMP=0x000000000004e072
- (id)initWithCandidate:(id)arg1 category:(id)arg2 input:(id)arg3 mecabraCandidatePointerValue:(id)arg4;	// IMP=0x000000000004dfec

@end
