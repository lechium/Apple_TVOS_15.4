//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSArray;

@interface CTSweetgumUsageInfo : NSObject <NSSecureCoding>
{
    NSArray *_accountMetrics;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000016868
- (void).cxx_destruct;	// IMP=0x000000000001688b
@property(retain, nonatomic) NSArray *accountMetrics; // @synthesize accountMetrics=_accountMetrics;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000016780
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001675d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000016647
- (id)description;	// IMP=0x00000000000165a0
- (id)init;	// IMP=0x0000000000016552

@end

