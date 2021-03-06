//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString;

@interface PPClientContactNameRecord
{
    NSString *_identifier;	// 8 = 0x8
    double _score;	// 16 = 0x10
    unsigned char _source;	// 24 = 0x18
    NSString *_sourceIdentifier;	// 32 = 0x20
    unsigned char _changeType;	// 40 = 0x28
    NSString *_firstName;	// 48 = 0x30
    NSString *_phoneticFirstName;	// 56 = 0x38
    NSString *_middleName;	// 64 = 0x40
    NSString *_phoneticMiddleName;	// 72 = 0x48
    NSString *_lastName;	// 80 = 0x50
    NSString *_phoneticLastName;	// 88 = 0x58
    NSString *_organizationName;	// 96 = 0x60
    NSString *_jobTitle;	// 104 = 0x68
    NSString *_nickname;	// 112 = 0x70
    NSDictionary *_relatedNames;	// 120 = 0x78
    NSArray *_streetNames;	// 128 = 0x80
    NSArray *_cityNames;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000004ff2a
- (id)cityNames;	// IMP=0x000000000004ff15
- (id)streetNames;	// IMP=0x000000000004ff00
- (id)relatedNames;	// IMP=0x000000000004feeb
- (id)nickname;	// IMP=0x000000000004fed6
- (id)jobTitle;	// IMP=0x000000000004fec1
- (id)organizationName;	// IMP=0x000000000004feac
- (id)phoneticLastName;	// IMP=0x000000000004fe97
- (id)lastName;	// IMP=0x000000000004fe82
- (id)phoneticMiddleName;	// IMP=0x000000000004fe6d
- (id)middleName;	// IMP=0x000000000004fe58
- (id)phoneticFirstName;	// IMP=0x000000000004fe43
- (id)firstName;	// IMP=0x000000000004fe2e
- (id)sourceIdentifier;	// IMP=0x000000000004fe19
- (unsigned char)changeType;	// IMP=0x000000000004fe08
- (unsigned char)source;	// IMP=0x000000000004fdf7
- (double)score;	// IMP=0x000000000004fde5
- (id)identifier;	// IMP=0x000000000004fdd0
- (id)initWithIdentifier:(id)arg1 score:(double)arg2 source:(unsigned char)arg3 sourceIdentifier:(id)arg4 changeType:(unsigned char)arg5 firstName:(id)arg6 phoneticFirstName:(id)arg7 middleName:(id)arg8 phoneticMiddleName:(id)arg9 lastName:(id)arg10 phoneticLastName:(id)arg11 organizationName:(id)arg12 jobTitle:(id)arg13 nickname:(id)arg14 relatedNames:(id)arg15 streetNames:(id)arg16 cityNames:(id)arg17;	// IMP=0x000000000004fb13

@end

