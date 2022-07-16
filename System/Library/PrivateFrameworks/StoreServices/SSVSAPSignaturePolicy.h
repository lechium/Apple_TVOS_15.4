//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSArray;

@interface SSVSAPSignaturePolicy : NSObject <NSCopying>
{
    long long _policyType;	// 8 = 0x8
    NSArray *_signatureComponents;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000ab473
@property(readonly, copy, nonatomic) NSArray *signatureComponents; // @synthesize signatureComponents=_signatureComponents;
@property(readonly, nonatomic) long long policyType; // @synthesize policyType=_policyType;
- (id)_dataToSignWithDataSource:(id)arg1;	// IMP=0x00000000000ab1bf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ab1b4
- (id)dataToSignWithURLResponse:(id)arg1 responseData:(id)arg2;	// IMP=0x00000000000ab0d2
- (id)dataToSignWithURLRequest:(id)arg1;	// IMP=0x00000000000ab048
- (id)dataToSignWithRequestProperties:(id)arg1;	// IMP=0x00000000000aafbe
- (id)initWithSignedActionsDictionary:(id)arg1;	// IMP=0x00000000000aab6f
- (id)initWithPolicyType:(long long)arg1 signatureComponents:(id)arg2;	// IMP=0x00000000000aaaf1
- (id)initWithPolicyType:(long long)arg1;	// IMP=0x00000000000aaadd

@end
