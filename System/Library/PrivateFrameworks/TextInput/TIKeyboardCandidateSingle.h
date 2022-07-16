//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TIKeyboardCandidateSingle
{
    _Bool _extensionCandidate;	// 80 = 0x50
    NSString *_candidate;	// 88 = 0x58
    NSString *_input;	// 96 = 0x60
    long long _cursorMovement;	// 104 = 0x68
}

+ (int)type;	// IMP=0x000000000002b2a5
+ (id)secureCandidateForInput:(id)arg1 slotID:(unsigned int)arg2 customInfoType:(unsigned long long)arg3;	// IMP=0x000000000002b226
+ (id)secureCandidateForInput:(id)arg1 slotID:(unsigned int)arg2;	// IMP=0x000000000002b1b6
+ (id)candidateWithUnchangedInput:(id)arg1;	// IMP=0x000000000002b16d
+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 cursorMovement:(long long)arg3;	// IMP=0x000000000002b0d7
+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 customInfoType:(unsigned long long)arg3;	// IMP=0x000000000002b041
+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2;	// IMP=0x000000000002afd5
+ (id)candidateWithCandidate:(id)arg1 forInput:(id)arg2 extensionCandidate:(_Bool)arg3;	// IMP=0x000000000002af5a
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002af52
- (void).cxx_destruct;	// IMP=0x000000000002af21
@property(nonatomic) long long cursorMovement; // @synthesize cursorMovement=_cursorMovement;
@property(nonatomic, getter=isExtensionCandidate) _Bool extensionCandidate; // @synthesize extensionCandidate=_extensionCandidate;
@property(copy, nonatomic) NSString *input; // @synthesize input=_input;
@property(copy, nonatomic) NSString *candidate; // @synthesize candidate=_candidate;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;	// IMP=0x000000000002ad7d
- (id)initWithCandidateResultSetCoder:(id)arg1;	// IMP=0x000000000002ac2b
- (id)candidateByReplacingWithCandidate:(id)arg1 input:(id)arg2;	// IMP=0x000000000002ab9e
- (id)candidateByReplacingWithCandidate:(id)arg1;	// IMP=0x000000000002ab38
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002aa3e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002a8df
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002a821
- (_Bool)isAutocorrectionIgnoringCaseAndDiacriticsAndSupplementalItemPrefix;	// IMP=0x000000000002a710
- (_Bool)isAutocorrectionIgnoringCaseAndSupplementalItemPrefix;	// IMP=0x000000000002a662
- (id)initWithResponseCandidate:(id)arg1;	// IMP=0x000000000002a644
- (id)initWithUnchangedInput:(id)arg1;	// IMP=0x000000000002a62f
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 extensionCandidate:(_Bool)arg3;	// IMP=0x000000000002a54c
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2;	// IMP=0x000000000002a537
- (id)initWithCandidate:(id)arg1;	// IMP=0x000000000002a523

@end
