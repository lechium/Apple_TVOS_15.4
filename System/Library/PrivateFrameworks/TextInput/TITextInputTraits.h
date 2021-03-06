//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class NSString;

@interface TITextInputTraits : NSObject <NSCopying, NSSecureCoding>
{
    union {
        long long integerValue;
        struct {
            unsigned int autocapitalizationType:2;
            unsigned int autocorrectionType:2;
            unsigned int spellCheckingType:2;
            unsigned int keyboardType:4;
            unsigned int keyboardAppearance:2;
            unsigned int returnKeyType:4;
            unsigned int textScriptType:4;
            unsigned int enablesReturnKeyAutomatically:1;
            unsigned int secureTextEntry:1;
            unsigned int smartInsertDeleteEnabled:1;
            unsigned int smartQuotesEnabled:1;
            unsigned int smartDashesEnabled:1;
            unsigned int disablePrediction:1;
            unsigned int smartInsertDeleteType:2;
            unsigned int smartQuotesType:2;
            unsigned int smartDashesType:2;
        } fields;
    } _mask;	// 8 = 0x8
    NSString *_textContentType;	// 16 = 0x10
    NSString *_recentInputIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000074ee6
- (void).cxx_destruct;	// IMP=0x0000000000074ebe
@property(copy, nonatomic) NSString *recentInputIdentifier; // @synthesize recentInputIdentifier=_recentInputIdentifier;
@property(copy, nonatomic) NSString *textContentType; // @synthesize textContentType=_textContentType;
- (id)description;	// IMP=0x0000000000074a51
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000746aa
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000074627
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000744fb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007447d
@property(nonatomic) _Bool disablePrediction;
@property(nonatomic) unsigned long long smartDashesType;
@property(nonatomic) unsigned long long smartQuotesType;
@property(nonatomic) unsigned long long smartInsertDeleteType;
@property(nonatomic) _Bool smartDashesEnabled;
@property(nonatomic) _Bool smartQuotesEnabled;
@property(nonatomic) _Bool smartInsertDeleteEnabled;
@property(nonatomic) unsigned long long textScriptType;
@property(nonatomic) _Bool secureTextEntry;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(nonatomic) unsigned long long returnKeyType;
@property(nonatomic) unsigned long long keyboardAppearance;
@property(nonatomic) unsigned long long keyboardType;
@property(nonatomic) unsigned long long spellCheckingType;
@property(nonatomic) unsigned long long autocorrectionType;
@property(nonatomic) unsigned long long autocapitalizationType;

@end

