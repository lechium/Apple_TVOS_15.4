//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface SCRCArgumentSubcommand : NSObject
{
    NSString *_subcommandName;	// 8 = 0x8
    NSMutableArray *__optionMutableArray;	// 16 = 0x10
}

+ (id)subcommandWithName:(id)arg1;	// IMP=0x000000000000401f
- (void).cxx_destruct;	// IMP=0x0000000000004784
@property(retain, nonatomic) NSMutableArray *_optionMutableArray; // @synthesize _optionMutableArray=__optionMutableArray;
@property(copy, nonatomic) NSString *subcommandName; // @synthesize subcommandName=_subcommandName;
- (id)description;	// IMP=0x0000000000004538
- (void)showHelp;	// IMP=0x000000000000452e
- (void)stopDueToSigTerm;	// IMP=0x000000000000451c
- (void)stop;	// IMP=0x0000000000004516
- (int)run;	// IMP=0x000000000000450e
- (void)addOption:(BOOL)arg1 argument:(id)arg2 target:(id)arg3 action:(SEL)arg4 argumentDescription:(id)arg5 required:(_Bool)arg6;	// IMP=0x0000000000004354
- (id)formattedHelpFooter;	// IMP=0x000000000000434c
- (id)formattedHelpHeader;	// IMP=0x0000000000004344
- (long long)compare:(id)arg1;	// IMP=0x00000000000042ae
- (unsigned long long)hash;	// IMP=0x000000000000426a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000418f
@property(readonly, copy, nonatomic) NSArray *optionArray;
- (id)init;	// IMP=0x00000000000040f1
- (id)initWithName:(id)arg1;	// IMP=0x000000000000406c

@end

