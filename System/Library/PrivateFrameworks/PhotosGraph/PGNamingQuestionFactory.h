//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHFetchResult;

@interface PGNamingQuestionFactory
{
    PHFetchResult *_persons;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000016ef60
@property(retain, nonatomic) PHFetchResult *persons; // @synthesize persons=_persons;
- (_Bool)_persistQuestions:(id)arg1 questionsToRemove:(id)arg2;	// IMP=0x000000000016ec7f
- (_Bool)_shouldAddNewNamingQuestionForPersonUUID:(id)arg1;	// IMP=0x000000000016eb36
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000016ea11
- (long long)questionOptions;	// IMP=0x000000000016ea06
- (unsigned short)questionType;	// IMP=0x000000000016e9fb

@end

