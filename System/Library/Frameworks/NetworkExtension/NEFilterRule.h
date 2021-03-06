//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NENetworkRule;

@interface NEFilterRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    NENetworkRule *_networkRule;	// 8 = 0x8
    long long _action;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000182b0f
- (void).cxx_destruct;	// IMP=0x0000000000182c95
@property(readonly) long long action; // @synthesize action=_action;
@property(readonly, copy) NENetworkRule *networkRule; // @synthesize networkRule=_networkRule;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000182c3a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000182b89
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000182b17
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000182a68
- (_Bool)checkValidityAndCollectErrors:(id)arg1;	// IMP=0x00000000001827ca
- (id)initWithNetworkRule:(id)arg1 action:(long long)arg2;	// IMP=0x000000000018274c

@end

