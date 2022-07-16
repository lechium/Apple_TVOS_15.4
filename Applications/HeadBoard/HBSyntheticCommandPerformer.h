//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface HBSyntheticCommandPerformer : NSObject
{
    _Bool _evaluating;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
    NSMutableArray *_commandQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000007fabd
@property(nonatomic, getter=isEvaluating) _Bool evaluating; // @synthesize evaluating=_evaluating;
@property(retain, nonatomic) NSMutableArray *commandQueue; // @synthesize commandQueue=_commandQueue;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)_completeCommandProcessing;	// IMP=0x001000000007fa11
- (void)_continueToNextCommand;	// IMP=0x001000000007f979
- (void)_handleCommand:(id)arg1;	// IMP=0x001000000007f8ae
- (void)_processCommands;	// IMP=0x001000000007f827
- (void)evaluateCommands:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007f61a

@end

