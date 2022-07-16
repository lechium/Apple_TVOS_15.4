//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OSAServicesClient/NSSecureCoding-Protocol.h>

@class NSString;

@interface OSALogIdentity : NSObject <NSSecureCoding>
{
    NSString *_incidentID;	// 8 = 0x8
    NSString *_bugType;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000037d1
- (void).cxx_destruct;	// IMP=0x0000000000003975
@property(readonly, nonatomic) NSString *bugType; // @synthesize bugType=_bugType;
@property(readonly, nonatomic) NSString *incidentID; // @synthesize incidentID=_incidentID;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003847
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000037d9
- (id)description;	// IMP=0x00000000000037a4
- (id)initWithIncidentID:(id)arg1 bugType:(id)arg2;	// IMP=0x000000000000370b

@end
