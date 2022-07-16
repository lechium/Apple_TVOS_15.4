//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface WFTagFieldParameter
{
    long long _keyboardType;	// 8 = 0x8
    long long _autocapitalizationType;	// 16 = 0x10
    long long _autocorrectionType;	// 24 = 0x18
    long long _textAlignment;	// 32 = 0x20
    NSArray *_suggestedTags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000668b4
@property(readonly, nonatomic) NSArray *suggestedTags; // @synthesize suggestedTags=_suggestedTags;
@property(readonly, nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(readonly, nonatomic) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(readonly, nonatomic) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(readonly, nonatomic) long long keyboardType; // @synthesize keyboardType=_keyboardType;
- (_Bool)shouldAlignLabels;	// IMP=0x0000000000066845
- (id)initWithDefinition:(id)arg1;	// IMP=0x00000000000665e6
- (Class)singleStateClass;	// IMP=0x00000000000665d5

@end
