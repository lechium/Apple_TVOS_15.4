//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class INVocabulary, NSString;

@interface PLIntentsSiriVocabularyService : NSObject
{
    INVocabulary *_vocabulary;	// 8 = 0x8
}

+ (id)sharedSiriVocabularyService;	// IMP=0x002000000000bd6c
- (void).cxx_destruct;	// IMP=0x002000000000bd5c
- (void)setVocabularyForContactNames:(id)arg1;	// IMP=0x001000000000bd41
- (void)setVocabularyForAlbumNames:(id)arg1;	// IMP=0x001000000000bd26
- (id)initWithVocabulary:(id)arg1;	// IMP=0x001000000000bcbb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

