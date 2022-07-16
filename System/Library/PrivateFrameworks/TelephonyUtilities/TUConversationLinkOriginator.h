//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSString, TUHandle;

@interface TUConversationLinkOriginator : NSObject <NSCopying, NSSecureCoding>
{
    TUHandle *_handle;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    long long _revision;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001ea41
- (void).cxx_destruct;	// IMP=0x000000000001f101
@property(nonatomic) long long revision; // @synthesize revision=_revision;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) TUHandle *handle; // @synthesize handle=_handle;
- (_Bool)isEqualToConversationLinkOriginator:(id)arg1;	// IMP=0x000000000001ef93
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001ef2c
- (unsigned long long)hash;	// IMP=0x000000000001ee8d
- (id)description;	// IMP=0x000000000001ecc9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001ec78
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001eb2b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001ea49
- (id)initWithIdentifier:(id)arg1 revision:(long long)arg2 handle:(id)arg3;	// IMP=0x000000000001e992

@end
