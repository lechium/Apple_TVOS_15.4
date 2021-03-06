//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

@interface VMUOptionParser : NSObject
{
    NSString *_purposeDescription;	// 8 = 0x8
    NSString *_syntaxDescription;	// 16 = 0x10
    NSString *_discussionDescription;	// 24 = 0x18
    NSMutableArray *_optionDescriptions;	// 32 = 0x20
    NSMutableArray *_appleInternalOptionDescriptions;	// 40 = 0x28
    NSMutableDictionary *_optionBlockByString;	// 48 = 0x30
    struct __CFArray *_longOptStructs;	// 56 = 0x38
    NSMutableString *_shortOpts;	// 64 = 0x40
    unsigned long long _spacing;	// 72 = 0x48
    _Bool _singleHyphenLongNames;	// 80 = 0x50
    _Bool _parametersShowAsAssignment;	// 81 = 0x51
}

- (void).cxx_destruct;	// IMP=0x0000000000027638
@property(nonatomic) _Bool parametersShowAsAssignment; // @synthesize parametersShowAsAssignment=_parametersShowAsAssignment;
@property(nonatomic) _Bool singleHyphenLongNames; // @synthesize singleHyphenLongNames=_singleHyphenLongNames;
@property(copy, nonatomic) NSString *discussion; // @synthesize discussion=_discussionDescription;
@property(copy, nonatomic) NSString *syntaxDescription; // @synthesize syntaxDescription=_syntaxDescription;
@property(copy, nonatomic) NSString *purposeDescription; // @synthesize purposeDescription=_purposeDescription;
- (void)printOptionDescriptions:(id)arg1;	// IMP=0x0000000000027316
- (void)usage:(id)arg1;	// IMP=0x00000000000272ff
- (void)usage:(id)arg1 shouldExit:(_Bool)arg2;	// IMP=0x00000000000270f4
- (id)parseArguments:(char **)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026c1b
- (id)parseArgumentsArray:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026a2f
@property(readonly) int optind;
- (void)registerOptionWithLongName:(id)arg1 shortName:(id)arg2 argumentKind:(int)arg3 argumentName:(id)arg4 optionDescription:(id)arg5 flags:(unsigned long long)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000026646
- (void)registerOptionWithLongName:(id)arg1 shortName:(id)arg2 argumentKind:(int)arg3 argumentName:(id)arg4 optionDescription:(id)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000026623
- (void)dealloc;	// IMP=0x00000000000265dc
- (id)init;	// IMP=0x00000000000264d4

@end

