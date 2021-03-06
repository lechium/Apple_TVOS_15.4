//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SFLookupHintRelevancyFeedback
{
    _Bool _discarded;	// 24 = 0x18
    NSString *_context;	// 32 = 0x20
    NSString *_domain;	// 40 = 0x28
    unsigned long long _grade;	// 48 = 0x30
    struct _NSRange _hintRange;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001cb41
- (void).cxx_destruct;	// IMP=0x000000000001cb10
@property(nonatomic) unsigned long long grade; // @synthesize grade=_grade;
@property(nonatomic) _Bool discarded; // @synthesize discarded=_discarded;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) struct _NSRange hintRange; // @synthesize hintRange=_hintRange;
@property(copy, nonatomic) NSString *context; // @synthesize context=_context;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001c936
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001c7bb
- (id)initWithContext:(id)arg1 hintRange:(struct _NSRange)arg2 domain:(id)arg3 discarded:(_Bool)arg4 grade:(unsigned long long)arg5;	// IMP=0x000000000001c6dc

@end

