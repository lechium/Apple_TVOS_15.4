//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface TILanguageModelOfflineLearningHandleFavonius
{
    RefPtr_9bddf3b2 _dictionaries;	// 40 = 0x28
    shared_ptr_e9f752ce _currentModel;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x000000000016077b
- (void).cxx_destruct;	// IMP=0x0000000000160745
@property(readonly, nonatomic) RefPtr_9bddf3b2 dictionaries; // @synthesize dictionaries=_dictionaries;
@property(nonatomic) shared_ptr_e9f752ce currentModel; // @synthesize currentModel=_currentModel;
- (void)didFinishLearning;	// IMP=0x00000000001605da
- (void)adaptToParagraph:(id)arg1 timeStamp:(double)arg2 adaptationType:(int)arg3;	// IMP=0x0000000000160526
- (void)load;	// IMP=0x000000000015fa80
- (void)updateAdaptationContext:(id)arg1;	// IMP=0x000000000015f855
- (id)initWithInputMode:(id)arg1;	// IMP=0x000000000015f4c1

@end

