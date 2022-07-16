//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInputCore/TILanguageLikelihoodModeling-Protocol.h>

@class NSString;

@interface _TILanguageLikelihoodModel : NSObject <TILanguageLikelihoodModeling>
{
    void *_languageLikelihoodModelRef;	// 8 = 0x8
}

+ (id)singletonInstance;	// IMP=0x0000000000149697
+ (id)sharedLanguageLikelihoodModel;	// IMP=0x000000000014965a
+ (void)setSharedLanguageLikelihoodModel:(id)arg1;	// IMP=0x000000000014e0a5
- (unsigned long long)emojiUsageCountForApp:(id)arg1 lastEmojiCountUpdateTime:(double *)arg2;	// IMP=0x0000000000149529
- (double)lastOfflineAdaptationTimeForApp:(id)arg1;	// IMP=0x00000000001494c9
- (void)priorProbabilityForLanguages:(id)arg1 recipient:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000149044
- (id)rankedLanguagesForRecipient:(id)arg1;	// IMP=0x0000000000148f1b
- (void)addEvidence:(id)arg1 timestamp:(double)arg2 adaptationType:(int)arg3 forRecipient:(id)arg4 app:(id)arg5 language:(id)arg6;	// IMP=0x0000000000148d89
@property(readonly, nonatomic) void *languageLikelihoodModelRef; // @synthesize languageLikelihoodModelRef=_languageLikelihoodModelRef;
- (id)init;	// IMP=0x0000000000148ce1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
