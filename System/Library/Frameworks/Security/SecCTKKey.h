//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Security/NSCopying-Protocol.h>

@class NSDictionary, TKClientTokenObject;

__attribute__((visibility("hidden")))
@interface SecCTKKey : NSObject <NSCopying>
{
    TKClientTokenObject *_tokenObject;	// 8 = 0x8
    NSDictionary *_keychainAttributes;	// 16 = 0x10
    NSDictionary *_sessionParameters;	// 24 = 0x18
}

+ (id)fromKeyRef:(struct __SecKey *)arg1;	// IMP=0x000000000007fdfb
- (void).cxx_destruct;	// IMP=0x000000000007fdc8
@property(retain, nonatomic) NSDictionary *sessionParameters; // @synthesize sessionParameters=_sessionParameters;
@property(readonly, nonatomic) NSDictionary *keychainAttributes; // @synthesize keychainAttributes=_keychainAttributes;
@property(retain, nonatomic) TKClientTokenObject *tokenObject; // @synthesize tokenObject=_tokenObject;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007fb90
- (id)performOperation:(long long)arg1 data:(id)arg2 algorithms:(id)arg3 parameters:(id)arg4 error:(id *)arg5;	// IMP=0x000000000007f9dc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007f9ae
- (id)initFromKey:(id)arg1;	// IMP=0x000000000007f8e3
- (id)initWithAttributes:(id)arg1 error:(id *)arg2;	// IMP=0x000000000007f0c3

@end

