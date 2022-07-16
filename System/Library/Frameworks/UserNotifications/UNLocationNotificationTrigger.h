//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLRegion;

@interface UNLocationNotificationTrigger
{
    CLRegion *_region;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000477d
+ (id)triggerWithRegion:(id)arg1 repeats:(_Bool)arg2;	// IMP=0x0000000000004417
- (void).cxx_destruct;	// IMP=0x00000000000048f2
@property(readonly, copy, nonatomic) CLRegion *region; // @synthesize region=_region;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004820
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004785
- (_Bool)willTriggerAfterDate:(id)arg1 withRequestedDate:(id)arg2;	// IMP=0x0000000000004775
- (id)description;	// IMP=0x00000000000046b7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000045e5
- (unsigned long long)hash;	// IMP=0x0000000000004564
- (id)_initWithRegion:(id)arg1 repeats:(_Bool)arg2;	// IMP=0x000000000000446f

@end

