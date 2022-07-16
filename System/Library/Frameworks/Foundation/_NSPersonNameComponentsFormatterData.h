//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@class NPNameParser, NSLocale;

__attribute__((visibility("hidden")))
@interface _NSPersonNameComponentsFormatterData : NSObject <NSCopying, NSSecureCoding>
{
    long long _style;	// 8 = 0x8
    _Bool _phonetic;	// 16 = 0x10
    _Bool _forceFamilyNameFirst;	// 17 = 0x11
    _Bool _forceGivenNameFirst;	// 18 = 0x12
    _Bool _ignoresFallbacks;	// 19 = 0x13
    NSLocale *_locale;	// 24 = 0x18
    NPNameParser *_nameParser;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000021c2c5
@property(copy) NSLocale *locale; // @synthesize locale=_locale;
@property _Bool ignoresFallbacks; // @synthesize ignoresFallbacks=_ignoresFallbacks;
@property _Bool forceGivenNameFirst; // @synthesize forceGivenNameFirst=_forceGivenNameFirst;
@property _Bool forceFamilyNameFirst; // @synthesize forceFamilyNameFirst=_forceFamilyNameFirst;
@property _Bool phonetic; // @synthesize phonetic=_phonetic;
@property long long style; // @synthesize style=_style;
- (void)dealloc;	// IMP=0x000000000021c545
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000021c3c2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000021c2cd
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000021c161
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000021c0f8

@end
