//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreML/MLUpdatable-Protocol.h>

@class MLParameterContainer, MLUpdateProgressHandlers, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MLTreeEnsembleXGBoostUpdateEngine <MLUpdatable>
{
    _Bool _continueWithUpdate;	// 8 = 0x8
    _Bool _personalization;	// 9 = 0x9
    MLUpdateProgressHandlers *_progressHandlers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_progressHandlersDispatchQueue;	// 24 = 0x18
    MLParameterContainer *_parameterContainer;	// 32 = 0x20
    unsigned long long _numDimensions;	// 40 = 0x28
    shared_ptr_0841df90 _mmappedModel;	// 48 = 0x30
    vector_bfe5b09a _classesByString;	// 64 = 0x40
    vector_1ee95920 _classesByInt;	// 88 = 0x58
    vector_ce5fcef0 _cachedModel;	// 112 = 0x70
}

+ (id)loadModelFromCompiledArchive:(void *)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000149f9e
- (id).cxx_construct;	// IMP=0x0000000000149c44
- (void).cxx_destruct;	// IMP=0x0000000000149bb0
@property(nonatomic) vector_ce5fcef0 cachedModel; // @synthesize cachedModel=_cachedModel;
@property(nonatomic) shared_ptr_0841df90 mmappedModel; // @synthesize mmappedModel=_mmappedModel;
@property(nonatomic) unsigned long long numDimensions; // @synthesize numDimensions=_numDimensions;
@property(nonatomic) vector_1ee95920 classesByInt; // @synthesize classesByInt=_classesByInt;
@property(nonatomic) vector_bfe5b09a classesByString; // @synthesize classesByString=_classesByString;
@property(retain, nonatomic) MLParameterContainer *parameterContainer; // @synthesize parameterContainer=_parameterContainer;
@property(nonatomic) _Bool personalization; // @synthesize personalization=_personalization;
@property(nonatomic) _Bool continueWithUpdate; // @synthesize continueWithUpdate=_continueWithUpdate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *progressHandlersDispatchQueue; // @synthesize progressHandlersDispatchQueue=_progressHandlersDispatchQueue;
@property(retain, nonatomic) MLUpdateProgressHandlers *progressHandlers; // @synthesize progressHandlers=_progressHandlers;
- (_Bool)writeToURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000149514
- (void)resumeUpdateWithParameters:(id)arg1;	// IMP=0x00000000001494fd
- (void)cancelUpdate;	// IMP=0x00000000001494e9
- (void)resumeUpdate;	// IMP=0x00000000001494d2
- (id)parameterValueForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001493a2
- (id)parameterValueForKey:(id)arg1;	// IMP=0x000000000014937e
- (_Bool)setBoosterParameters:(void *)arg1 error:(id *)arg2;	// IMP=0x0000000000148cc3
- (void)updateModelWithData:(id)arg1;	// IMP=0x00000000001482c3
- (void)setUpdateProgressHandlers:(id)arg1 dispatchQueue:(id)arg2;	// IMP=0x0000000000148239
- (id)updateParameters;	// IMP=0x00000000001481d3
- (id)loadParameterDescriptionsAndContainerFromConfiguration:(id)arg1 modelDescription:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000146e61
- (id)initWithCompiledArchive:(void *)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000146775

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

