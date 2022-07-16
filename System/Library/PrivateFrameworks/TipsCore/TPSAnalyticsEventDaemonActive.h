//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TPSAnalyticsEventDaemonActive
{
    _Bool _alreadyRunning;	// 8 = 0x8
    NSString *_reason;	// 16 = 0x10
}

+ (id)eventWithReason:(id)arg1 alreadyRunning:(_Bool)arg2;	// IMP=0x0000000000036cbe
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000036b73
- (void).cxx_destruct;	// IMP=0x0000000000036ebf
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (id)mutableAnalyticsEventRepresentation;	// IMP=0x0000000000036dea
- (id)eventName;	// IMP=0x0000000000036db7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000036d16
- (id)_initWithReason:(id)arg1 alreadyRunning:(_Bool)arg2;	// IMP=0x0000000000036c3c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000036b7b

@end

