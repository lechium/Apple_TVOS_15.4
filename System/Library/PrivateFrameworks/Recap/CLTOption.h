//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSNumber, NSString;

@interface CLTOption : NSObject
{
    _Bool _allowsNegativeNumbersAsArguments;	// 8 = 0x8
    int _occurencies;	// 12 = 0xc
    int _maxAllowedOccurencies;	// 16 = 0x10
    int _minConsumedArguments;	// 20 = 0x14
    int _maxConsumedArguments;	// 24 = 0x18
    NSArray *_shorthands;	// 32 = 0x20
    NSArray *_longforms;	// 40 = 0x28
    NSString *_lefthandHelp;	// 48 = 0x30
    CDUnknownBlockType _triggerAction;	// 56 = 0x38
    NSString *_righthandHelp;	// 64 = 0x40
    NSString *_argumentHelp;	// 72 = 0x48
    NSMutableArray *_consumedArguments;	// 80 = 0x50
    NSArray *_defaultArguments;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000001d6e
@property(retain, nonatomic) NSArray *defaultArguments; // @synthesize defaultArguments=_defaultArguments;
@property(retain, nonatomic) NSMutableArray *consumedArguments; // @synthesize consumedArguments=_consumedArguments;
@property(nonatomic) _Bool allowsNegativeNumbersAsArguments; // @synthesize allowsNegativeNumbersAsArguments=_allowsNegativeNumbersAsArguments;
@property(nonatomic) int maxConsumedArguments; // @synthesize maxConsumedArguments=_maxConsumedArguments;
@property(nonatomic) int minConsumedArguments; // @synthesize minConsumedArguments=_minConsumedArguments;
@property(nonatomic) int maxAllowedOccurencies; // @synthesize maxAllowedOccurencies=_maxAllowedOccurencies;
@property(nonatomic) int occurencies; // @synthesize occurencies=_occurencies;
@property(retain, nonatomic) NSString *argumentHelp; // @synthesize argumentHelp=_argumentHelp;
@property(retain, nonatomic) NSString *righthandHelp; // @synthesize righthandHelp=_righthandHelp;
@property(copy, nonatomic) CDUnknownBlockType triggerAction; // @synthesize triggerAction=_triggerAction;
@property(readonly, nonatomic) NSArray *longforms; // @synthesize longforms=_longforms;
@property(readonly, nonatomic) NSArray *shorthands; // @synthesize shorthands=_shorthands;
@property(readonly, nonatomic) NSNumber *numberValue;
@property(readonly, nonatomic) NSArray *consumedOrDefaultArguments;
- (_Bool)consumeArgument:(id)arg1;	// IMP=0x00000000000019dd
@property(readonly, nonatomic) NSString *lefthandHelp; // @synthesize lefthandHelp=_lefthandHelp;
- (void)addLongform:(id)arg1;	// IMP=0x00000000000014d2
- (void)addShorthand:(id)arg1;	// IMP=0x00000000000014bc
- (id)init;	// IMP=0x0000000000001430

@end

