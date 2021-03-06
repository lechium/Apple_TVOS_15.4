//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MapHead, NSData;

@interface SignedMapHead
{
}

+ (id)signedTypeWithObject:(id)arg1;	// IMP=0x00000000000a1d30
+ (id)signedTypeWithObject:(id)arg1 verifier:(id)arg2 dataStore:(id)arg3;	// IMP=0x00000000000a1c7c
- (unsigned long long)verifyMMD:(double)arg1 error:(id *)arg2;	// IMP=0x00000000000a2cae
- (unsigned long long)verifyWithError:(id *)arg1;	// IMP=0x00000000000a238e
@property(readonly) MapHead *parsedMapHead;
- (id)createManagedObjectWithError:(id *)arg1;	// IMP=0x00000000000a1f43
- (id)copyManagedObject:(id *)arg1;	// IMP=0x00000000000a1d72
@property(retain, nonatomic) NSData *mapHead;

@end

