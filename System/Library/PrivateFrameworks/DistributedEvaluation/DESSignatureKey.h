//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DESSignatureKey : NSObject
{
    struct __SecKey *_key;	// 8 = 0x8
}

+ (struct __SecKey *)keyFromCertificateChain:(id)arg1;	// IMP=0x0000000000005c8f
+ (id)keyFromData:(id)arg1;	// IMP=0x0000000000005bfb
+ (void)initialize;	// IMP=0x0000000000005bc9
- (_Bool)validateSignature:(id)arg1 data:(id)arg2 algorithm:(struct __CFString *)arg3;	// IMP=0x0000000000006430
- (_Bool)validateBase64Signature:(id)arg1 data:(id)arg2 algorithm:(struct __CFString *)arg3;	// IMP=0x000000000000637f
- (_Bool)validateBase64Signature:(id)arg1 data:(id)arg2;	// IMP=0x0000000000006363
- (void)dealloc;	// IMP=0x0000000000006324
- (id)initWithKey:(struct __SecKey *)arg1;	// IMP=0x00000000000062e7
- (id)init;	// IMP=0x0000000000005bf5

@end

