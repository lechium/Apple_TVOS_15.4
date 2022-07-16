//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BrailleTranslation/NSSecureCoding-Protocol.h>

@class NSString;

@interface BRLTTranslationParameters : NSObject <NSSecureCoding>
{
    _Bool _partial;	// 8 = 0x8
    _Bool _useTechnicalTableIfPossible;	// 9 = 0x9
    NSString *_language;	// 16 = 0x10
    unsigned long long _mode;	// 24 = 0x18
    struct _NSRange _textPositionsRange;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000002338
- (void).cxx_destruct;	// IMP=0x0000000000002374
@property(readonly, nonatomic) struct _NSRange textPositionsRange; // @synthesize textPositionsRange=_textPositionsRange;
@property(readonly, nonatomic) _Bool useTechnicalTableIfPossible; // @synthesize useTechnicalTableIfPossible=_useTechnicalTableIfPossible;
@property(readonly, nonatomic, getter=isPartial) _Bool partial; // @synthesize partial=_partial;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002205
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000020d0
- (id)description;	// IMP=0x0000000000001f2f
- (id)initWithLanguage:(id)arg1 mode:(unsigned long long)arg2 partial:(_Bool)arg3 useTechnicalTable:(_Bool)arg4 textPositionsRange:(struct _NSRange)arg5;	// IMP=0x0000000000001e90

@end

