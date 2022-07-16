//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/_SFKeyAttributes-Protocol.h>

@class NSString, _SFKeySpecifier;

@interface _SFAsymmetricKeyAttributes : NSObject <_SFKeyAttributes>
{
    _SFKeySpecifier *_asymmetricKeySpecifier;	// 8 = 0x8
    NSString *_asymmetricKeyDomain;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000097ae
@property(readonly, copy, nonatomic) NSString *keyDomain; // @synthesize keyDomain=_asymmetricKeyDomain;
@property(readonly, copy, nonatomic) _SFKeySpecifier *keySpecifier; // @synthesize keySpecifier=_asymmetricKeySpecifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009766
- (id)initWithSpecifier:(id)arg1 domain:(id)arg2;	// IMP=0x00000000000096ad
- (id)initWithSpecifier:(id)arg1;	// IMP=0x0000000000009694

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

