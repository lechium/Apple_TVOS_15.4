//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HKCSVParser : NSObject
{
}

+ (id)parseCSV:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000103ad2
+ (id)recordWithScanner:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000103891
+ (_Bool)newlineWithScanner:(id)arg1;	// IMP=0x00000000001037a0
+ (id)fieldWithScanner:(id)arg1 error:(out id *)arg2;	// IMP=0x000000000010346b
+ (id)terminatingCharacterSet;	// IMP=0x0000000000103348
+ (id)newlineCharacterSet;	// IMP=0x00000000001032dc
+ (id)quoteCharacterSet;	// IMP=0x0000000000103270
+ (id)commaCharacterSet;	// IMP=0x0000000000103204

@end

