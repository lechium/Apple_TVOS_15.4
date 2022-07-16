//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INPersonResolutionResultExport-Protocol.h>

@class NSString;

@interface INPersonResolutionResult <INPersonResolutionResultExport>
{
}

+ (id)confirmationRequiredWithPersonToConfirm:(id)arg1;	// IMP=0x000000000033ec72
+ (id)disambiguationWithPeopleToDisambiguate:(id)arg1;	// IMP=0x000000000033ec60
+ (id)successWithResolvedPerson:(id)arg1;	// IMP=0x000000000033ec4e
+ (id)unsupportedWithReason:(unsigned long long)arg1 alternativePeople:(id)arg2;	// IMP=0x0000000000010db6
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x000000000033f47c
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x000000000033ec84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
