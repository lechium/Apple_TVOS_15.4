//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol SFCardSection;

@interface SFCardSectionFeedback
{
    id <SFCardSection> _cardSection;	// 24 = 0x18
    NSString *_cardSectionId;	// 32 = 0x20
    NSString *_resultId;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001b6fda
- (void).cxx_destruct;	// IMP=0x00000000001b6f98
@property(copy, nonatomic) NSString *resultId; // @synthesize resultId=_resultId;
@property(copy, nonatomic) NSString *cardSectionId; // @synthesize cardSectionId=_cardSectionId;
@property(retain, nonatomic) id <SFCardSection> cardSection; // @synthesize cardSection=_cardSection;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001b6e75
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001b6a18
- (id)initWithCardSection:(id)arg1;	// IMP=0x00000000001b694a

@end

