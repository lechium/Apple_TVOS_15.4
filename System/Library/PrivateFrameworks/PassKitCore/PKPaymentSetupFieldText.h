//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableCharacterSet, NSNumberFormatter, NSString;

@interface PKPaymentSetupFieldText
{
    NSNumberFormatter *_currencyFormatter;	// 104 = 0x68
    NSNumberFormatter *_amountFormatter;	// 112 = 0x70
    NSMutableCharacterSet *_allowedCharacters;	// 120 = 0x78
    _Bool _secureText;	// 128 = 0x80
    _Bool _secureVisibleText;	// 129 = 0x81
    _Bool _numeric;	// 130 = 0x82
    _Bool _luhnCheck;	// 131 = 0x83
    _Bool _keepPaddingCharactersForSubmission;	// 132 = 0x84
    unsigned long long _minLength;	// 136 = 0x88
    unsigned long long _maxLength;	// 144 = 0x90
    NSString *_currencyCode;	// 152 = 0x98
    NSString *_displayFormatPlaceholder;	// 160 = 0xa0
    NSArray *_paddingCharacters;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0000000000036fb3
@property(retain, nonatomic) NSArray *paddingCharacters; // @synthesize paddingCharacters=_paddingCharacters;
@property(copy, nonatomic) NSString *displayFormatPlaceholder; // @synthesize displayFormatPlaceholder=_displayFormatPlaceholder;
@property(nonatomic) _Bool keepPaddingCharactersForSubmission; // @synthesize keepPaddingCharactersForSubmission=_keepPaddingCharactersForSubmission;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(nonatomic, getter=useLuhnCheck) _Bool luhnCheck; // @synthesize luhnCheck=_luhnCheck;
@property(nonatomic, getter=isNumeric) _Bool numeric; // @synthesize numeric=_numeric;
@property(nonatomic, getter=isSecureVisibleText) _Bool secureVisibleText; // @synthesize secureVisibleText=_secureVisibleText;
@property(nonatomic, getter=isSecureText) _Bool secureText; // @synthesize secureText=_secureText;
@property(nonatomic) unsigned long long maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) unsigned long long minLength; // @synthesize minLength=_minLength;
- (unsigned long long)fieldType;	// IMP=0x0000000000036e6c
- (void)updateWithConfiguration:(id)arg1;	// IMP=0x0000000000036b75
@property(copy, nonatomic) NSMutableCharacterSet *allowedCharacters;
- (void)updateDisplayFormat:(id)arg1;	// IMP=0x0000000000036a8b
- (id)displayFormatPaddingCharacters;	// IMP=0x00000000000366ce
- (id)stringByApplyingDisplayFormat:(id)arg1;	// IMP=0x00000000000364ea
- (_Bool)hasDisplayFormat;	// IMP=0x0000000000036496
- (_Bool)submissionStringMeetsAllRequirements;	// IMP=0x000000000003607e
- (id)_submissionStringForValue:(id)arg1;	// IMP=0x0000000000035e00
- (id)displayString;	// IMP=0x0000000000035d74
- (void)setDefaultValue:(id)arg1;	// IMP=0x0000000000035cbb
- (void)setCurrentValue:(id)arg1;	// IMP=0x0000000000035bea
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;	// IMP=0x0000000000035b6a

@end

