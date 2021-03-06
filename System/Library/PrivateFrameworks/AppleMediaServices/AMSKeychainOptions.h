//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSCopying-Protocol.h>

@class NSString;

@interface AMSKeychainOptions : NSObject <NSCopying>
{
    _Bool _regenerateKeys;	// 8 = 0x8
    _Bool _authenticationFallbackVisible;	// 9 = 0x9
    _Bool _displayAuthenticationReason;	// 10 = 0xa
    NSString *_clientCertLabel;	// 16 = 0x10
    NSString *_intermediateCertLabel;	// 24 = 0x18
    NSString *_label;	// 32 = 0x20
    unsigned long long _purpose;	// 40 = 0x28
    unsigned long long _style;	// 48 = 0x30
    NSString *_prompt;	// 56 = 0x38
}

+ (unsigned long long)preferredAttestationStyle;	// IMP=0x000000000015e454
- (void).cxx_destruct;	// IMP=0x000000000015ed15
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(nonatomic) _Bool displayAuthenticationReason; // @synthesize displayAuthenticationReason=_displayAuthenticationReason;
@property(nonatomic) _Bool authenticationFallbackVisible; // @synthesize authenticationFallbackVisible=_authenticationFallbackVisible;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) _Bool regenerateKeys; // @synthesize regenerateKeys=_regenerateKeys;
@property(nonatomic) unsigned long long purpose; // @synthesize purpose=_purpose;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) NSString *intermediateCertLabel; // @synthesize intermediateCertLabel=_intermediateCertLabel;
@property(copy, nonatomic) NSString *clientCertLabel; // @synthesize clientCertLabel=_clientCertLabel;
- (_Bool)_compareString:(id)arg1 withString:(id)arg2;	// IMP=0x000000000015ebda
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015eb50
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015e833
- (id)description;	// IMP=0x000000000015e45f
- (id)optionsDictionary;	// IMP=0x000000000015e19c
- (id)initWithOptionsDictionary:(id)arg1;	// IMP=0x000000000015deff
- (id)init;	// IMP=0x000000000015deeb

@end

