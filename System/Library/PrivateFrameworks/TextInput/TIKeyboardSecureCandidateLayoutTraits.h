//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class TIKeyboardSecureCandidateTextTraits;

@interface TIKeyboardSecureCandidateLayoutTraits : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _forceSingleLineLayout;	// 8 = 0x8
    unsigned int _headerInliningBehavior;	// 12 = 0xc
    TIKeyboardSecureCandidateTextTraits *_headerTraitsInOnlyLine;	// 16 = 0x10
    TIKeyboardSecureCandidateTextTraits *_headerTraitsInFirstLine;	// 24 = 0x18
    TIKeyboardSecureCandidateTextTraits *_inputTraitsInOnlyLine;	// 32 = 0x20
    TIKeyboardSecureCandidateTextTraits *_inputTraitsInFirstAndSecondLines;	// 40 = 0x28
    TIKeyboardSecureCandidateTextTraits *_inputTraitsInSecondLine;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000062ff1
- (void).cxx_destruct;	// IMP=0x0000000000062fa8
@property(retain, nonatomic) TIKeyboardSecureCandidateTextTraits *inputTraitsInSecondLine; // @synthesize inputTraitsInSecondLine=_inputTraitsInSecondLine;
@property(retain, nonatomic) TIKeyboardSecureCandidateTextTraits *inputTraitsInFirstAndSecondLines; // @synthesize inputTraitsInFirstAndSecondLines=_inputTraitsInFirstAndSecondLines;
@property(retain, nonatomic) TIKeyboardSecureCandidateTextTraits *inputTraitsInOnlyLine; // @synthesize inputTraitsInOnlyLine=_inputTraitsInOnlyLine;
@property(retain, nonatomic) TIKeyboardSecureCandidateTextTraits *headerTraitsInFirstLine; // @synthesize headerTraitsInFirstLine=_headerTraitsInFirstLine;
@property(retain, nonatomic) TIKeyboardSecureCandidateTextTraits *headerTraitsInOnlyLine; // @synthesize headerTraitsInOnlyLine=_headerTraitsInOnlyLine;
@property(nonatomic) unsigned int headerInliningBehavior; // @synthesize headerInliningBehavior=_headerInliningBehavior;
@property(nonatomic) _Bool forceSingleLineLayout; // @synthesize forceSingleLineLayout=_forceSingleLineLayout;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000062d20
- (id)description;	// IMP=0x0000000000062b68
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000062a66
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000628cb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000627e4

@end

