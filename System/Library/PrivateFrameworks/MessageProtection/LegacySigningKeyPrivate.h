//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface LegacySigningKeyPrivate : NSObject
{
    id _secKeyRef;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000057c5
@property(retain, nonatomic) id secKeyRef; // @synthesize secKeyRef=_secKeyRef;
- (id)publicKey;	// IMP=0x000000000000573f
- (id)dataRepresentation;	// IMP=0x0000000000005719
- (id)signData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000056e9
- (id)initWithData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000055a3
- (id)init;	// IMP=0x0000000000005484

@end

