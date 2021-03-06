//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LoggingSupport/NSSecureCoding-Protocol.h>

@interface OSLogEventStreamPosition : NSObject <NSSecureCoding>
{
    unsigned char _source[16];	// 8 = 0x8
    unsigned char _uuid[16];	// 24 = 0x18
    unsigned long long _ct;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000029ed6
@property(readonly) unsigned long long continuousTime;
@property(readonly) const char *UUID;
@property(readonly) const char *sourceUUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000029df9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000029cf3
- (id)initWithSource:(const char *)arg1 bootUUID:(const char *)arg2 time:(unsigned long long)arg3;	// IMP=0x0000000000029cb0

@end

