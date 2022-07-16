//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INVocabularyUpdateService-Protocol.h>

@class NSString;

@protocol INIntentPreferencesAndVocabularyUpdateService <INVocabularyUpdateService>
- (void)verifyProcessCanDonateIntentWithName:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)fetchCurrentSiriLanguageCode:(void (^)(NSString *))arg1;
- (void)requestSiriAuthorization:(void (^)(long long))arg1;
- (void)fetchSiriAuthorization:(void (^)(long long))arg1;
@end

