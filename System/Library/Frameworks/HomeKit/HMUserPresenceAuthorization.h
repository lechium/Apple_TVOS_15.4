//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HMUserPresenceAuthorization : NSObject
{
    unsigned long long _value;	// 8 = 0x8
}

+ (id)authWithCoder:(id)arg1;	// IMP=0x0000000000244738
+ (id)authWithDict:(id)arg1;	// IMP=0x00000000002446d7
+ (id)authWithMessage:(id)arg1;	// IMP=0x0000000000244676
+ (id)authWithNumber:(id)arg1;	// IMP=0x0000000000244629
+ (id)authWithValue:(unsigned long long)arg1;	// IMP=0x00000000002445b9
@property(readonly, nonatomic) unsigned long long value; // @synthesize value=_value;
- (id)description;	// IMP=0x000000000024453b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000244499
@property(readonly, nonatomic) NSNumber *number;
- (void)addToPayload:(id)arg1;	// IMP=0x00000000002443eb
- (void)addToCoder:(id)arg1;	// IMP=0x0000000000244372
- (id)initWithNumber:(id)arg1;	// IMP=0x00000000002442de

@end

