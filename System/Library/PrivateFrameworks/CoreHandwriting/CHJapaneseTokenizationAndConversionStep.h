//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHMecabraWrapper, CHStringOVSChecker;

@interface CHJapaneseTokenizationAndConversionStep
{
    _Bool _promoteKanaConversion;	// 8 = 0x8
    CHMecabraWrapper *_mecabraWrapper;	// 16 = 0x10
    struct __MecabraContext *_mecabraContextRef;	// 24 = 0x18
    void *_languageModel;	// 32 = 0x20
    CHStringOVSChecker *_ovsStringChecker;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000018e5a0
@property(retain, nonatomic) CHStringOVSChecker *ovsStringChecker; // @synthesize ovsStringChecker=_ovsStringChecker;
@property(readonly, nonatomic) _Bool promoteKanaConversion; // @synthesize promoteKanaConversion=_promoteKanaConversion;
@property(readonly, nonatomic) void *languageModel; // @synthesize languageModel=_languageModel;
@property(readonly, nonatomic) struct __MecabraContext *mecabraContextRef; // @synthesize mecabraContextRef=_mecabraContextRef;
@property(readonly, nonatomic) CHMecabraWrapper *mecabraWrapper; // @synthesize mecabraWrapper=_mecabraWrapper;
- (void)dealloc;	// IMP=0x000000000018e430
- (id)process:(id)arg1 options:(id)arg2;	// IMP=0x000000000018b9c0
- (id)_extendedConversionCandidates:(id)arg1 withPhraseCandidates:(id)arg2;	// IMP=0x000000000018b6a0
- (id)_updatedTokenFromToken:(id)arg1 withString:(id)arg2;	// IMP=0x000000000018b3e0
- (id)initWithMecabra:(id)arg1 languageModel:(void *)arg2 ovsStringChecker:(id)arg3 promoteKanaConversion:(_Bool)arg4;	// IMP=0x000000000018b2d0

@end
