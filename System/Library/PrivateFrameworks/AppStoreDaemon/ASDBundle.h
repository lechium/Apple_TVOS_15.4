//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface ASDBundle : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004e2bf
+ (id)bundleWithIdentifier:(id)arg1;	// IMP=0x000000000004e1d7
- (void).cxx_destruct;	// IMP=0x000000000004e39f
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004e38a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000004e367
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004e2c7
- (id)debugDescription;	// IMP=0x000000000004e2a9
- (id)description;	// IMP=0x000000000004e293
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000004e220

// Remaining properties
@property(readonly, nonatomic) NSURL *URL; // @dynamic URL;

@end

