//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSArray, SGContact, SGMatchedDetails, SGObject, SGRecordId;

@interface SGContactMatch : NSObject <NSCopying, NSSecureCoding>
{
    SGRecordId *_matchingFieldRecordId;	// 8 = 0x8
    long long _matchingFieldType;	// 16 = 0x10
    SGContact *_contact;	// 24 = 0x18
    NSArray *_matchTokens;	// 32 = 0x20
    SGMatchedDetails *_matchedDetails;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004829b
- (void).cxx_destruct;	// IMP=0x000000000004825d
@property(readonly, nonatomic) SGMatchedDetails *matchedDetails; // @synthesize matchedDetails=_matchedDetails;
@property(readonly, nonatomic) NSArray *matchTokens; // @synthesize matchTokens=_matchTokens;
@property(readonly, nonatomic) long long matchingFieldType; // @synthesize matchingFieldType=_matchingFieldType;
@property(readonly, nonatomic) SGContact *contact; // @synthesize contact=_contact;
- (id)description;	// IMP=0x00000000000481e3
- (unsigned long long)hash;	// IMP=0x000000000004819c
@property(readonly, nonatomic) SGObject *matchingField;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000047e56
- (_Bool)isEqualToContactMatch:(id)arg1;	// IMP=0x0000000000047d32
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000047c85
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000047a29
- (id)initWithContact:(id)arg1 matchingRecordId:(id)arg2 matchType:(long long)arg3 matchTokens:(id)arg4;	// IMP=0x00000000000478ab
- (id)initWithContact:(id)arg1 matchingPhoneRecordId:(id)arg2 matchTokens:(id)arg3;	// IMP=0x0000000000047731
- (id)initWithContact:(id)arg1 matchingEmailAddressRecordId:(id)arg2 matchTokens:(id)arg3;	// IMP=0x00000000000475b7
- (id)initWithContact:(id)arg1 matchingNameRecordId:(id)arg2 matchTokens:(id)arg3;	// IMP=0x000000000004743d
- (id)initWithContact:(id)arg1 matchingNameRecordId:(id)arg2;	// IMP=0x0000000000047428
- (id)initWithContact:(id)arg1 matchingEmailAddressRecordId:(id)arg2;	// IMP=0x0000000000047413
- (id)initWithContact:(id)arg1 matchingFieldRecordId:(id)arg2 matchTokens:(id)arg3;	// IMP=0x0000000000047217
- (id)initWithContact:(id)arg1 matchTokens:(id)arg2 matchInfo:(id)arg3;	// IMP=0x0000000000046f77
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000046f6c

@end

