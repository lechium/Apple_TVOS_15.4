//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DeviceManagement/NSCopying-Protocol.h>
#import <DeviceManagement/NSSecureCoding-Protocol.h>

@class NSString;

@interface DMFReportingRequirements : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _requireActiveConnection;	// 8 = 0x8
    NSString *_reachableHostName;	// 16 = 0x10
    double _updateCoalescenceInterval;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000035b70
- (void).cxx_destruct;	// IMP=0x0000000000035ec5
@property(nonatomic) _Bool requireActiveConnection; // @synthesize requireActiveConnection=_requireActiveConnection;
@property(nonatomic) double updateCoalescenceInterval; // @synthesize updateCoalescenceInterval=_updateCoalescenceInterval;
@property(copy, nonatomic) NSString *reachableHostName; // @synthesize reachableHostName=_reachableHostName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000035deb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000035cdd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000035b78
- (id)description;	// IMP=0x0000000000035ac8
- (id)init;	// IMP=0x0000000000035a86

@end

