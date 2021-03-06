//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFCharacteristicReadPolicy-Protocol.h>

@class NSString;

@interface HFLegacyBlockBasedReadPolicy : NSObject <HFCharacteristicReadPolicy>
{
    CDUnknownBlockType _readValidator;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000013914c
@property(readonly, copy, nonatomic) CDUnknownBlockType readValidator; // @synthesize readValidator=_readValidator;
- (unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id *)arg2;	// IMP=0x000000000013909d
- (id)initWithReadValidator:(CDUnknownBlockType)arg1;	// IMP=0x000000000013902a
- (id)init;	// IMP=0x0000000000138f75

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

