//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INObjectResolutionResult.h>

@interface LanguageOptionResolutionResult : INObjectResolutionResult
{
}

+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;	// IMP=0x00000000001908f0
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;	// IMP=0x00000000001908b0
+ (id)successWithResolvedObject:(id)arg1;	// IMP=0x0000000000190870
+ (id)confirmationRequiredWithLanguageOptionToConfirm:(id)arg1;	// IMP=0x0000000000190820
+ (id)disambiguationWithLanguageOptionsToDisambiguate:(id)arg1;	// IMP=0x00000000001907b0
+ (id)successWithResolvedLanguageOption:(id)arg1;	// IMP=0x0000000000190760
- (id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2;	// IMP=0x0000000000190a60

@end

