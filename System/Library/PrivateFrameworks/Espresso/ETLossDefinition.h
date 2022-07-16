//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ETLossDefinition : NSObject
{
    NSString *_inputName;	// 8 = 0x8
    NSString *_targetInputName;	// 16 = 0x10
    NSString *_lossOutputName;	// 24 = 0x18
    unsigned long long _mode;	// 32 = 0x20
    NSString *_outputName;	// 40 = 0x28
}

+ (id)BuiltInLoss:(id)arg1;	// IMP=0x0000000000589dcc
+ (id)L2LossWithInputName:(id)arg1 targetInputName:(id)arg2 lossOutputName:(id)arg3;	// IMP=0x0000000000589d32
+ (id)crossEntropyLossWithInputName:(id)arg1 targetInputName:(id)arg2 lossOutputName:(id)arg3;	// IMP=0x0000000000589c98
- (void).cxx_destruct;	// IMP=0x0000000000589c5a
@property(retain) NSString *outputName; // @synthesize outputName=_outputName;
@property(readonly) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly) NSString *lossOutputName; // @synthesize lossOutputName=_lossOutputName;
@property(readonly) NSString *targetInputName; // @synthesize targetInputName=_targetInputName;
@property(readonly) NSString *inputName; // @synthesize inputName=_inputName;
- (id)initWithMode:(unsigned long long)arg1 inputName:(id)arg2 targetName:(id)arg3 lossOutputName:(id)arg4;	// IMP=0x0000000000589b2e

@end
