//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface AFShowAlarmRequest
{
    NSArray *_alarms;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000163bac
- (void).cxx_destruct;	// IMP=0x0000000000163d96
@property(copy, nonatomic) NSArray *alarms; // @synthesize alarms=_alarms;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000163c31
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000163bb4
- (id)createResponse;	// IMP=0x0000000000163b76

@end

