//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion : NSObject
{
    NSString *_prompt;	// 8 = 0x8
    NSString *_actionIdentifier;	// 16 = 0x10
    NSString *_parameterKey;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000024e955
@property(readonly, copy, nonatomic) NSString *parameterKey; // @synthesize parameterKey=_parameterKey;
@property(readonly, copy, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(readonly, copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
- (id)initWithPrompt:(id)arg1 actionIdentifier:(id)arg2 parameterKey:(id)arg3;	// IMP=0x000000000024e842

@end
