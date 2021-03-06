//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLNamed-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface MDLMaterialPropertyNode : NSObject <MDLNamed>
{
    NSArray *_inputs;	// 8 = 0x8
    NSArray *_outputs;	// 16 = 0x10
    NSMutableArray *_inputNodes;	// 24 = 0x18
    CDUnknownBlockType _evaluationFunction;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002e1efa
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *outputs; // @synthesize outputs=_outputs;
@property(readonly, nonatomic) NSArray *inputs; // @synthesize inputs=_inputs;
@property(copy, nonatomic) CDUnknownBlockType evaluationFunction; // @synthesize evaluationFunction=_evaluationFunction;
- (id)initWithInputs:(id)arg1 outputs:(id)arg2 evaluationFunction:(CDUnknownBlockType)arg3;	// IMP=0x00000000002e15fc

@end

