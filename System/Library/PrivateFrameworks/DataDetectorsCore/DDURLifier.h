//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DDURLifier : NSObject
{
}

+ (id)urlIfyNode:(id)arg1 usingScanner:(struct __DDScanner *)arg2 phoneNumberTypes:(unsigned long long)arg3 withReferenceDate:(id)arg4 andTimeZone:(id)arg5;	// IMP=0x0000000000017a4d
+ (id)urlIfyNode:(id)arg1 usingScanner:(struct __DDScanner *)arg2 phoneNumberTypes:(unsigned long long)arg3;	// IMP=0x0000000000017a27
+ (_Bool)urlIfyNode:(id)arg1;	// IMP=0x0000000000017a10
+ (_Bool)urlIfyNode:(id)arg1 phoneNumberTypes:(unsigned long long)arg2;	// IMP=0x00000000000178dc
+ (_Bool)urlIfyTextNode:(id)arg1 inNode:(id)arg2 forMatches:(id)arg3;	// IMP=0x000000000001769e
+ (id)urlMatchesForString:(id)arg1 usingScanner:(struct __DDScanner *)arg2 withPhoneNumberTypes:(unsigned long long)arg3 referenceDate:(id)arg4 timeZone:(id)arg5 storingResultsIn:(id)arg6;	// IMP=0x0000000000017505
+ (id)urlMatchesForString:(id)arg1 phoneNumberTypes:(unsigned long long)arg2;	// IMP=0x0000000000017289
+ (id)urlMatchesForString:(id)arg1 includingTel:(_Bool)arg2;	// IMP=0x0000000000017272
+ (id)urlMatchesForString:(id)arg1;	// IMP=0x000000000001725b

@end

