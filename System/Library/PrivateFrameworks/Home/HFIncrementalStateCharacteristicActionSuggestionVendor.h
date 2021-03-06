//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFCharacteristicActionSuggestionVending-Protocol.h>

@class NSString;

@interface HFIncrementalStateCharacteristicActionSuggestionVendor : NSObject <HFCharacteristicActionSuggestionVending>
{
    NSString *_characteristicType;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001f9dbb
@property(readonly, copy, nonatomic) NSString *characteristicType; // @synthesize characteristicType=_characteristicType;
- (id)suggestedActionForCharacteristic:(id)arg1 candidateActions:(id)arg2;	// IMP=0x00000000001f9a68
- (id)initWithCharacteristicType:(id)arg1;	// IMP=0x00000000001f99fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

