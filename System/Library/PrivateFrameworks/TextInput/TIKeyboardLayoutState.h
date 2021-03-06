//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class NSString;

@interface TIKeyboardLayoutState : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _hasCandidateKey;	// 8 = 0x8
    _Bool _hasAccentKey;	// 9 = 0x9
    _Bool _canMultitap;	// 10 = 0xa
    _Bool _isAlphabeticPlane;	// 11 = 0xb
    _Bool _isKanaPlane;	// 12 = 0xc
    _Bool _diacriticForwardCompose;	// 13 = 0xd
    NSString *_inputMode;	// 16 = 0x10
    NSString *_layoutTag;	// 24 = 0x18
    long long _userInterfaceIdiom;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000044d93
- (void).cxx_destruct;	// IMP=0x0000000000044d6b
@property(nonatomic) long long userInterfaceIdiom; // @synthesize userInterfaceIdiom=_userInterfaceIdiom;
@property(copy, nonatomic) NSString *layoutTag; // @synthesize layoutTag=_layoutTag;
@property(nonatomic) _Bool diacriticForwardCompose; // @synthesize diacriticForwardCompose=_diacriticForwardCompose;
@property(nonatomic) _Bool isKanaPlane; // @synthesize isKanaPlane=_isKanaPlane;
@property(nonatomic) _Bool isAlphabeticPlane; // @synthesize isAlphabeticPlane=_isAlphabeticPlane;
@property(nonatomic) _Bool canMultitap; // @synthesize canMultitap=_canMultitap;
@property(nonatomic) _Bool hasAccentKey; // @synthesize hasAccentKey=_hasAccentKey;
@property(nonatomic) _Bool hasCandidateKey; // @synthesize hasCandidateKey=_hasCandidateKey;
@property(copy, nonatomic) NSString *inputMode; // @synthesize inputMode=_inputMode;
@property(readonly, nonatomic) NSString *softwareLayout;
- (unsigned long long)hash;	// IMP=0x0000000000044b04
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000447c2
- (id)description;	// IMP=0x000000000004458a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004443b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000442b6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000044206

@end

