//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _SWCPrefs : NSObject
{
}

+ (id)sharedPrefs;	// IMP=0x000000000000fdf8
- (id)descriptionOfAllPrefs;	// IMP=0x00000000000105cb
@property(readonly, getter=isAppleInternal) _Bool appleInternal;
@property(readonly) _Bool verifyExtendedValidation;
- (double)retryIntervalAfterSuccess:(_Bool)arg1;	// IMP=0x000000000001051e
@property(readonly) double retryIntervalAfterSuccess;
@property(readonly) double retryIntervalAfterFailure;
- (double)retryIntervalAfterReachLimitWithFailure:(unsigned long long)arg1;	// IMP=0x0000000000010393
@property(readonly) unsigned long long maximumRetryCount;
- (id)containerURLReturningError:(id *)arg1;	// IMP=0x000000000000fe5d
- (void)_setString:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000010b74
- (id)_stringForKey:(id)arg1 defaultValue:(id)arg2;	// IMP=0x0000000000010aae
- (unsigned long long)_unsignedIntegerForKey:(id)arg1 defaultValue:(unsigned long long)arg2 minimumValue:(unsigned long long)arg3 maximumValue:(unsigned long long)arg4;	// IMP=0x0000000000010963
- (unsigned long long)_unsignedIntegerForKey:(id)arg1 defaultValue:(unsigned long long)arg2;	// IMP=0x0000000000010947
- (_Bool)_boolForKey:(id)arg1 defaultValue:(_Bool)arg2;	// IMP=0x00000000000108d3
- (unsigned long long)_recheckFuzzForSuccess:(_Bool)arg1;	// IMP=0x0000000000010865
- (id)_init;	// IMP=0x0000000000010836

@end

