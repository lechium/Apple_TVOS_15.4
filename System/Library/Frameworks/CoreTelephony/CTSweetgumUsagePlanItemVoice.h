//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTSweetgumUsagePlanItemVoice : NSObject <NSSecureCoding>
{
    NSString *_minutesCapacity;	// 8 = 0x8
    NSString *_minutesUsed;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000c97b
- (void).cxx_destruct;	// IMP=0x000000000000c9b9
@property(retain, nonatomic) NSString *minutesUsed; // @synthesize minutesUsed=_minutesUsed;
@property(retain, nonatomic) NSString *minutesCapacity; // @synthesize minutesCapacity=_minutesCapacity;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000c8a1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000c833
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000c660
- (id)description;	// IMP=0x000000000000c576
- (id)init;	// IMP=0x000000000000c512

@end

