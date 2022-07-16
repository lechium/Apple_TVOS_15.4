//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class INIntent, INIntentSlotDescription;
@protocol INIntentParameterOptionsProviding, INIntentResolutionResultDataProviding;

__attribute__((visibility("hidden")))
@interface INResolutionResultTransformationOperation : NSOperation
{
    _Bool _finished;	// 8 = 0x8
    _Bool _executing;	// 9 = 0x9
    id <INIntentResolutionResultDataProviding> _result;	// 16 = 0x10
    INIntent *_intent;	// 24 = 0x18
    INIntentSlotDescription *_intentSlotDescription;	// 32 = 0x20
    id <INIntentParameterOptionsProviding> _optionsProvider;	// 40 = 0x28
    CDUnknownBlockType _returnBlock;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001b4f35
@property(copy, nonatomic) CDUnknownBlockType returnBlock; // @synthesize returnBlock=_returnBlock;
@property(readonly, nonatomic) id <INIntentParameterOptionsProviding> optionsProvider; // @synthesize optionsProvider=_optionsProvider;
@property(readonly, nonatomic) INIntentSlotDescription *intentSlotDescription; // @synthesize intentSlotDescription=_intentSlotDescription;
@property(readonly, nonatomic) INIntent *intent; // @synthesize intent=_intent;
@property(readonly, nonatomic) id <INIntentResolutionResultDataProviding> result; // @synthesize result=_result;
- (_Bool)isExecuting;	// IMP=0x00000000001b4ebf
- (_Bool)isFinished;	// IMP=0x00000000001b4eaf
- (void)start;	// IMP=0x00000000001b4db8
- (id)initWithResult:(id)arg1 intent:(id)arg2 intentSlotDescription:(id)arg3 optionsProvider:(id)arg4;	// IMP=0x00000000001b4cc1

@end

