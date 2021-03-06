//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface NEAOVPNException : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_serviceName;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    NSArray *_limitToProtocols;	// 24 = 0x18
    long long _action;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000a3f8
- (void).cxx_destruct;	// IMP=0x000000000000ac41
@property long long action; // @synthesize action=_action;
@property(copy) NSArray *limitToProtocols; // @synthesize limitToProtocols=_limitToProtocols;
@property(copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (_Bool)isLimitedToUDP;	// IMP=0x000000000000aa7a
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000000a926
- (_Bool)checkValidityAndCollectErrors:(id)arg1;	// IMP=0x000000000000a774
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000a67b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000a574
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000a400

@end

