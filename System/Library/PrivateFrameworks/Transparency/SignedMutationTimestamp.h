//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface SignedMutationTimestamp
{
    NSString *_application;	// 8 = 0x8
}

+ (id)signedTypeWithObject:(id)arg1;	// IMP=0x00000000000548eb
+ (id)signedTypeWithObject:(id)arg1 verifier:(id)arg2 dataStore:(id)arg3;	// IMP=0x0000000000054837
- (void).cxx_destruct;	// IMP=0x00000000000553e6
@property(retain) NSString *application; // @synthesize application=_application;
- (unsigned long long)verifyWithError:(id *)arg1;	// IMP=0x0000000000054dbb
- (id)copyManagedObjectWithError:(id *)arg1;	// IMP=0x0000000000054ae5
- (id)parsedMutationWithError:(id *)arg1;	// IMP=0x000000000005492d
@property(retain, nonatomic) NSData *mutation;

@end

