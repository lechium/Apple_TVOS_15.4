//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHPostProcessingManager;

@interface CHTextFieldTypeSwitchStep
{
    CHPostProcessingManager *_defaultProcessor;	// 8 = 0x8
    CHPostProcessingManager *_digitProcessor;	// 16 = 0x10
    CHPostProcessingManager *_phoneProcessor;	// 24 = 0x18
    CHPostProcessingManager *_usernameProcessor;	// 32 = 0x20
    CHPostProcessingManager *_emailProcessor;	// 40 = 0x28
    CHPostProcessingManager *_urlProcessor;	// 48 = 0x30
    CHPostProcessingManager *_asciiProcessor;	// 56 = 0x38
    CHPostProcessingManager *_equationProcessor;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000016f600
@property(retain, nonatomic) CHPostProcessingManager *equationProcessor; // @synthesize equationProcessor=_equationProcessor;
@property(retain, nonatomic) CHPostProcessingManager *asciiProcessor; // @synthesize asciiProcessor=_asciiProcessor;
@property(retain, nonatomic) CHPostProcessingManager *urlProcessor; // @synthesize urlProcessor=_urlProcessor;
@property(retain, nonatomic) CHPostProcessingManager *emailProcessor; // @synthesize emailProcessor=_emailProcessor;
@property(retain, nonatomic) CHPostProcessingManager *usernameProcessor; // @synthesize usernameProcessor=_usernameProcessor;
@property(retain, nonatomic) CHPostProcessingManager *phoneProcessor; // @synthesize phoneProcessor=_phoneProcessor;
@property(retain, nonatomic) CHPostProcessingManager *digitProcessor; // @synthesize digitProcessor=_digitProcessor;
@property(retain, nonatomic) CHPostProcessingManager *defaultProcessor; // @synthesize defaultProcessor=_defaultProcessor;
- (id)process:(id)arg1 options:(id)arg2;	// IMP=0x000000000016f110
- (id)process:(id)arg1 withProcessor:(id)arg2 options:(id)arg3;	// IMP=0x000000000016f060
- (id)initProcessorDefault:(id)arg1 processorDigits:(id)arg2 processorPhone:(id)arg3 processorUsername:(id)arg4 processorEmail:(id)arg5 processorURL:(id)arg6 processorASCII:(id)arg7 processorEquation:(id)arg8;	// IMP=0x000000000016ee80

@end
