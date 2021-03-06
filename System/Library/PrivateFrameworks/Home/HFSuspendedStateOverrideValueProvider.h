//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFOverrideCharacteristicValueProvider-Protocol.h>

@class NSString;

@interface HFSuspendedStateOverrideValueProvider : NSObject <HFOverrideCharacteristicValueProvider>
{
}

+ (id)overrideDefaultValueForCharacteristicType;	// IMP=0x00000000001d2cd3
- (id)valueSource:(id)arg1 overrideValueForCharacteristic:(id)arg2;	// IMP=0x00000000001d2a99
- (_Bool)valueSource:(id)arg1 shouldOverrideValueForCharacteristic:(id)arg2;	// IMP=0x00000000001d2990

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

