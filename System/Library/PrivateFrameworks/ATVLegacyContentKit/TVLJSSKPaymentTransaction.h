//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ATVLegacyContentKit/TVLJSObject-Protocol.h>

@class SKPaymentTransaction;

@interface TVLJSSKPaymentTransaction : NSObject <TVLJSObject>
{
    struct OpaqueJSValue *_jsObjectRef;	// 8 = 0x8
    SKPaymentTransaction *_paymentTransaction;	// 16 = 0x10
}

+ (id)paymentTransactionFromJSValue:(struct OpaqueJSValue *)arg1 context:(struct OpaqueJSContext *)arg2;	// IMP=0x00000000000afcb0
+ (void)addClassDefinitionInContext:(struct OpaqueJSContext *)arg1;	// IMP=0x00000000000af942
@property(readonly, nonatomic) SKPaymentTransaction *paymentTransaction; // @synthesize paymentTransaction=_paymentTransaction;
- (void)_jsFinalize;	// IMP=0x00000000000afe95
- (struct OpaqueJSValue *)jsObjectRef;	// IMP=0x00000000000afe8b
- (void)dealloc;	// IMP=0x00000000000afe50
- (id)initWithPaymentTransaction:(id)arg1 context:(struct OpaqueJSContext *)arg2;	// IMP=0x00000000000afd96
- (id)init;	// IMP=0x00000000000afd62

@end

