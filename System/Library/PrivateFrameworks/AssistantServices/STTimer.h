//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface STTimer
{
    NSString *_timerId;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    NSNumber *_value;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000092b8b
- (void).cxx_destruct;	// IMP=0x0000000000092dc5
@property(copy, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *timerId; // @synthesize timerId=_timerId;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000092c51
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000092b93

@end
