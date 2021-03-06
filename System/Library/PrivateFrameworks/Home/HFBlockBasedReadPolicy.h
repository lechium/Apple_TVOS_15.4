//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFCharacteristicReadPolicy-Protocol.h>

@class NSString;

@interface HFBlockBasedReadPolicy : NSObject <HFCharacteristicReadPolicy>
{
    CDUnknownBlockType _readPolicyBlock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000138f65
@property(readonly, copy, nonatomic) CDUnknownBlockType readPolicyBlock; // @synthesize readPolicyBlock=_readPolicyBlock;
- (unsigned long long)evaluateWithCharacteristic:(id)arg1 traits:(out id *)arg2;	// IMP=0x0000000000138ee9
- (id)initWithReadPolicyBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000138e76
- (id)init;	// IMP=0x0000000000138dc1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

