//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextToSpeech/NSCopying-Protocol.h>
#import <TextToSpeech/NSSecureCoding-Protocol.h>

@class NSSet, NSString, NSUUID;

@interface TTSSubstitution : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _active;	// 8 = 0x8
    _Bool _ignoreCase;	// 9 = 0x9
    _Bool _appliesToAllApps;	// 10 = 0xa
    _Bool _isReplacementTextAllPunctuation;	// 11 = 0xb
    _Bool _isReplacementTextSurroundedByPunctuation;	// 12 = 0xc
    _Bool _isUserSubstitution;	// 13 = 0xd
    NSString *_originalString;	// 16 = 0x10
    NSString *_replacementString;	// 24 = 0x18
    NSString *_phonemes;	// 32 = 0x20
    NSSet *_languages;	// 40 = 0x28
    NSSet *_voiceIds;	// 48 = 0x30
    NSUUID *_uuid;	// 56 = 0x38
    NSSet *_bundleIdentifiers;	// 64 = 0x40
    struct _NSRange _replacementRange;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001789
- (void).cxx_destruct;	// IMP=0x000000000000259d
@property(nonatomic) _Bool isUserSubstitution; // @synthesize isUserSubstitution=_isUserSubstitution;
@property(readonly, nonatomic) _Bool isReplacementTextSurroundedByPunctuation; // @synthesize isReplacementTextSurroundedByPunctuation=_isReplacementTextSurroundedByPunctuation;
@property(readonly, nonatomic) _Bool isReplacementTextAllPunctuation; // @synthesize isReplacementTextAllPunctuation=_isReplacementTextAllPunctuation;
@property(copy, nonatomic) NSSet *bundleIdentifiers; // @synthesize bundleIdentifiers=_bundleIdentifiers;
@property(nonatomic) _Bool appliesToAllApps; // @synthesize appliesToAllApps=_appliesToAllApps;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) struct _NSRange replacementRange; // @synthesize replacementRange=_replacementRange;
@property(nonatomic) _Bool ignoreCase; // @synthesize ignoreCase=_ignoreCase;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(copy, nonatomic) NSSet *voiceIds; // @synthesize voiceIds=_voiceIds;
@property(copy, nonatomic) NSSet *languages; // @synthesize languages=_languages;
@property(copy, nonatomic) NSString *phonemes; // @synthesize phonemes=_phonemes;
@property(copy, nonatomic) NSString *replacementString; // @synthesize replacementString=_replacementString;
@property(copy, nonatomic) NSString *originalString; // @synthesize originalString=_originalString;
- (id)description;	// IMP=0x000000000000235a
- (unsigned long long)hash;	// IMP=0x0000000000002316
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000002269
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000001e9a
- (void)dealloc;	// IMP=0x0000000000001ddf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000001b6f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000001791
- (id)init;	// IMP=0x00000000000016d3

@end

