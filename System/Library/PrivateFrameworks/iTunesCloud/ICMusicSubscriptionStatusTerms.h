//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@interface ICMusicSubscriptionStatusTerms : NSObject <NSCopying, NSSecureCoding>
{
    long long _acceptedVersion;	// 8 = 0x8
    long long _currentVersion;	// 16 = 0x10
    long long _sourceType;	// 24 = 0x18
    long long _type;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001ba4f7
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(readonly, nonatomic) long long currentVersion; // @synthesize currentVersion=_currentVersion;
@property(readonly, nonatomic) long long acceptedVersion; // @synthesize acceptedVersion=_acceptedVersion;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001ba43a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ba37f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ba374
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ba2e2
- (id)initWithResponseTermsDictionary:(id)arg1;	// IMP=0x00000000001ba140

@end

