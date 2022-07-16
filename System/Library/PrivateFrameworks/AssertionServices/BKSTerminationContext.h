//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssertionServices/NSCopying-Protocol.h>

@class NSString;

@interface BKSTerminationContext : NSObject <NSCopying>
{
    long long _exceptionCode;	// 8 = 0x8
    unsigned long long _reportType;	// 16 = 0x10
    NSString *_explanation;	// 24 = 0x18
}

+ (id)context;	// IMP=0x00000000000058e4
+ (id)terminationAssertionContext;	// IMP=0x0000000000005886
- (void).cxx_destruct;	// IMP=0x0000000000005ab7
@property(copy, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
@property(nonatomic) unsigned long long reportType; // @synthesize reportType=_reportType;
@property(nonatomic) long long exceptionCode; // @synthesize exceptionCode=_exceptionCode;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000005a00
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000599f
- (_Bool)isEqualToTerminationContext:(id)arg1;	// IMP=0x00000000000058fd

@end

