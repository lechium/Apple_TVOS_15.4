//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SFClearInputFeedback
{
    unsigned long long _triggerEvent;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000182e96
@property(nonatomic) unsigned long long triggerEvent; // @synthesize triggerEvent=_triggerEvent;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000182df7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000182d7d
- (id)initWithEvent:(unsigned long long)arg1;	// IMP=0x0000000000182d39

@end

