//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface _PASArgParser : NSObject
{
    NSMutableArray *_registeredSubcommands;	// 8 = 0x8
    NSMutableArray *_registeredOptions;	// 16 = 0x10
    NSMutableSet *_requiredOptions;	// 24 = 0x18
    CDUnknownBlockType _handler;	// 32 = 0x20
}

+ (id)simpleParserWithHelpGenerator:(CDUnknownBlockType)arg1 version:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002c357
+ (id)parserWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002c30e
+ (id)enumValueForArgument:(id)arg1 withMapping:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002c0d6
+ (id)numberValueForArgument:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002bea4
+ (id)boolValueForArgument:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002bbbe
- (void).cxx_destruct;	// IMP=0x000000000002bb80
@property(readonly, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSMutableSet *requiredOptions; // @synthesize requiredOptions=_requiredOptions;
@property(readonly, nonatomic) NSMutableArray *registeredOptions; // @synthesize registeredOptions=_registeredOptions;
@property(readonly, nonatomic) NSMutableArray *registeredSubcommands; // @synthesize registeredSubcommands=_registeredSubcommands;
- (id)_argumentParseTemplate:(id)arg1 longArgs:(struct option **)arg2;	// IMP=0x000000000002b791
- (int)invokeHandlerWithArguments:(const char **)arg1 count:(int)arg2 parseErrorCode:(int)arg3 error:(id *)arg4;	// IMP=0x000000000002a84b
- (id)naiveUsageHelpWithPositionalArgString:(id)arg1;	// IMP=0x000000000002a695
- (id)subcommandLongHelp;	// IMP=0x000000000002a479
- (id)optionLongHelp;	// IMP=0x000000000002a46b
- (id)optionShortHelp;	// IMP=0x000000000002a45d
- (void)registerOption:(id)arg1;	// IMP=0x000000000002a3cc
- (void)registerSubcommand:(id)arg1;	// IMP=0x000000000002a3b6
- (id)description;	// IMP=0x000000000002a0e1
- (id)initWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029fac

@end
