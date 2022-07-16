//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSSecureCoding-Protocol.h>

@interface SPOfflineAdvertisingConfiguration : NSObject <NSSecureCoding>
{
    long long _shortIntervalCount;	// 8 = 0x8
    long long _longIntervalCount;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000010202
@property(nonatomic) long long longIntervalCount; // @synthesize longIntervalCount=_longIntervalCount;
@property(nonatomic) long long shortIntervalCount; // @synthesize shortIntervalCount=_shortIntervalCount;
- (id)description;	// IMP=0x0000000000010520
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000104b8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001044a
- (id)dictionaryRepresentation;	// IMP=0x0000000000010338
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x0000000000010252
- (id)initWithShortIntervalCount:(long long)arg1 longIntervalCount:(long long)arg2;	// IMP=0x000000000001020a

@end

