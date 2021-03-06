//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/NSCopying-Protocol.h>
#import <Trial/NSSecureCoding-Protocol.h>

@class NSDate;

@interface TRIEvaluationStatusCursor : NSObject <NSCopying, NSSecureCoding>
{
    double _secondsFromEpoch;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007ff1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000008164
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007ff9
- (unsigned long long)hash;	// IMP=0x0000000000007f9e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007ee1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007ed6
@property(readonly, nonatomic) NSDate *date;
- (id)initWithSecondsFromEpoch:(double)arg1;	// IMP=0x0000000000007e5b

@end

