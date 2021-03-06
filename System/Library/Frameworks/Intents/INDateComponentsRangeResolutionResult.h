//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INDateComponentsRangeResolutionResultExport-Protocol.h>

@class NSString;

@interface INDateComponentsRangeResolutionResult <INDateComponentsRangeResolutionResultExport>
{
}

+ (id)confirmationRequiredWithDateComponentsRangeToConfirm:(id)arg1;	// IMP=0x0000000000082c20
+ (id)disambiguationWithDateComponentsRangesToDisambiguate:(id)arg1;	// IMP=0x0000000000082c0e
+ (id)successWithResolvedDateComponentsRange:(id)arg1;	// IMP=0x0000000000082bfc
+ (id)unsupportedWithReason:(unsigned long long)arg1 alternativeDateComponentsRanges:(id)arg2;	// IMP=0x0000000000010dc8
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x00000000000831f5
- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;	// IMP=0x0000000000082c32

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

