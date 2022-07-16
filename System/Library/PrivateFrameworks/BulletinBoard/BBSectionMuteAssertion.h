//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface BBSectionMuteAssertion
{
    NSDate *_expirationDate;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000687c2
+ (id)sectionMuteAssertionUntilDate:(id)arg1;	// IMP=0x0000000000068544
- (void).cxx_destruct;	// IMP=0x00000000000688f3
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000068847
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000687ca
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000687b7
- (id)description;	// IMP=0x000000000006876f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000686db
- (unsigned long long)hash;	// IMP=0x00000000000686be
- (void)getNextExpirationDate:(id *)arg1 wasPurged:(_Bool *)arg2;	// IMP=0x0000000000068672
- (_Bool)isActiveForThreadIdentifier:(id)arg1;	// IMP=0x000000000006860b
- (id)_initWithExpirationDate:(id)arg1;	// IMP=0x0000000000068591

@end
