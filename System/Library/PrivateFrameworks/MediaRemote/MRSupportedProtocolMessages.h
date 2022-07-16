//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaRemote/NSSecureCoding-Protocol.h>

@interface MRSupportedProtocolMessages : NSObject <NSSecureCoding>
{
    unsigned long long _lastSupportedMessageType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000198fd8
@property(readonly, nonatomic) unsigned long long lastSupportedMessageType; // @synthesize lastSupportedMessageType=_lastSupportedMessageType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000198fe0
- (_Bool)isSupported:(unsigned long long)arg1;	// IMP=0x0000000000198fcb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000198f8d
- (id)initWithLastSupportedMessageType:(unsigned long long)arg1;	// IMP=0x0000000000198f50
- (id)initWithAllSupportedMessages;	// IMP=0x0000000000198f39

@end

