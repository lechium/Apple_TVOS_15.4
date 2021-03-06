//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TIKeyboardInputManager_mul
{
    _Bool _isSuspended;	// 40 = 0x28
}

- (id)resourceInputModes;	// IMP=0x000000000004d9ca
- (void)updateLanguagePriors;	// IMP=0x000000000004d835
- (void)didUpdateInputModeProbabilities:(id)arg1;	// IMP=0x000000000004d814
- (void)didUpdateInputModes:(id)arg1;	// IMP=0x000000000004d6d7
- (void)loadDictionaries;	// IMP=0x000000000004d31c
- (_Bool)shouldUpdateDictionary;	// IMP=0x000000000004d222
- (_Bool)updateLanguageModelForKeyboardState;	// IMP=0x000000000004c4fc
- (void *)languageModelContainer;	// IMP=0x000000000004c4e4
- (vector_ce1a2964)lexiconInformationVector;	// IMP=0x000000000004c415
- (CDStruct_69b8fb94)lexiconInfoForInputMode:(id)arg1;	// IMP=0x000000000004c0eb
- (float)weightForInputMode:(id)arg1;	// IMP=0x000000000004c06d
- (unsigned int)lexiconIDForInputMode:(id)arg1;	// IMP=0x000000000004bfec
- (void)enumerateInputModesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004be59
- (id)keyboardConfiguration;	// IMP=0x000000000004bd72
- (void)suspend;	// IMP=0x000000000004bd36
- (void)resume;	// IMP=0x000000000004bcd6

@end

