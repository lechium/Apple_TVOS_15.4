//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class PDScheduledActivityCriteria;
@protocol NSObject><NSSecureCoding;

@interface PDScheduledActivityRegistration : NSObject <NSSecureCoding>
{
    PDScheduledActivityCriteria *_activityCriteria;	// 8 = 0x8
    id <NSObject><NSSecureCoding> _activityContext;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001223ba
- (void).cxx_destruct;	// IMP=0x00000000001225ad
@property(readonly, nonatomic) id <NSObject><NSSecureCoding> activityContext; // @synthesize activityContext=_activityContext;
@property(readonly, nonatomic) PDScheduledActivityCriteria *activityCriteria; // @synthesize activityCriteria=_activityCriteria;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000122500
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001223c2
- (_Bool)isEqualToScheduledActivityRegistration:(id)arg1;	// IMP=0x000000000012236d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000122305
- (unsigned long long)hash;	// IMP=0x000000000012228e
- (id)initWithActivityCriteria:(id)arg1 activityContext:(id)arg2;	// IMP=0x00000000001221d0

@end

